// Vector2D.cpp
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Clase 14: Introducción a openFrameworks y Sobrecarga de Operadores
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

// Operador de suma binaria: retorna un nuevo vector sumando componente a componente
Vector2D Vector2D::operator+(const Vector2D &rhs) const
{
    return Vector2D(x + rhs.x, y + rhs.y);
}

// Operador de multiplicacion por escalar: vector * escalar
Vector2D Vector2D::operator*(float scalar) const
{
    return Vector2D(x * scalar, y * scalar);
}
