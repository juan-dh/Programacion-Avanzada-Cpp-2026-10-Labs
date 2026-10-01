// SimuladorRefugio.cpp

#include <iostream>
#include <string>
#include <cstdlib>

const int FILAS = 4;
const int COLS = 4;

enum class HealthState
{
    Healthy,
    Infected,
    Zombie,
    Dead
};

// Entidad Humano (Supervivientes y Zombies de la Clase 7)
class Human
{
private:
    std::string name;
    int health{100};
    HealthState state{HealthState::Healthy};
    int damage{30};

public:
    Human(const std::string &n, int h, HealthState s = HealthState::Healthy, int d = 30)
        : name{n}, health{h}, state{s}, damage{d}
    {
        if (health <= 0)
        {
            health = 0;
            state = HealthState::Dead;
        }
    }

    const std::string &getName() const { return name; }
    int getHealth() const { return health; }
    HealthState getState() const { return state; }
    int getDamage() const { return damage; }

    void setState(HealthState newState)
    {
        state = newState;
    }

    inline void applyDamage(int damageAmount)
    {
        health -= damageAmount;
        if (health <= 0)
        {
            health = 0;
            state = HealthState::Dead;
        }
    }

    // Interaccion de ataque zombie via puntero mutable (Clase 7)
    void attack(Human *target) const
    {
        if (target != nullptr && state == HealthState::Zombie)
        {
            std::cout << "🧟 [" << name << "] ataca ferozmente a "
                      << target->getName() << " causando " << damage << " de dano!\n";
            target->applyDamage(damage);
            if (target->getState() == HealthState::Healthy)
            {
                std::cout << "☣️  ¡" << target->getName() << " ha sido infectado y se transforma en Zombie!\n";
                target->setState(HealthState::Zombie);
            }
        }
    }

    std::string getStateString() const
    {
        switch (state)
        {
        case HealthState::Healthy:
            return "Saludable";
        case HealthState::Infected:
            return "Infectado";
        case HealthState::Zombie:
            return "Zombie";
        case HealthState::Dead:
            return "Muerto";
        default:
            return "Desconocido";
        }
    }

    void displayCard() const
    {
        std::cout << (state == HealthState::Zombie ? "🧟 " : "🧑 ")
                  << "Humano: " << name << " | Salud: " << health
                  << " HP | Estado: " << getStateString() << "\n";
    }
};

// Renderizado directo desde la matriz de punteros
// Si la celda es nullptr -> pinta suelo ("·  ")
// Si la celda tiene un puntero -> consulta el estado del objeto y pinta su emoji
void renderizar(Human *const mapa[FILAS][COLS])
{
    std::cout << "\n+---------+\n";
    std::cout << "| MAPA 4x4|\n";
    std::cout << "+---------+\n";

    for (int r = 0; r < FILAS; ++r)
    {
        for (int c = 0; c < COLS; ++c)
        {
            if (mapa[r][c] == nullptr)
            {
                std::cout << "·  "; // Suelo libre
            }
            else
            {
                std::cout << (mapa[r][c]->getState() == HealthState::Zombie ? "🧟 " : "🧑 ");
            }
        }
        std::cout << '\n';
    }
    std::cout << "+------------+\n";
}

int main()
{
    // Semilla determinista
    srand(7);

    // =========================================================================
    // PASO 1: Instanciacion en el Stack mediante un arreglo nativo de objetos
    // Cada elemento posee su propia identidad e historial en memoria:
    // =========================================================================
    Human humanos[3] = {
        Human{"Joel", 80, HealthState::Healthy},
        Human{"Ellie", 70, HealthState::Healthy},
        Human{"Chasqueador", 100, HealthState::Zombie, 30}};

    // =========================================================================
    // PASO 2: Matriz unica de punteros Human* (todas las celdas en nullptr)
    // =========================================================================
    Human *mapa[FILAS][COLS] = {};

    // Poblar la matriz asignando las direcciones (&) de cada objeto real
    mapa[2][1] = &humanos[0]; // Joel
    mapa[3][2] = &humanos[1]; // Ellie
    mapa[0][2] = &humanos[2]; // Chasqueador

    std::cout << "=== ESTADO INICIAL ===\n";
    renderizar(mapa);
    humanos[0].displayCard();
    humanos[1].displayCard();
    humanos[2].displayCard();

    // =========================================================================
    // PASO 3: Bucle de Simulacion Autonoma (3 turnos)
    // =========================================================================
    for (int turno = 1; turno <= 3; ++turno)
    {
        std::cout << "=== Iteración " << turno << " ===\n";

        bool movido[FILAS][COLS] = {};

        for (int r = 0; r < FILAS; ++r)
        {
            for (int c = 0; c < COLS; ++c)
            {
                Human *entidad = mapa[r][c];

                // Solo procesamos entidades que no hayan actuado este turno
                if (entidad != nullptr && !movido[r][c])
                {
                    int dir = rand() % 4;
                    int nr = r;
                    int nc = c;

                    // Desplazamiento segun la direccion aleatoria
                    switch (dir)
                    {
                    case 0:
                        nr = r - 1;
                        break; // Arriba
                    case 1:
                        nr = r + 1;
                        break; // Abajo
                    case 2:
                        nc = c - 1;
                        break; // Izquierda
                    case 3:
                        nc = c + 1;
                        break; // Derecha
                    }

                    // Validar limites de la matriz
                    if (nr >= 0 && nr < FILAS && nc >= 0 && nc < COLS)
                    {
                        Human *destino = mapa[nr][nc];

                        // CASO A: Suelo libre (nullptr) -> Transferencia de puntero
                        if (destino == nullptr)
                        {
                            mapa[nr][nc] = entidad;
                            mapa[r][c] = nullptr;
                            movido[nr][nc] = true;
                        }
                        // CASO B: Colision entre humanos -> Ataque si es Zombie contra Healthy
                        else
                        {
                            if (entidad->getState() == HealthState::Zombie &&
                                destino->getState() == HealthState::Healthy)
                            {
                                entidad->attack(destino);
                            }
                        }
                    }
                }
            }
        }

        renderizar(mapa);
    }

    std::cout << "\n=== ESTADO FINAL ===\n";
    renderizar(mapa);
    humanos[0].displayCard();
    humanos[1].displayCard();
    humanos[2].displayCard();

    return 0;
}
