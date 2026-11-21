// PredatorBlob.cpp
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Clase 23 - Práctica 1: Destructores Virtuales en el Ecosistema
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#include "PredatorBlob.h"

int PredatorBlob::activeTrailBuffers = 0;

PredatorBlob::PredatorBlob()
    : Blob(), huntPower(25.0f), trailCapacity(10), trailCount(0),
      trailHistory(new float[10]{}) {
    ++activeTrailBuffers;
}

PredatorBlob::PredatorBlob(float xVal, float yVal, float energyVal, float powerVal, int capacityVal)
    : Blob(xVal, yVal, energyVal), huntPower(powerVal),
      trailCapacity(capacityVal > 0 ? capacityVal : 1), trailCount(0),
      trailHistory(new float[trailCapacity]{}) {
    ++activeTrailBuffers;
}

PredatorBlob::~PredatorBlob() {
    // TODO: Liberación del arreglo dinámico trailHistory en el Heap
    // 1. Libera el arreglo trailHistory con delete[] y asígnale nullptr.
    // 2. Decrementa el contador estático activeTrailBuffers.
    // 3. Imprime: "[~PredatorBlob] Buffer dinamico liberado. Buffers activos: " << activeTrailBuffers << "\n"
    // === TU CODIGO EMPIEZA AQUI ===

    // === TU CODIGO TERMINA AQUI ===
}

float PredatorBlob::getHuntPower() const {
    return huntPower;
}

int PredatorBlob::getActiveTrailBuffers() {
    return activeTrailBuffers;
}

void PredatorBlob::update() {
    if (!alive) {
        return;
    }
    x += 3.0f;
    y += 2.0f;
    consumeEnergy(4.5f);

    if (trailCount + 1 < trailCapacity) {
        trailHistory[trailCount++] = x;
        trailHistory[trailCount++] = y;
    }

    std::cout << "[PredatorBlob::update] Acecha en (" << x << ", " << y
              << ") con poder " << huntPower << " | Energia: " << energy << "\n";
}
