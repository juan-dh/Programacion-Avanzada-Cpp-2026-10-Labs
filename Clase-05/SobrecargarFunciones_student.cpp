// SobrecargarFunciones_student.cpp
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Estudiante: [Tu Nombre]
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#include <iostream>
#include <string>

enum class HealthState { Healthy, Infected, Zombie, Dead };

class Survivor {
private:
    std::string name;
    int health{100};
    HealthState state{HealthState::Healthy};

public:
    Survivor(const std::string& nameVal, int healthVal)
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

    // TODO: Sobrecarga 1 - Combate desarmado (sin parametros, aplica 15 de dano)
    inline void fight() {
        std::cout << "[Combate] " << name << " pelea cuerpo a cuerpo desarmado.\n";
        applyDamage( /* TODO: 15 */ );
    }

    // TODO: Sobrecarga 2 - Combate con arma blanca (meleeWeapon, bonusDamage)
    inline void fight(const std::string& meleeWeapon, int bonusDamage) {
        std::cout << "[Combate] " << name << " ataca con " << meleeWeapon 
                  << " infligiendo +" << bonusDamage << " de impacto.\n";
        applyDamage( /* TODO: 5 */ );
    }

    // TODO: Sobrecarga 3 - Combate a distancia con arma de fuego (firearm, bullets, accuracy)
    inline void fight(const std::string& firearm, int bullets, double accuracy) {
        std::cout << "[Combate Distancia] " << name << " dispara " << firearm 
                  << " (" << bullets << " balas) con precision de " << (accuracy * 100) << "%.\n";
        // Al disparar a distancia segura, no recibe dano inmediato
    }

    void displayCard() const {
        std::cout << "Superviviente: " << name << " | Salud: " << health << " HP\n";
    }
};

int main() {
    Survivor ellie{"Ellie Williams", 100};
    ellie.displayCard();

    std::cout << "\n>>> Ronda 1: Ataque sorpresa cercano <<<\n";
    // TODO: Invocar Sobrecarga 1 (sin argumentos)
    ellie.fight( /* TODO */ );
    ellie.displayCard();

    std::cout << "\n>>> Ronda 2: Encuentra un machete <<<\n";
    // TODO: Invocar Sobrecarga 2 ("Machete militar", 30)
    ellie.fight( /* TODO */ );
    ellie.displayCard();

    std::cout << "\n>>> Ronda 3: Apoyo de francotirador <<<\n";
    // TODO: Invocar Sobrecarga 3 ("Rifle de caza", 2, 0.95)
    ellie.fight( /* TODO */ );
    ellie.displayCard();

    return 0;
}
