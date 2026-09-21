// MapaRefugio_student.cpp
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Clase 07: Punteros, Operador sizeof, Aritmética de Punteros y Array Decay
// Estudiante: [Tu Nombre]
// Profesor: Juan Diego Haro (jharo@asig.com.ec)
//
// Compilación:
// g++ -std=c++14 -Wall -Wextra MapaRefugio_student.cpp -o mapa_student
// ./mapa_student

#include <iostream>
#include <string>

const int FILAS = 10;
const int COLS = 12;

enum class HealthState {
    Healthy,
    Infected,
    Zombie,
    Dead
};

// 1. Entidad Fruta (Alimento restaurador)
class Fruit {
private:
    std::string type{"Manzana silvestre"};
    int healAmount{20};

public:
    Fruit(const std::string& typeVal = "Manzana silvestre", int healVal = 20)
        : type{typeVal}, healAmount{healVal} {}

    const std::string& getType() const { return type; }
    int getHealAmount() const { return healAmount; }
};

// 2. Entidad Muro de Madera (Defensa perimetral)
class WoodWall {
private:
    int durability{100};

public:
    explicit WoodWall(int initialDurability = 100)
        : durability{initialDurability} {}

    int getDurability() const { return durability; }

    void deteriorate(int amount) {
        durability -= amount;
        if (durability < 0) durability = 0;
    }

    bool isBroken() const { return durability <= 0; }
};

// 3. Entidad Muro Danado (Brecha transitable para la horda)
class DamagedWall {
public:
    bool isPassable() const { return true; }
};

// 4. Entidad Arbol (Obstaculo natural intransitable)
class Tree {
public:
    bool isPassable() const { return false; }
};

// 5. Entidad Humano (Engloba sanos, infectados, zombies y muertos)
class Human {
private:
    std::string name;
    int health{100};
    HealthState state{HealthState::Healthy};
    int damage{25};

public:
    Human(const std::string& nameVal, int healthVal, HealthState stateVal = HealthState::Healthy, int damageVal = 25)
        : name{nameVal}, health{healthVal}, state{stateVal}, damage{damageVal} {
        if (health <= 0) {
            health = 0;
            state = HealthState::Dead;
        }
    }

    const std::string& getName() const { return name; }
    int getHealth() const { return health; }
    HealthState getState() const { return state; }
    int getDamage() const { return damage; }

    void setState(HealthState newState) {
        state = newState;
    }

    inline void applyDamage(int damageAmount) {
        health -= damageAmount;
        if (health <= 0) {
            health = 0;
            state = HealthState::Dead;
        }
    }

    inline void heal(int amount) {
        if (state != HealthState::Dead && state != HealthState::Zombie) {
            health += amount;
            if (health > 100) health = 100;
        }
    }

    inline void eat(const Fruit* fruit) {
        if (fruit != nullptr && (state == HealthState::Healthy || state == HealthState::Infected)) {
            std::cout << "🍎 " << name << " consume una " << fruit->getType() 
                      << " y recupera " << fruit->getHealAmount() << " HP.\n";
            heal(fruit->getHealAmount());
        }
    }

    void attack(Human* entity) const {
        if (entity != nullptr && state == HealthState::Zombie) {
            std::cout << "🧟 [" << name << "] incursionando por la brecha ataca a " 
                      << entity->getName() << " causando " << damage << " de dano!\n";
            entity->applyDamage(damage);
            if (entity->getState() == HealthState::Healthy) {
                std::cout << "☣️  ¡" << entity->getName() << " ha sido infectado y se transforma en Zombie!\n";
                entity->setState(HealthState::Zombie);
            }
        } else if (entity == nullptr) {
            std::cout << "🧟 [" << name << "] ataca al aire (objetivo nullptr).\n";
        }
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
        std::cout << (state == HealthState::Zombie ? "🧟 " : "🧑 ")
                  << "Humano: " << name << " | Salud: " << health 
                  << " HP | Estado: " << getStateString() << "\n";
    }
};

// Demostracion de Array Decay:
// El parametro 'mapa' decae a un puntero a fila: const char (*)[COLS]
void demostrarArrayDecay(const char mapa[FILAS][COLS]) {
    std::cout << "[Dentro de funcion] sizeof(mapa): " << sizeof(mapa) 
              << " bytes (tamano del puntero decaido en 64 bits)\n";
}

// Renderizado del mapa en consola traduciendo caracteres internos a emojis
// Navegacion secuencial mediante aritmetica de punteros sin operador de subindice []
void renderizarMapa(const char* ptrBase, int totalCeldas, int columnas) {
    std::cout << "\n+------------------------------------+\n";
    std::cout << "|    ZONA EXTERIOR Y REFUGIO 7       |\n";
    std::cout << "+------------------------------------+\n";

    for (int i = 0; i < totalCeldas; ++i) {
        // =====================================================================
        // TODO 1: Acceder al carácter de la celda actual utilizando aritmética de
        // punteros a partir de 'ptrBase' y el índice 'i' (sin usar corchetes []).
        // =====================================================================
        char celda = /* TODO: desreferenciar ptrBase desplazado por i */;

        switch (celda) {
            case 'W': std::cout << "🪵 "; break; // Muro de madera del refugio
            case 'D': std::cout << "💥 "; break; // Muro danado (brecha perimetral)
            case 'T': std::cout << "🌲 "; break; // Arbol obstaculo
            case 'F': std::cout << "🍎 "; break; // Fruta (alimento)
            case 'S': std::cout << "🧑 "; break; // Humano saludable en el refugio
            case 'Z': std::cout << "🧟 "; break; // Humano zombificado en el exterior
            case '.': std::cout << "·  "; break; // Terreno despejado
            default:  std::cout << "?  "; break;
        }

        // Salto de linea al completar cada fila
        if ((i + 1) % columnas == 0) {
            std::cout << '\n';
        }
    }
    std::cout << "+------------------------------------+\n";
}

