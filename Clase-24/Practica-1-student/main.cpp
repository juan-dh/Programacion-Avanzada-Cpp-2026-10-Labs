// main.cpp
// Práctica 1: Funciones Genéricas y Aserciones Estáticas en el Ecosistema
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#include "EcosystemMath.h"
#include "PredatorBlob.h"
#include <iostream>

int main() {
    std::cout << "=== 1. Deduccion e Instanciacion de clampStat<T> ===\n";
    int rawPopulation = 145;
    int safePopulation = 0;
    float rawEnergy = -12.5f;
    float safeEnergy = 0.0f;

    // TODO: Invocación de clampStat con deducción implícita y especificación explícita
    // 1. Asigna a safePopulation el resultado de clampStat(rawPopulation, 10, 100) usando deducción de tipos.
    // 2. Asigna a safeEnergy el resultado de clampStat<float>(rawEnergy, 0, 100) especificando explícitamente float.
    // === TU CODIGO EMPIEZA AQUI ===

    // === TU CODIGO TERMINA AQUI ===

    std::cout << "Poblacion ajustada (int): " << safePopulation << "\n";
    std::cout << "Energia ajustada (float): " << safeEnergy << "\n";

    std::cout << "\n=== 2. Interpolacion en Punto Flotante con lerpStat<T> ===\n";
    double morningTemp = 14.0;
    double noonTemp = 26.5;
    double currentTemp = 0.0;

    // TODO: Invocación de lerpStat<T>
    // Calcula la temperatura interpolada al 60% (factor 0.6) entre morningTemp y noonTemp y guárdala en currentTemp.
    // === TU CODIGO EMPIEZA AQUI ===

    // === TU CODIGO TERMINA AQUI ===

    std::cout << "Temperatura interpolada al 60% (double): " << currentTemp << " C\n";

    std::cout << "\n=== 3. Restriccion de Jerarquia con selectMoreEnergetic<T> ===\n";
    PredatorBlob alpha(10.0f, 20.0f, 115.0f, 40.0f);
    PredatorBlob beta(30.0f, 50.0f, 82.0f, 35.0f);

    // TODO: Selección polimórfica estática con selectMoreEnergetic<T>
    // Obtén una referencia constante const PredatorBlob& leader llamando a selectMoreEnergetic(alpha, beta)
    // e imprime sus coordenadas, energía y poder de caza.
    // === TU CODIGO EMPIEZA AQUI ===

    // === TU CODIGO TERMINA AQUI ===

    return 0;
}
