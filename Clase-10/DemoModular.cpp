// DemoModular.cpp
#include <iostream>
#include "Human.h"

int main() {

    Human joel("Joel Miller", 100, HealthState::Healthy, 35);
    Human ellie("Ellie Williams", 80, HealthState::Healthy, 20);

    std::cout << "\nEstado inicial del equipo de exploracion:\n";
    joel.displayCard();
    ellie.displayCard();

    std::cout << "\nSimulando emboscada zombie en la patrulla:\n";
    joel.applyDamage(25);
    joel.displayCard();

    std::cout << "\nCompilacion multi-archivo completada con exito.\n";
    return 0;
}
