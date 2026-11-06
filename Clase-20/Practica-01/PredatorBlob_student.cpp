// PredatorBlob_student.cpp
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Clase 20 - Práctica: Simulación de la Evolución y Jerarquías en openFrameworks
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#include "PredatorBlob.h"

// TODO: Constructor con delegacion a Blob e inicializacion de huntPower
// Implementa el constructor invocando a Blob(...) en la lista de inicializadores
// pasando el color rojo pastel ofColor(240, 130, 125) e inicializando huntPower(huntPower).
// En el cuerpo: si huntPower < 0.0f, fijalo en 0.0f.
// === TU CODIGO EMPIEZA AQUI ===

// === TU CODIGO TERMINA AQUI ===

float PredatorBlob::getHuntPower() const {
    return huntPower;
}

bool PredatorBlob::hunt(ForagerBlob& prey) {
    // TODO: Mecanica de caza, drenaje energetico y rebote
    // 1. Valida que tanto el depredador como la presa esten vivos (!alive || !prey.isAlive()). Si alguno murio, retorna false.
    // 2. Comprueba la distancia euclidiana con dist = glm::distance(position, prey.getPosition()).
    // 3. Si estan en contacto (dist < (radius + prey.getRadius()) * 0.9f):
    //    a) Consume energia de ataque: consumeEnergy(1.5f).
    //    b) La presa sufre el impacto: prey.consumeEnergy(huntPower).
    //    c) El depredador asimila sustento sumando a energy: energy += huntPower * 0.7f.
    //    d) Si energy supera 180.0f, limitala en 180.0f.
    //    e) Invierte la velocidad (velocity = -velocity) para provocar rebote elastico.
    //    f) Retorna true.
    // 4. Retorna false si no hubo contacto.
    // === TU CODIGO EMPIEZA AQUI ===

    // === TU CODIGO TERMINA AQUI ===
    return false;
}

void PredatorBlob::update() {
    // TODO: Actualizacion con llamada a Blob::update() y consumo metabolico superior
    // 1. Invoca Blob::update() mediante el operador de resolucion de ambito (::).
    // 2. Si el depredador sigue con vida, añade el consumo propio de depredador con consumeEnergy(0.06f).
    // === TU CODIGO EMPIEZA AQUI ===

    // === TU CODIGO TERMINA AQUI ===
}

void PredatorBlob::draw() const {
    // TODO: Redefinicion de metodo y llamada al metodo base
    // Invoca Blob::draw() con el operador de resolucion de ambito (::) para reutilizar
    // la logica de renderizado implementada en la clase base.
    // === TU CODIGO EMPIEZA AQUI ===

    // === TU CODIGO TERMINA AQUI ===
}
