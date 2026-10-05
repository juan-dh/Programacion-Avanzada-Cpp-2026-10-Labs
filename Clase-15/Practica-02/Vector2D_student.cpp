// Vector2D_student.cpp
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Clase 15: Simulación Cinemática de Partículas, El Puntero this y Asignación Compuesta
// Estudiante: [Tu Nombre]
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#include "Vector2D.h"

Vector2D::Vector2D(float xCoord, float yCoord) {
    // TODO: Desambiguación mediante el puntero this
    // Asigna xCoord a x y yCoord a y utilizando la sintaxis this-> para acceder a los atributos.
    // === TU CODIGO EMPIEZA AQUI ===

    // === TU CODIGO TERMINA AQUI ===
}

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
    // TODO: Operador de asignación compuesta +=
    // Suma las componentes de rhs a x e y in-place.
    // Retorna una referencia al propio objeto invocador desreferenciando this (*this).
    // === TU CODIGO EMPIEZA AQUI ===

    // === TU CODIGO TERMINA AQUI ===
}

Vector2D& Vector2D::operator-=(const Vector2D& rhs) {
    // TODO: Operador de asignación compuesta -=
    // Resta las componentes de rhs a x e y in-place.
    // Retorna una referencia al propio objeto invocador desreferenciando this (*this).
    // === TU CODIGO EMPIEZA AQUI ===

    // === TU CODIGO TERMINA AQUI ===
}

Vector2D& Vector2D::operator++() {
    // TODO: Operador de pre-incremento (++v)
    // Incrementa las componentes x e y en 1.0f in-place.
    // Retorna una referencia al propio objeto invocador desreferenciando this (*this).
    // === TU CODIGO EMPIEZA AQUI ===

    // === TU CODIGO TERMINA AQUI ===
}

Vector2D Vector2D::operator++(int) {
    // TODO: Operador de post-incremento (v++)
    // Guarda una copia del estado previo del vector (*this).
    // Incrementa las componentes actuales en 1.0f in-place.
    // Retorna la copia previa por valor.
    // === TU CODIGO EMPIEZA AQUI ===

    // === TU CODIGO TERMINA AQUI ===
}
