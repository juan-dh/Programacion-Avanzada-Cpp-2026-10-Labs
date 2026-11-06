// ForagerBlob_student.cpp
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Clase 20 - Práctica: Simulación de la Evolución y Jerarquías en openFrameworks
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#include "ForagerBlob.h"

// TODO: Constructor con delegacion a la clase base Blob
// Implementa el constructor invocando explicitamente al constructor base Blob
// en la lista de inicializacion de miembros pasando su color verde pastel ofColor(138, 201, 160).
// El cuerpo del constructor permanece vacio { }.
// === TU CODIGO EMPIEZA AQUI ===

// === TU CODIGO TERMINA AQUI ===

void ForagerBlob::eatFood(float foodValue) {
    // TODO: Ingestion de alimento y limite energetico
    // 1. Si el blob no esta vivo (!alive), retorna inmediatamente.
    // 2. Si esta vivo, suma foodValue directamente al atributo protegido energy.
    // 3. Si energy supera 150.0f, limitala en 150.0f.
    // === TU CODIGO EMPIEZA AQUI ===

    // === TU CODIGO TERMINA AQUI ===
}

void ForagerBlob::update() {
    // TODO: Actualizacion con llamada a la base y gasto de forrajeo
    // 1. Invoca Blob::update() mediante el operador de resolucion de ambito (::).
    // 2. Si el blob sigue vivo, descuenta el consumo propio de forrajeo con consumeEnergy(0.02f).
    // === TU CODIGO EMPIEZA AQUI ===

    // === TU CODIGO TERMINA AQUI ===
}

void ForagerBlob::draw() const {
    // TODO: Redefinicion de metodo y llamada al metodo base
    // Invoca Blob::draw() con el operador de resolucion de ambito (::) para reutilizar
    // la logica de renderizado implementada en la clase base.
    // === TU CODIGO EMPIEZA AQUI ===

    // === TU CODIGO TERMINA AQUI ===
}
