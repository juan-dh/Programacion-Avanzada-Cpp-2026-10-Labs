// Valor_Referencia.cpp
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
    Survivor(std::string nameVal, int healthVal)
        : name{nameVal}, health{healthVal} {}

    void takeDamage(int amount) {
        health -= amount;
        if (health < 0) health = 0;
    }

    void heal(int amount) {
        health += amount;
        if (health > 100) health = 100;
    }

    std::string getName() const { return name; }
    int getHealth() const { return health; }

    void displayCard() const {
        std::cout << "Superviviente: " << name << " | Salud: " << health << " HP\n";
    }
};

// Funcion que recibe por VALOR (copia)
void applyZombieBiteByValue(Survivor s) {
    std::cout << "[Por Valor] Aplicando mordida de 40 HP a la copia...\n";
    s.takeDamage(40);
    std::cout << "[Por Valor] Salud dentro de la funcion: " << s.getHealth() << " HP\n";
}

// Funcion que recibe por REFERENCIA (alias)
void applyZombieBiteByReference(Survivor& s) {
    std::cout << "[Por Referencia] Aplicando mordida de 40 HP al original...\n";
    s.takeDamage(40);
    std::cout << "[Por Referencia] Salud dentro de la funcion: " << s.getHealth() << " HP\n";
}

int main() {
    Survivor ellie{"Ellie", 100};

    std::cout << "--- ESTADO INICIAL ---\n";
    ellie.displayCard();

    std::cout << "\n--- PASO POR VALOR ---\n";
    applyZombieBiteByValue(ellie);
    std::cout << "Salud despues de la llamada: " << ellie.getHealth() << " HP (¡NO CAMBIO!)\n";

    std::cout << "\n--- PASO POR REFERENCIA ---\n";
    applyZombieBiteByReference(ellie);
    std::cout << "Salud despues de la llamada: " << ellie.getHealth() << " HP (¡CAMBIO REAL!)\n";

    return 0;
}