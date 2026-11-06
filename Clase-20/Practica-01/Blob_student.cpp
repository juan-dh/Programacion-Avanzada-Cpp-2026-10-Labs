// Blob_student.cpp
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Clase 20 - Práctica: Simulación de la Evolución y Jerarquías en openFrameworks
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#include "Blob.h"

Blob::Blob(const glm::vec2& pos, const glm::vec2& vel, float energy, float radius, const ofColor& col)
    // TODO: Lista de inicializacion de miembros de Blob
    // Inicializa los atributos: position(pos), velocity(vel), energy(energy), radius(radius),
    // color(col) y alive(energy > 0.0f).
    // === TU CODIGO EMPIEZA AQUI ===

    // === TU CODIGO TERMINA AQUI ===
{
    noiseOffset = ofRandom(0.0f, 1000.0f);
    if (this->energy <= 0.0f) {
        this->energy = 0.0f;
        alive = false;
    }
    // Carga grafica del recurso SVG provista
    svg.load("blob.svg");
    setColor(color);
}

glm::vec2 Blob::getPosition() const { return position; }
glm::vec2 Blob::getVelocity() const { return velocity; }
float Blob::getEnergy() const { return energy; }
float Blob::getRadius() const { return radius; }
ofColor Blob::getColor() const { return color; }
bool Blob::isAlive() const { return alive; }

void Blob::setPosition(const glm::vec2& pos) { position = pos; }
void Blob::setVelocity(const glm::vec2& vel) { velocity = vel; }

void Blob::setColor(const ofColor& col) {
    color = col;
    // Aplicacion de color sobre la geometria vectorial provista
    if (svg.getNumPath() > 0) {
        svg.getPathAt(0).setFillColor(color);
    }
}

void Blob::update() {
    if (!alive) {
        return;
    }

    // Calculo de perturbacion de movimiento organico (Perlin Noise) provisto
    noiseOffset += 0.01f;
    glm::vec2 noiseForce(ofSignedNoise(noiseOffset), ofSignedNoise(noiseOffset + 100.0f));
    velocity += noiseForce * 0.15f;

    // TODO: Actualizacion cinematica y gasto energetico basal
    // 1. Limita la rapidez maxima: si glm::length(velocity) supera 4.0f, normaliza y escala velocity a 4.0f.
    // 2. Actualiza la posicion sumando vectorialmente la velocidad (position += velocity).
    // 3. Invoca checkEdges() para controlar el rebote contra los limites de la ventana.
    // 4. Consume la energia basal constante mediante consumeEnergy(0.04f).
    // === TU CODIGO EMPIEZA AQUI ===

    // === TU CODIGO TERMINA AQUI ===
}

void Blob::checkEdges() {
    // TODO: Rebote elastico en limites de la ventana
    // Obten las dimensiones de la ventana con w = ofGetWidth(), h = ofGetHeight().
    // - Si position.x > w - radius, fija position.x = w - radius e invierte velocity.x.
    // - Si position.x < radius, fija position.x = radius e invierte velocity.x.
    // - Si position.y > h - radius, fija position.y = h - radius e invierte velocity.y.
    // - Si position.y < radius, fija position.y = radius e invierte velocity.y.
    // === TU CODIGO EMPIEZA AQUI ===

    // === TU CODIGO TERMINA AQUI ===
}

void Blob::consumeEnergy(float amount) {
    // TODO: Consumo metabolico de energia y transicion a estado inerte
    // Resta amount a energy. Si energy cae a 0.0f o menos:
    // 1. Fija energy en 0.0f.
    // 2. Cambia alive a false.
    // 3. Tiñe el cuerpo de gris pastel invocando setColor(ofColor(195, 200, 205)).
    // === TU CODIGO EMPIEZA AQUI ===

    // === TU CODIGO TERMINA AQUI ===
}

void Blob::draw() const {
    // Renderizado vectorial del SVG centrado y escalado provisto
    ofPushMatrix();
    ofTranslate(position.x, position.y);
    float scale = (radius * 2.0f) / 100.0f;
    ofScale(scale, scale);
    ofTranslate(-50.0f, -50.0f);
    svg.draw();
    ofPopMatrix();
}
