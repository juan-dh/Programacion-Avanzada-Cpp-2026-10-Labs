// Vector2D.cpp
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Clase 18 - Práctica 2: Duplicación de Emisores, Regla de las Tres e Indexación
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#include "Vector2D.h"
#include <cmath>

Vector2D::Vector2D(float xCoord, float yCoord) : x(xCoord), y(yCoord) {}

float Vector2D::getX() const { return x; }
float Vector2D::getY() const { return y; }
void Vector2D::setX(float xCoord) { x = xCoord; }
void Vector2D::setY(float yCoord) { y = yCoord; }

Vector2D Vector2D::operator+(const Vector2D& rhs) const {
    return Vector2D(x + rhs.x, y + rhs.y);
}

Vector2D Vector2D::operator*(float scalar) const {
    return Vector2D(x * scalar, y * scalar);
}

Vector2D& Vector2D::operator+=(const Vector2D& rhs) {
    x += rhs.x;
    y += rhs.y;
    return *this;
}

Vector2D& Vector2D::operator-=(const Vector2D& rhs) {
    x -= rhs.x;
    y -= rhs.y;
    return *this;
}

Vector2D& Vector2D::operator++() {
    x += 1.0f;
    y += 1.0f;
    return *this;
}

Vector2D Vector2D::operator++(int) {
    Vector2D temp = *this;
    x += 1.0f;
    y += 1.0f;
    return temp;
}

std::ostream& operator<<(std::ostream& os, const Vector2D& v) {
    os << "(" << v.x << ", " << v.y << ")";
    return os;
}
