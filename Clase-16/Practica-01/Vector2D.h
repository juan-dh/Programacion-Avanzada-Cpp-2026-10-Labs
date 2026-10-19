// Vector2D.h
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Clase 16: Composición, Operadores de Flujo, Amistad y Miembros Estáticos
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#ifndef VECTOR2D_H
#define VECTOR2D_H

#include <iostream>

class Vector2D {
private:
    float x{0.0f};
    float y{0.0f};

public:
    Vector2D() = default;
    Vector2D(float xCoord, float yCoord);

    float getX() const;
    float getY() const;
    void setX(float xCoord);
    void setY(float yCoord);

    // Operadores aritméticos binarios
    Vector2D operator+(const Vector2D& rhs) const;
    Vector2D operator*(float scalar) const;

    // Asignación compuesta (mutación in-place)
    Vector2D& operator+=(const Vector2D& rhs);
    Vector2D& operator-=(const Vector2D& rhs);

    // Incremento
    Vector2D& operator++();       // Pre-incremento (++v)
    Vector2D operator++(int);      // Post-incremento (v++)

    // Operador de inserción en flujo como función amiga
    friend std::ostream& operator<<(std::ostream& os, const Vector2D& v);
};

#endif // VECTOR2D_H