int main() {
    // 1. Arreglo bidimensional nativo contiguo en memoria RAM (Zoom out: 10x12 = 120 bytes)
    // El refugio ocupa el interior (filas 2 a 7, columnas 2 a 8)
    // El exterior es la zona agreste donde acechan los zombies
    char mapa[FILAS][COLS] = {
        {'.', '.', 'T', '.', '.', '.', '.', 'T', '.', 'Z', '.', '.'},
        {'.', 'Z', '.', '.', '.', 'T', '.', '.', '.', '.', 'T', '.'},
        {'.', '.', 'W', 'W', 'W', 'D', 'W', 'W', 'W', '.', '.', '.'}, // Brecha norte 💥
        {'T', '.', 'W', 'S', '.', '.', '.', 'F', 'W', '.', 'Z', '.'},
        {'.', 'Z', 'D', '.', '.', 'F', '.', 'S', 'W', '.', '.', '.'}, // Brecha oeste 💥
        {'.', '.', 'W', '.', 'S', '.', '.', '.', 'D', '.', '.', 'T'}, // Brecha este 💥
        {'.', '.', 'W', '.', '.', 'F', '.', '.', 'W', '.', 'Z', '.'},
        {'T', '.', 'W', 'W', 'D', 'W', 'W', 'W', 'W', '.', '.', '.'}, // Brecha sur 💥
        {'.', 'Z', '.', '.', '.', 'T', '.', '.', '.', 'T', '.', '.'},
        {'.', '.', 'T', '.', 'Z', '.', '.', 'T', '.', '.', 'Z', '.'}
    };

    // 2. Analisis de memoria fisica con sizeof
    std::cout << "=== ANALISIS DE MEMORIA Y SIZEOF ===\n";
    std::cout << "Tamano de char:                     " << sizeof(char) << " byte\n";
    std::cout << "Tamano de Human:                    " << sizeof(Human) << " bytes\n";
    std::cout << "Tamano de Fruit:                    " << sizeof(Fruit) << " bytes\n";
    std::cout << "Tamano de WoodWall:                 " << sizeof(WoodWall) << " bytes\n";
    std::cout << "Tamano de DamagedWall:              " << sizeof(DamagedWall) << " byte\n";
    std::cout << "Tamano de Tree:                     " << sizeof(Tree) << " byte\n";
    std::cout << "Tamano de puntero Human*:           " << sizeof(Human*) << " bytes\n";
    std::cout << "Tamano de puntero char*:            " << sizeof(char*) << " bytes\n";
    std::cout << "Tamano fisico de mapa (stack):      " << sizeof(mapa) << " bytes ("
              << sizeof(mapa) / sizeof(char) << " celdas)\n";

    demostrarArrayDecay(mapa);

    // 3. Demostracion de Aritmetica de Punteros
    // =========================================================================
    // TODO 2: Obtener un puntero a la primera celda del bloque contiguo en memoria
    // Guarda la dirección de memoria de la casilla [0][0] del mapa.
    // =========================================================================
    const char* ptrInicio = /* TODO: dirección de la celda [0][0] */;

    std::cout << "\n=== DEMOSTRACION DE ARITMETICA DE PUNTEROS ===\n";
    std::cout << "Direccion base del mapa:            " << static_cast<const void*>(ptrInicio) << "\n";
    std::cout << "Direccion base + 1 (+1 byte):       " << static_cast<const void*>(ptrInicio + 1) << "\n";
    std::cout << "Direccion base + 12 (+12 bytes):    " << static_cast<const void*>(ptrInicio + COLS) << "\n";
    std::cout << "Distancia en celdas (ptr+15 - ptr): " << ((ptrInicio + 15) - ptrInicio) << " celdas\n";

    // =========================================================================
    // TODO 3: Aplanamiento bidimensional (Offset) y acceso por aritmética
    // 1. Calcula el desplazamiento lineal (offset) para la posición [fila][col].
    //    Recuerda que cada fila completa avanza 'COLS' elementos en memoria.
    // 2. Desreferencia el puntero base desplazado en dicho offset sin usar corchetes.
    // =========================================================================
    int fila = 3, col = 3;
    int offset = /* TODO: calcular offset lineal usando fila, col y COLS */;
    std::cout << "Celda en [" << fila << "][" << col << "] via *(ptrBase + offset): '" 
              << /* TODO: desreferenciar ptrInicio + offset */ << "'\n";

    // =========================================================================
    // TODO 4: Invocación de renderizado mediante puntero base
    // Pasa la dirección base del mapa como primer argumento de la función.
    // =========================================================================
    renderizarMapa( /* TODO: puntero al inicio del mapa */ , FILAS * COLS, COLS);

    return 0;
}
