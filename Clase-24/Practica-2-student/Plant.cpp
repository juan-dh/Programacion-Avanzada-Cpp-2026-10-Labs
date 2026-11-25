// Plant.cpp
// Práctica 2: Plantilla de Clase Contenedora para el Ecosistema
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#include "Plant.h"

Plant::Plant() : x(0.0f), y(0.0f), nutrients(30.0f), active(true) {}

Plant::Plant(float xVal, float yVal, float initialNutrients)
    : x(xVal), y(yVal), nutrients(initialNutrients), active(initialNutrients > 0.0f) {}

float Plant::getNutrients() const {
    return nutrients;
}

void Plant::update() {
    if (!active) {
        return;
    }
    if (nutrients < 50.0f) {
        nutrients += 2.5f;
        if (nutrients > 50.0f) {
            nutrients = 50.0f;
        }
    }
    std::cout << "[" << getLabel() << "] Posicion: (" << x << ", " << y
              << ") | Nutrientes: " << nutrients << "\n";
}

bool Plant::isActive() const {
    return active;
}

std::string Plant::getLabel() const {
    return "Plant";
}
