// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2702: Programación Avanzada en C++
// Laboratorio 3
// Estudiante: [Tu Nombre]
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#include <iostream>
#include <string>

class Survivor{
private:
    std::string name;
    int health;

    void displayCard() {
        std::cout << "Nombre: " << name << "| Salud: " << health << " HP \n"<< std::endl;
    }
        
};

int main(){

    Survivor player;
    player.name = "Martin";
    player.health = 100;
    player.displayCard();

    return 0;
}