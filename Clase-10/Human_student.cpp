// Human_student.cpp
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Clase 10: Separación de Interfaz e Implementación y Ciclo de Vida del Objeto
// Estudiante: [Tu Nombre]
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

// TODO 1: Incluye la interfaz de la clase Human.
// Pregunta pedagógica: ¿Por qué usamos comillas dobles "" en lugar de corchetes angulares <>?
#include "Human.h"
#include <iostream>

// TODO 2: Implementa el Constructor parametrizado utilizando el operador de
// resolución de ámbito (Human::Human) y una lista de inicialización de miembros.
Human::Human(const std::string& n, int h, HealthState s, int d)
    : name{n}, health{h}, state{s}, damage{d} {
    if (health <= 0) {
        health = 0;
        state = HealthState::Dead;
    }
    std::cout << "[CONSTRUCTOR] Humano " << name << " (" << health 
              << " HP, " << getStateString() << ") registrado en el refugio.\n";
}

// TODO 3: Implementa el Destructor de la clase (~Human).
// Imprime un mensaje por pantalla para rastrear en qué momento y en qué orden (LIFO)
// se liberan los objetos del Stack.
Human::~Human() {
    std::cout << "[DESTRUCTOR]  Humano " << name << " (" << getStateString() 
              << ") saliendo de memoria. Registro liberado del stack.\n";
}

const std::string& Human::getName() const { return name; }
int Human::getHealth() const { return health; }
HealthState Human::getState() const { return state; }
int Human::getDamage() const { return damage; }

void Human::setState(HealthState newState) { state = newState; }

// TODO 4: Implementa el método applyDamage.
// Reduce la salud sin permitir valores negativos. Si la salud llega a 0,
// cambia el estado a HealthState::Dead y notifica la baja en combate.
void Human::applyDamage(int damageAmount) {
    if (damageAmount <= 0) return;
    int saludAnterior = health;
    health -= damageAmount;
    if (health <= 0) {
        health = 0;
        state = HealthState::Dead;
    }
    std::cout << "  💥 " << name << " recibe " << damageAmount << " pts de dano. "
              << "Salud: " << saludAnterior << " -> " << health << " HP\n";
    if (health == 0 && saludAnterior > 0) {
        std::cout << "  ⚠️  ¡BAJA EN COMBATE! " << name << " ha caido en el refugio.\n";
    }
}

void Human::attack(Human* target) const {
    if (target != nullptr && state == HealthState::Zombie) {
        std::cout << "🧟 [" << name << "] ataca ferozmente a " 
                  << target->getName() << " causando " << damage << " de dano!\n";
        target->applyDamage(damage);
        if (target->getState() == HealthState::Healthy && target->getHealth() > 0) {
            std::cout << "☣️  ¡" << target->getName() << " ha sido infectado y se transforma en Zombie!\n";
            target->setState(HealthState::Zombie);
        }
    }
}

std::string Human::getStateString() const {
    switch (state) {
        case HealthState::Healthy:  return "Saludable";
        case HealthState::Infected: return "Infectado";
        case HealthState::Zombie:   return "Zombie";
        case HealthState::Dead:     return "Muerto";
        default:                    return "Desconocido";
    }
}

void Human::displayCard() const {
    std::cout << (state == HealthState::Zombie ? "🧟 " : (state == HealthState::Dead ? "💀 " : "🧑 "))
              << "Humano: " << name << " | Salud: " << health 
              << " HP | Estado: " << getStateString() << " | Dano: " << damage << "\n";
}
