// Plant.cpp
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Clase 23 - Práctica 2: Clases Abstractas e Interfaces Puras
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#include "Plant.h"

Plant::Plant(float xVal, float yVal, float initialNutrients)
    : x(xVal), y(yVal), nutrients(initialNutrients), active(initialNutrients > 0.0f) {}

Plant::~Plant() {
    std::cout << "[~Plant] Planta retirada de (" << x << ", " << y << ")\n";
}

// TODO: Implementación de los métodos concretos de Plant
// 1. update(): si active es verdadero, suma 2.5f a nutrients sin superar 50.0f e imprime:
//    "[" << getLabel() << "] Posicion: (" << x << ", " << y << ") | Nutrientes: " << nutrients << "\n"
// 2. isActive() const: retorna active.
// 3. getLabel() const: retorna "Plant".
// === TU CODIGO EMPIEZA AQUI ===

// === TU CODIGO TERMINA AQUI ===
