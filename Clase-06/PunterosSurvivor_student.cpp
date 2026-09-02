// PunterosSurvivor_student.cpp
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Estudiante: [Tu Nombre]
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#include <iostream>
#include <string>

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

// Funciones con Paso de Parametros por Puntero

// TODO: Completar la funcion para recibir un puntero no constante a Survivor (Survivor* paciente)
void atenderSuperviviente( /* TODO: Survivor* paciente */ , int cantidadCura) {
    if (paciente != nullptr) {
        std::cout << "El medico atiende a: " << paciente->getName() << "\n";
        // TODO: Invocar heal(cantidadCura) usando el operador flecha (->)
        paciente-> /* TODO */ (cantidadCura);
        paciente->displayCard();
    } else {
        std::cout << "[Enfermeria] No hay paciente asignado (nullptr).\n";
    }
}

// TODO: Completar la funcion para recibir un puntero a datos constantes (const Survivor* paciente)
void inspeccionarBioseguridad( /* TODO: const Survivor* paciente */ ) {
    if (paciente != nullptr) {
        std::cout << "Inspeccionando a: " << paciente->getName() 
                  << " -> Estado: " << paciente->getStateString() << "\n";
    }
}

int main() {
    Survivor ellie{"Ellie Williams", 90, HealthState::Healthy};
    Survivor joel{"Joel Miller", 45, HealthState::Healthy};
    Survivor tess{"Tess Servopoulos", 30, HealthState::Infected};

    std::cout << "=== ESTADO ORIGINAL DE LOS SUPERVIVIENTES ===\n";
    ellie.displayCard();
    joel.displayCard();
    tess.displayCard();

    // 1. Paso por puntero no constante (Survivor* ptr)
    std::cout << "\n=== 1. MEDICO DE TURNO: ATENCION MEDICA DIRECTA ===\n";
    // TODO: Invocar atenderSuperviviente pasando la direccion de joel (&joel) y 35 de cura
    atenderSuperviviente( /* TODO: &joel, 35 */ );
    
    // TODO: Invocar atenderSuperviviente pasando la direccion de tess (&tess) y 20 de cura
    atenderSuperviviente( /* TODO: &tess, 20 */ );
    
    // TODO: Invocar atenderSuperviviente pasando nullptr
    atenderSuperviviente( /* TODO: nullptr, 10 */ );

    // 2. Paso por puntero a datos constantes (const Survivor* ptr)
    std::cout << "\n=== 2. INSPECTOR DE BIOSEGURIDAD (SOLO LECTURA) ===\n";
    // TODO: Inspeccionar a ellie y a tess pasando sus direcciones
    inspeccionarBioseguridad( /* TODO: &ellie */ );
    inspeccionarBioseguridad( /* TODO: &tess */ );

    // 3. Puntero constante a datos no constantes (Survivor* const ptr)
    std::cout << "\n=== 3. GUARDIAN ASIGNADO EXCLUSIVO (OBJETIVO FIJO) ===\n";
    // TODO: Declarar un puntero constante a datos no constantes vinculado a ellie (Survivor* const)
    /* TODO: Survivor* const */ guardianDeEllie = &ellie;
    std::cout << "Guardian protegiendo a: " << guardianDeEllie->getName() << "\n";
    // TODO: Aplicar 10 de dano con applyDamage(10) usando el puntero
    guardianDeEllie->applyDamage( /* TODO: 10 */ );
    guardianDeEllie->displayCard();

    // 4. Puntero constante a datos constantes (const Survivor* const ptr)
    std::cout << "\n=== 4. ARCHIVO HISTORICO SELLADO (INMUTABILIDAD TOTAL) ===\n";
    // TODO: Declarar un puntero constante a datos constantes vinculado a joel (const Survivor* const)
    /* TODO: const Survivor* const */ archivoHistorico = &joel;
    std::cout << "Registro sellado: " << archivoHistorico->getName() << " (" << archivoHistorico->getHealth() << " HP)\n";

    std::cout << "\n=== ESTADO FINAL TRAS INTERVENCIONES ===\n";
    ellie.displayCard();
    joel.displayCard();
    tess.displayCard();

    return 0;
}
