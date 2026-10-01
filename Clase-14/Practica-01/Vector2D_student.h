// Vector2D_student.h
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Clase 14: Introducción a openFrameworks y Sobrecarga de Operadores
// Estudiante: [Tu Nombre]
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#ifndef VECTOR2D_H
#define VECTOR2D_H

class Vector2D {
private:
    float x{0.0f};
    float y{0.0f};

public:
    // Constructores y getters ya provistos
    Vector2D() = default;
    Vector2D(float xCoord, float yCoord);

    float getX() const;
    float getY() const;

    // Operador de suma binaria miembro provisto como referencia
    Vector2D operator+(const Vector2D& rhs) const;

    // TODO: Declara el operador de multiplicación por escalar (*) como método miembro const.
    // Debe recibir un float (scalar) y retornar una nueva instancia de Vector2D por valor.
    /* TODO */
};

#endif // VECTOR2D_H
