// Vector2D_student.cpp
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Clase 14: Introducción a openFrameworks y Sobrecarga de Operadores
// Estudiante: [Tu Nombre]
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#include "Vector2D.h"

// Constructor y getters ya implementados
Vector2D::Vector2D(float xCoord, float yCoord)
    : x(xCoord), y(yCoord) {}

float Vector2D::getX() const {
    return x;
}

float Vector2D::getY() const {
    return y;
}

// TODO 1: Implementa la suma binaria (+): retorna un nuevo Vector2D sumando
// las componentes del objeto actual con las componentes de rhs.
Vector2D Vector2D::operator+(const Vector2D& rhs) const {
    return Vector2D(/* TODO: x + rhs.x, y + rhs.y */);
}

// TODO 2: Implementa la multiplicación por escalar (*): retorna un nuevo Vector2D
// multiplicando las componentes x e y del objeto actual por el escalar.
Vector2D Vector2D::operator*(float scalar) const {
    return Vector2D(/* TODO: x * scalar, y * scalar */);
}
