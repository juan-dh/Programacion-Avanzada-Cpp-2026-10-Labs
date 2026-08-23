// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2702: Programación Avanzada en C++
// Laboratorio 2
// Estudiante: [Tu Nombre]
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#include <iostream>
#include <string>

class Survivor{
private:
    std::string name;
    int health;

    void displayInfo() {
        std::cout << "Name: " << name << ", Health: " << health << std::endl;
    }
        
};

int main(){

    Survivor survivor1;
    survivor1.name = "Martin";
    survivor1.health = 100;
    survivor1.displayInfo();

    return 0;
}