// Enums_student.cpp
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
    // TODO: Agregar el estado Dead
    
};

class Survivor {
private:
    std::string name;
    int health{100};
    // TODO: Definir el atributo 'state' inicializado en HealthState::Healthy
    HealthState state{ /* TODO */ };

public:
    // TODO: Completar el parametro por defecto y la inicializacion de 'state'
    Survivor(const std::string& nameVal, int healthVal, HealthState stateVal = /* TODO: HealthState::Healthy */)
        : name{nameVal}, health{healthVal}, state{ /* TODO: stateVal */ } {
        if (health <= 0) {
            health = 0;
            // TODO: Asignar HealthState::Dead
            state = /* TODO */;
        }
    }

    // TODO: Completar el setter
    void setState(HealthState newState) {
        state = /* TODO */;
    }

    // TODO: Completar el tipo de retorno
    /* TODO */ getState() const { 
        return state; 
    }

    // Metodo auxiliar para convertir el enum class a texto representativo
    std::string getStateString() const {
        switch (state) {
            case HealthState::Healthy:  return "Saludable";
            case HealthState::Infected: return "Infectado";
            case HealthState::Zombie:   return "Zombificado";
            // TODO: Agregar caso para Dead que retorne "Muerto"
            case /* TODO */:            return "Muerto";
            default:                    return "Desconocido";
        }
    }

    void displayCard() const {
        std::cout << "Superviviente: " << name << " | Salud: " << health << " HP | Estado: " << getStateString() << "\n";
    }
};

int main() {
    // TODO: Instanciar a Joel con HealthState::Healthy
    Survivor joel{"Joel Miller", 85, /* TODO */};
    joel.displayCard();

    std::cout << "\n¡Joel ha sido mordido por un Zombie!\n";

    // TODO: Cambiar el estado de Joel a HealthState::Infected
    joel.setState( /* TODO */ );
    joel.displayCard();

    return 0;
}
