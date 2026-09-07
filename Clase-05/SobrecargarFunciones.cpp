// SobrecargarFunciones.cpp
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Estudiante: [Tu Nombre]
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#include <iostream>
#include <string>

enum class HealthState { Healthy, Infected, Zombie, Dead };

class Human {
private:
    std::string name;
    int health{100};
    HealthState state{HealthState::Healthy};

public:
    Human(const std::string& nameVal, int healthVal)
        : name{nameVal}, health{healthVal} {
        if (health <= 0) {
            health = 0;
            state = HealthState::Dead;
        }
    }

    // Getters y Setters
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

    // ==========================================
    // FAMILIA DE MÉTODOS SOBRECARGADOS: fight()
    // ==========================================

    // Sobrecarga 1: Combate basico cuerpo a cuerpo (manos desnudas)
    inline void fight() {
        std::cout << "[Combate] " << name << " pelea cuerpo a cuerpo desarmado.\n";
        applyDamage(15); // Recibe dano de respuesta por forcejeo
    }

    // Sobrecarga 2: Combate con arma blanca o de impacto
    inline void fight(const std::string& meleeWeapon, int bonusDamage) {
        std::cout << "[Combate] " << name << " ataca con " << meleeWeapon 
                  << " infligiendo +" << bonusDamage << " de impacto.\n";
        applyDamage(5); // Menor dano recibido gracias al alcance del arma
    }

    // Sobrecarga 3: Combate con arma de fuego (usa municion y distancia)
    inline void fight(const std::string& firearm, int bullets, double accuracy) {
        std::cout << "[Combate Distancia] " << name << " dispara " << firearm 
                  << " (" << bullets << " balas) con precision de " << (accuracy * 100) << "%.\n";
        // Al disparar a distancia segura, no recibe dano inmediato
    }

    void displayCard() const {
        std::cout << "Humano: " << name << " | Salud: " << health << " HP\n";
    }
};

int main() {
    Human ellie{"Ellie Williams", 100};
    ellie.displayCard();

    std::cout << "\n>>> Ronda 1: Ataque sorpresa cercano <<<\n";
    ellie.fight(); // Invoca Sobrecarga 1
    ellie.displayCard();

    std::cout << "\n>>> Ronda 2: Encuentra un machete <<<\n";
    ellie.fight("Machete militar", 30); // Invoca Sobrecarga 2
    ellie.displayCard();

    std::cout << "\n>>> Ronda 3: Apoyo de francotirador <<<\n";
    ellie.fight("Rifle de caza", 2, 0.95); // Invoca Sobrecarga 3
    ellie.displayCard();

    return 0;
}
