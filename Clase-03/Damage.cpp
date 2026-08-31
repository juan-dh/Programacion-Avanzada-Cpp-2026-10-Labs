// Damage.cpp
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

    Survivor player;
	std::string inputName;
    
    std::cout << "Ingrese el nombre del superviviente: ";
    std::getline(std::cin, inputName);

    player.setName(inputName);
    player.setHealth(100);

    player.displayCard();

    std::cout << "!--- ¡Un zombie ataca a " << player.getName() << "! ---!\n\n";
    player.takeDamage(35);

    player.displayCard();
    return 0;
}