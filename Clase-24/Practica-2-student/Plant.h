// Plant.h
// Práctica 2: Plantilla de Clase Contenedora para el Ecosistema
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#ifndef PLANT_H
#define PLANT_H

#include "IBeing.h"
#include <iostream>

class Plant : public IBeing {
private:
    float x{0.0f};
    float y{0.0f};
    float nutrients{30.0f};
    bool active{true};

public:
    Plant();
    Plant(float xVal, float yVal, float initialNutrients);
    ~Plant() override = default;

    float getNutrients() const;
    void update() override;
    bool isActive() const override;
    std::string getLabel() const override;
};

#endif // PLANT_H
