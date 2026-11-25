// PopulationBuffer.h
// Práctica 2: Plantilla de Clase Contenedora para el Ecosistema
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#ifndef POPULATIONBUFFER_H
#define POPULATIONBUFFER_H

#include "IBeing.h"
#include <type_traits>

template <typename T, int MaxCapacity>
class PopulationBuffer {
    // TODO: Aserciones estáticas sobre los parámetros de plantilla T y MaxCapacity
    // 1. Verifica con static_assert que MaxCapacity > 0.
    // 2. Verifica con static_assert y std::is_base_of<IBeing, T>::value que T herede de IBeing.
    // === TU CODIGO EMPIEZA AQUI ===

    // === TU CODIGO TERMINA AQUI ===

private:
    T elements[MaxCapacity];
    int count{0};

public:
    PopulationBuffer() = default;

    // TODO: Inserción acotada en el contenedor estático
    // Si count >= MaxCapacity retorna false; en caso contrario almacena item en elements[count++] y retorna true.
    bool add(const T& item) {
        // === TU CODIGO EMPIEZA AQUI ===
        (void)item;
        return false;
        // === TU CODIGO TERMINA AQUI ===
    }

    int getCount() const {
        return count;
    }

    int getCapacity() const {
        return MaxCapacity;
    }

    T& operator[](int index) {
        return elements[index];
    }

    const T& operator[](int index) const {
        return elements[index];
    }

    // TODO: Actualización de todas las entidades activas almacenadas
    // Recorre desde i = 0 hasta i < count y llama a elements[i].update() si elements[i].isActive() es true.
    void updateAll() {
        // === TU CODIGO EMPIEZA AQUI ===

        // === TU CODIGO TERMINA AQUI ===
    }
};

#endif // POPULATIONBUFFER_H
