// Encapsulamiento.cpp
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Estudiante: [Tu Nombre]
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#include <iostream>
#include <string>

class Survivor {
private:
	// Atributos
    std::string name;
    int health;

public:
    // Constructor parametrizado
    Survivor(std::string nameVal, int healthVal)
        : name{nameVal}, health{healthVal} {
        
        // Validaciones
        if (healthVal >= 0 && healthVal <= 100){
	        health = healthVal;
        } else {
	        health = 0;
        }
    }

	// Métodos
    // Setters
    void setName(std::string newName) {
        name = newName;
    }

    void setHealth(int healthValue) {
        health = healthValue;
    }

    // Getters
    std::string getName() const { return name; }
    int getHealth() const { return health; }

    // Otros Métodos
    
    void displayCard() const {
        std::cout << "========================================\n";
        std::cout << "          FICHA DE SUPERVIVENCIA        \n";
        std::cout << "========================================\n";
        std::cout << " Nombre: " << name << "\n";
        std::cout << " Salud:  " << health << " HP\n"; 
        std::cout << "========================================\n";
    }
    
    void takeDamage(int amount) {
        health -= amount;
    }
};

int main() {
    // Test de la Validación
    Survivor s2{"Ellie Williams", 60};
    s2.displayCard();

    return 0;
}