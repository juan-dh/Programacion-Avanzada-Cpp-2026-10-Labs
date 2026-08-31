//Encapsulamiento.cpp
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Estudiante: [Tu Nombre]
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#include <iostream>
#include <string>

class Survivor {
private:
    std::string name;
    int health{100};

public:
    void setName(std::string newName) {
        name = newName;
    }

    void setHealth(int healthValue) {
        health = healthValue;
    }

    std::string getName() const { return name; }
    int getHealth() const { return health; }

    void displayCard() const {
        std::cout << "Superviviente: " << name << " | Salud: " << health << " HP\n";
    }
};

int main() {
    Survivor player;
    
    player.setName("Ellie");
    player.setHealth(24);

    player.displayCard();
    
    std::cout << player.getName(); // Uso del método getName
    return 0;
}