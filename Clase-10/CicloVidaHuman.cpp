// CicloVidaHuman.cpp
#include <iostream>
#include <string>

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
    int damage{30};

public:
    Human(const std::string& n, int h, HealthState s = HealthState::Healthy, int d = 30)
        : name{n}, health{h}, state{s}, damage{d} {
        if (health <= 0) {
            health = 0;
            state = HealthState::Dead;
        }
        std::cout << "[CONSTRUCTOR] Humano " << name << " (" << health 
                  << " HP, " << getStateString() << ") registrado en el refugio.\n";
    }

    ~Human() {
        std::cout << "[DESTRUCTOR]  Humano " << name << " (" << getStateString() 
                  << ") saliendo de memoria\n";
    }

    const std::string& getName() const { return name; }
    int getHealth() const { return health; }
    HealthState getState() const { return state; }
    int getDamage() const { return damage; }

    void setState(HealthState newState) { state = newState; }

    inline void applyDamage(int damageAmount) {
        if (damageAmount <= 0) return;
        int saludAnterior = health;
        health -= damageAmount;
        if (health <= 0) {
            health = 0;
            state = HealthState::Dead;
        }
        std::cout << "  💥 " << name << " recibe " << damageAmount << " pts de dano. "
                  << "Salud: " << saludAnterior << " -> " << health << " HP\n";
        if (health == 0 && saludAnterior > 0) {
            std::cout << "  ⚠️  ¡BAJA EN COMBATE! " << name << " ha caido en el refugio.\n";
        }
    }

    void attack(Human* target) const {
        if (target != nullptr && state == HealthState::Zombie) {
            std::cout << "🧟 [" << name << "] ataca ferozmente a " 
                      << target->getName() << " causando " << damage << " de dano!\n";
            target->applyDamage(damage);
            if (target->getState() == HealthState::Healthy && target->getHealth() > 0) {
                std::cout << "☣️  ¡" << target->getName() << " ha sido infectado y se transforma en Zombie!\n";
                target->setState(HealthState::Zombie);
            }
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
        std::cout << (state == HealthState::Zombie ? "🧟 " : (state == HealthState::Dead ? "💀 " : "🧑 "))
                  << "Humano: " << name << " | Salud: " << health 
                  << " HP | Estado: " << getStateString() << " | Dano: " << damage << "\n";
    }
};

void patrullarSector(int ronda) {
    std::cout << "\n>>> [Patrullaje - Ronda " << ronda << "] <<<\n";
    static Human medicoGuardia("Carlos (Medico Permanente)", 90, HealthState::Healthy, 15);
    Human exploradorTemporal("Explorador de Ronda", 45, HealthState::Healthy, 20);

    medicoGuardia.applyDamage(15);
    exploradorTemporal.applyDamage(20);

    std::cout << "Estado actual del personal en patrullaje:\n";
    medicoGuardia.displayCard();
    exploradorTemporal.displayCard();
    std::cout << ">>> [Fin Ronda " << ronda << " - Saliendo de la funcion] <<<\n";
}

int main() {
    std::cout << "--- Pila de Memoria y Orden LIFO ---\n";
    {
        Human h1("Joel Miller", 100);
        Human h2("Ellie Williams", 80);
        Human h3("Sam", 60);
    }

    std::cout << "\n--- Persistencia de Variable static vs Local ---\n";
    patrullarSector(1);
    patrullarSector(2);

    std::cout << "\nFinalizando main(). Se destruiran objetos estaticos restantes:\n";
    return 0;
}
