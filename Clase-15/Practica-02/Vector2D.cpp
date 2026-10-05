// Vector2D.cpp
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Clase 15: Simulación Cinemática de Partículas, El Puntero this y Asignación Compuesta
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#include "Vector2D.h"

Vector2D::Vector2D(float xCoord, float yCoord)
{
    this->x = xCoord; // Desambiguación explícita mediante el puntero this
    this->y = yCoord;
}

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

Vector2D Vector2D::operator+(const Vector2D &rhs) const
{
    return Vector2D(x + rhs.x, y + rhs.y);
}

Vector2D Vector2D::operator*(float scalar) const
{
    return Vector2D(x * scalar, y * scalar);
}

Vector2D &Vector2D::operator+=(const Vector2D &rhs)
{
    x += rhs.x;
    y += rhs.y;
    return *this; // Retorna referencia al objeto invocador
}

Vector2D &Vector2D::operator-=(const Vector2D &rhs)
{
    x -= rhs.x;
    y -= rhs.y;
    return *this; // Retorna referencia al objeto invocador
}

Vector2D &Vector2D::operator++()
{
    x += 1.0f;
    y += 1.0f;
    return *this; // Modificación in-place
}

Vector2D Vector2D::operator++(int)
{
    Vector2D temp = *this; // Copia del estado previo
    x += 1.0f;
    y += 1.0f;
    return temp;          // Retorna el valor previo por copia
}
