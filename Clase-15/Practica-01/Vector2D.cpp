// Vector2D.cpp
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Clase 15: Simulación Cinemática de Partículas, El Puntero this y Asignación Compuesta
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#include "Vector2D.h"

Vector2D::Vector2D(float xCoord, float yCoord)
    : x(xCoord), y(yCoord) {}

float Vector2D::getX() const
{
    return x;
}

float Vector2D::getY() const
{
    return y;
}

void Vector2D::setX(float xCoord)
{
    x = xCoord;
}

void Vector2D::setY(float yCoord)
{
    y = yCoord;
}

// Operador de suma binaria: retorna un nuevo vector sumando componente a componente
Vector2D Vector2D::operator+(const Vector2D &rhs) const
{
    return Vector2D(x + rhs.x, y + rhs.y);
}

// Operador de multiplicación por escalar: vector * escalar
Vector2D Vector2D::operator*(float scalar) const
{
    return Vector2D(x * scalar, y * scalar);
}
