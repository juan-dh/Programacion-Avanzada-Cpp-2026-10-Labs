// Constructores.cpp
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
    // Constructor por defecto
    Survivor()
        : name{"Desconocido"}, health{100} {
    }

    // Constructor parametrizado con lista de inicializacion
    Survivor(std::string nameVal, int healthVal)
        : name{nameVal}, health{healthVal} {
        
        // Validaciones
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
    // Uso del constructor por defecto
    Survivor s1;
    s1.displayCard();

    std::cout << "\n";

    // Uso del constructor parametrizado
    Survivor s2{"Ellie Williams", 90};
    s2.displayCard();

    return 0;
}