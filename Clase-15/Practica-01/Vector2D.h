// Vector2D.h
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Clase 15: Simulación Cinemática de Partículas, El Puntero this y Asignación Compuesta
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#ifndef VECTOR2D_H
#define VECTOR2D_H

class Vector2D
{
private:
    float x{0.0f};
    float y{0.0f};

public:
    // Constructores
    Vector2D() = default;
    Vector2D(float xCoord, float yCoord);

    // Getters y Setters
    float getX() const;
    float getY() const;
    void setX(float xCoord);
    void setY(float yCoord);

    // Operadores sobrecargados (métodos miembro const)
    Vector2D operator+(const Vector2D &rhs) const;
    Vector2D operator*(float scalar) const;
};

#endif // VECTOR2D_H
