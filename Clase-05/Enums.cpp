// Enums.cpp
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Estudiante: [Tu Nombre]
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#include <iostream>
#include <string>

// Scoped Enum para los estados de salud
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
    HealthState state{HealthState::Healthy}; // Estado con enum class

public:
    Human(const std::string& nameVal, int healthVal, HealthState stateVal = HealthState::Healthy)
        : name{nameVal}, health{healthVal}, state{stateVal} {
        if (health <= 0) {
            health = 0;
            state = HealthState::Dead;
        }
    }

    void setState(HealthState newState) {
        state = newState;
    }

    HealthState getState() const { return state; }

    // Metodo auxiliar para convertir el enum class a texto representativo
    std::string getStateString() const {
        switch (state) {
            case HealthState::Healthy:  return "Saludable";
            case HealthState::Infected: return "Infectado";
            case HealthState::Zombie:   return "Zombificado";
            case HealthState::Dead:     return "Muerto";
            default:                    return "Desconocido";
        }
    }

    void displayCard() const {
        std::cout << "Humano: " << name << " | Salud: " << health << " HP | Estado: " << getStateString() << "\n";
    }
};

int main() {
    Human joel{"Joel Miller", 85, HealthState::Healthy};
    joel.displayCard();

    std::cout << "\n¡Joel ha sido mordido por un Zombie!\n";
    joel.setState(HealthState::Infected);
    joel.displayCard();

    return 0;
}
