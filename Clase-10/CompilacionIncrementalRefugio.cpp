// CompilacionIncrementalRefugio.cpp
#include <iostream>
#include "Human.h"

int main()
{
    std::cout << "--- 1. Preparacion de Entidades en el Refugio ---\n";
    Human defensor("Tommy Miller", 75, HealthState::Healthy, 30);
    Human zombie("Caminante Infectado", 50, HealthState::Zombie, 25);

    std::cout << "\n--- 2. Combate ---\n";
    int ronda = 1;
    while (defensor.getHealth() > 0 && zombie.getHealth() > 0 && ronda <= 3)
    {
        std::cout << "\n[Turno de Combate #" << ronda << "]\n";
        zombie.attack(&defensor);
        defensor.displayCard();

        if (defensor.getHealth() > 0 && defensor.getState() != HealthState::Zombie)
        {
            std::cout << "⚔️  Tommy contraataca al zombie...\n";
            zombie.applyDamage(defensor.getDamage());
            zombie.displayCard();
        }
        ++ronda;
    }

    std::cout << "\n--- 3. Fin del Combate ---\n";
    std::cout << "Finalizando ejecucion de main(). Liberacion final de memoria:\n";
    return 0;
}
