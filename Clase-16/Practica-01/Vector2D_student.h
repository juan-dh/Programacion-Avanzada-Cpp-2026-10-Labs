// Vector2D_student.h
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Clase 16: Composición, Operadores de Flujo, Amistad y Miembros Estáticos
// Estudiante: [Tu Nombre]
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

    // TODO: Declaración de operadores de asignación compuesta
    // Declara operator+= y operator-= como métodos miembro no constantes.
    // Ambos deben recibir una referencia constante (const Vector2D& rhs)
    // y retornar una referencia al propio objeto invocador (Vector2D&).
    // === TU CODIGO EMPIEZA AQUI ===

    // === TU CODIGO TERMINA AQUI ===

    // TODO: Declaración de operadores de incremento
    // Declara la versión prefija (++v) sin parámetros que retorna Vector2D&.
    // Declara la versión postfija (v++) con parámetro dummy int que retorna Vector2D por valor.
    // === TU CODIGO EMPIEZA AQUI ===

    // === TU CODIGO TERMINA AQUI ===

    // TODO: Declaración de amistad para sobrecarga de inserción en flujo
    // Declara friend std::ostream& operator<<(std::ostream& os, const Vector2D& v);
    // como función amiga dentro de la clase para permitir acceso a las componentes x e y.
    // === TU CODIGO EMPIEZA AQUI ===

    // === TU CODIGO TERMINA AQUI ===
};

#endif // VECTOR2D_H
