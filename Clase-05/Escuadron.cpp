// Escuadron.cpp
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

class Human {
private:
    std::string name;
    int health{100};
    HealthState state{HealthState::Healthy};

public:
    Human(const std::string& nameVal, int healthVal, HealthState stateVal = HealthState::Healthy)
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

    // Sobrecarga 1: Combate cuerpo a cuerpo (desarmado)
    inline void fight() {
        std::cout << " -> " << name << " pelea cuerpo a cuerpo desarmado.\n";
        applyDamage(15);
    }

    // Sobrecarga 2: Combate con arma blanca
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
        std::cout << "Humano: " << name << " | Salud: " << health << " HP | Estado: " << getStateString() << "\n";
    }
};

int main() {
    // Creacion y gestion dinamica del escuadron con std::vector
    std::vector<Human> escuadron;
    escuadron.push_back(Human{"Ellie Williams", 90, HealthState::Healthy});
    escuadron.push_back(Human{"Joel Miller", 45, HealthState::Healthy});
    escuadron.push_back(Human{"Tommy Miller", 70, HealthState::Healthy});
    escuadron.push_back(Human{"Tess Servopoulos", 30, HealthState::Infected});

    // Estado inicial del escuadron
    std::cout << "=== ESCUADRON INICIAL (Total: " << escuadron.size() << ") ===\n";
    for (const auto& entity : escuadron) {
        entity.displayCard();
    }

    // Simulacion de combate con metodos sobrecargados
    std::cout << "\n=== EMBOSCADA DE INFECTADOS ===\n";
    escuadron[0].fight("Navaja", 20); // Sobrecarga 2
    escuadron[1].fight();             // Sobrecarga 1

    // Atencion medica al escuadron (Modificacion directa con referencia en range-based for)
    std::cout << "\n=== APLICANDO CURACION AL ESCUADRON (+20 HP) ===\n";
    for (auto& entity : escuadron) {
        entity.heal(20);
    }

    // Estado final del escuadron
    std::cout << "\n=== ESTADO FINAL DEL ESCUADRON ===\n";
    for (const auto& entity : escuadron) {
        entity.displayCard();
    }

    return 0;
}
