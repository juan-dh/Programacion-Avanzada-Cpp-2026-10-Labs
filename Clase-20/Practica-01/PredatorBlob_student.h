// PredatorBlob_student.h
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Clase 20 - Práctica: Simulación de la Evolución y Jerarquías en openFrameworks
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#ifndef PREDATORBLOB_STUDENT_H
#define PREDATORBLOB_STUDENT_H

#include "Blob.h"
#include "ForagerBlob.h"

// TODO: Declaracion de la clase PredatorBlob con herencia publica de Blob
// Modela la especializacion de criatura depredadora aplicando la relacion "es-un" (is-a):
// 1. Hereda publicamente de Blob: class PredatorBlob : public Blob.
// 2. Atributo privado float huntPower{28.0f};
// 3. Constructor por defecto PredatorBlob() = default;
// 4. Constructor parametrizado: PredatorBlob(const glm::vec2& pos, const glm::vec2& vel, float energy, float radius, float huntPower);
// 5. Getter: float getHuntPower() const;
// 6. Metodo de depredacion propio: bool hunt(ForagerBlob& prey);
// 7. Redefiniciones de metodos heredados: void update(); y void draw() const;
// === TU CODIGO EMPIEZA AQUI ===

// === TU CODIGO TERMINA AQUI ===

#endif // PREDATORBLOB_STUDENT_H
