// EcosystemMath.h
// Práctica 1: Funciones Genéricas y Aserciones Estáticas en el Ecosistema
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#ifndef ECOSYSTEMMATH_H
#define ECOSYSTEMMATH_H

#include "Blob.h"
#include <type_traits>

// TODO: Plantilla de función clampStat<T> con validación aritmética en compilación
// 1. Reemplaza el cuerpo por un static_assert con std::is_arithmetic<T>::value para exigir un tipo numérico aritmético.
// 2. Retorna minVal si value < minVal, maxVal si value > maxVal, o value en caso contrario.
template <typename T>
T clampStat(T value, T minVal, T maxVal) {
    // === TU CODIGO EMPIEZA AQUI ===
    (void)minVal;
    (void)maxVal;
    return value;
    // === TU CODIGO TERMINA AQUI ===
}

// TODO: Plantilla de función lerpStat<T> restringida a punto flotante
// 1. Añade un static_assert con std::is_floating_point<T>::value que valide que T sea float o double.
// 2. Retorna la interpolación lineal: start + (end - start) * factor.
template <typename T>
T lerpStat(T start, T end, T factor) {
    // === TU CODIGO EMPIEZA AQUI ===
    (void)end;
    (void)factor;
    return start;
    // === TU CODIGO TERMINA AQUI ===
}

// TODO: Plantilla de función selectMoreEnergetic<T> restringida a derivadas de Blob
// 1. Usa static_assert con std::is_base_of<Blob, T>::value para permitir solo subtipos de Blob.
// 2. Retorna por referencia constante el objeto cuya energía (getEnergy()) sea mayor o igual.
template <typename T>
const T& selectMoreEnergetic(const T& first, const T& second) {
    // === TU CODIGO EMPIEZA AQUI ===
    (void)second;
    return first;
    // === TU CODIGO TERMINA AQUI ===
}

#endif // ECOSYSTEMMATH_H
