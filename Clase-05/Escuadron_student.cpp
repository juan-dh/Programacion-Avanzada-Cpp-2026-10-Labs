// Escuadron_student.cpp
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Estudiante: [Tu Nombre]
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#include <iostream>
#include <string>
#include <vector>

enum class HealthState {
    Healthy,
    Infected,
    Zombie,
    Dead
};

class Survivor {
private:
    std::string name;
    int health{100};
    HealthState state{HealthState::Healthy};

public:
    Survivor(const std::string& nameVal, int healthVal, HealthState stateVal = HealthState::Healthy)
        : name{nameVal}, health{healthVal}, state{stateVal} {
        if (health <= 0) {
            health = 0;
            state = HealthState::Dead;
        }
    }

    const std::string& getName() const { return name; }
    int getHealth() const { return health; }
    HealthState getState() const { return state; }

    inline void applyDamage(int damage) {
        health -= damage;
        if (health <= 0) {
            health = 0;
            state = HealthState::Dead;
        }
    }

    inline void heal(int amount) {
        if (state != HealthState::Dead) {
            health += amount;
            if (health > 100) health = 100;
        }
    }

    inline void fight() {
        std::cout << " -> " << name << " pelea cuerpo a cuerpo desarmado.\n";
        applyDamage(15);
    }

    inline void fight(const std::string& weapon, int bonus) {
        std::cout << " -> " << name << " ataca con " << weapon << " (+" << bonus << " dano).\n";
        applyDamage(5);
    }

    std::string getStateString() const {
        switch (state) {
            case HealthState::Healthy:  return "Saludable";
            case HealthState::Infected: return "Infectado";
            case HealthState::Zombie:   return "Zombie";
            case HealthState::Dead:     return "Muerto";
            default:                    return "Desconocido";
        }
    }

    void displayCard() const {
        std::cout << "Superviviente: " << name << " | Salud: " << health << " HP | Estado: " << getStateString() << "\n";
    }
};

int main() {
    // Creacion y gestion dinamica del escuadron con std::vector
    // TODO: Declarar el std::vector de tipo Survivor llamado 'escuadron'
    std::vector< /* TODO */ > escuadron;

    // TODO: Agregar supervivientes al escuadron con .push_back()
    escuadron.push_back(Survivor{"Ellie Williams", 90, HealthState::Healthy});
    escuadron.push_back(Survivor{"Joel Miller", 45, HealthState::Healthy});
    escuadron.push_back(Survivor{"Tommy Miller", 70, HealthState::Healthy});
    // TODO: Agregar a Tess ("Tess Servopoulos", 30, HealthState::Infected)
    escuadron.push_back(Survivor{ /* TODO */ });

    // Estadio inicial del escuadron
    std::cout << "=== ESCUADRON INICIAL (Total: " << escuadron.size() << ") ===\n";
    // TODO: Recorrer el escuadron por referencia constante para solo lectura
    for ( /* TODO: const auto& survivor */ : escuadron) {
        survivor.displayCard();
    }

    // Simulacion de combate con metodos sobrecargados
    std::cout << "\n=== EMBOSCADA DE INFECTADOS ===\n";
    // TODO: Ellie (posicion 0) ataca con Navaja (+20 dano) y Joel (posicion 1) pelea desarmado
    escuadron[0].fight( /* TODO: "Navaja", 20 */ );
    escuadron[1].fight( /* TODO */ );

    // Atencion medica al escuadron (Modificacion directa con referencia en range-based for)
    std::cout << "\n=== APLICANDO CURACION AL ESCUADRON (+20 HP) ===\n";
    // TODO: Recorrer el escuadron por referencia modificable y curar 20 HP
    for ( /* TODO: auto& survivor */ : escuadron) {
        survivor.heal( /* TODO: 20 */ );
    }

    // Estado final del escuadron
    std::cout << "\n=== ESTADO FINAL DEL ESCUADRON ===\n";
    for (const auto& survivor : escuadron) {
        survivor.displayCard();
    }

    return 0;
}
