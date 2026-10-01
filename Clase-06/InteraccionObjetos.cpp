// InteraccionObjetos.cpp
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#include <iostream>
#include <string>

enum class HealthState {
    Healthy,
    Infected,
    Zombie,
    Dead
};

// 1. Entidad Fruta (Alimento restaurador)
class Fruit {
private:
    std::string type{"Manzana silvestre"};
    int healAmount{20};

public:
    Fruit(const std::string& typeVal = "Manzana silvestre", int healVal = 20)
        : type{typeVal}, healAmount{healVal} {}

    const std::string& getType() const { return type; }
    int getHealAmount() const { return healAmount; }
};

// 2. Entidad Muro de Madera (Defensa perimetral)
class WoodWall {
private:
    int durability{100};

public:
    explicit WoodWall(int initialDurability = 100)
        : durability{initialDurability} {}

    int getDurability() const { return durability; }

    void deteriorate(int amount) {
        durability -= amount;
        if (durability < 0) durability = 0;
    }

    bool isBroken() const { return durability <= 0; }
};

// 3. Entidad Muro Danado (Brecha transitable para la horda)
class DamagedWall {
public:
    bool isPassable() const { return true; }
};

// 4. Entidad Arbol (Obstaculo natural intransitable)
class Tree {
public:
    bool isPassable() const { return false; }
};

// 5. Entidad Humano (Engloba sanos, infectados, zombies y muertos)
class Human {
private:
    std::string name;
    int health{100};
    HealthState state{HealthState::Healthy};
    int damage{25};

public:
    Human(const std::string& nameVal, int healthVal, HealthState stateVal = HealthState::Healthy, int damageVal = 25)
        : name{nameVal}, health{healthVal}, state{stateVal}, damage{damageVal} {
        if (health <= 0) {
            health = 0;
            state = HealthState::Dead;
        }
    }

    const std::string& getName() const { return name; }
    int getHealth() const { return health; }
    HealthState getState() const { return state; }
    int getDamage() const { return damage; }

    void setState(HealthState newState) {
        state = newState;
    }

    inline void applyDamage(int damageAmount) {
        health -= damageAmount;
        if (health <= 0) {
            health = 0;
            state = HealthState::Dead;
        }
    }

    inline void heal(int amount) {
        if (state != HealthState::Dead && state != HealthState::Zombie) {
            health += amount;
            if (health > 100) health = 100;
        }
    }

    // Interaccion con Fruit via puntero a const (Principio de Menor Privilegio)
    inline void eat(const Fruit* fruit) {
        if (fruit != nullptr && (state == HealthState::Healthy || state == HealthState::Infected)) {
            std::cout << "🍎 " << name << " consume una " << fruit->getType() 
                      << " y recupera " << fruit->getHealAmount() << " HP.\n";
            heal(fruit->getHealAmount());
        }
    }

    // Interaccion de ataque zombie a otra entidad humana via puntero mutable
    void attack(Human* entity) const {
        if (entity != nullptr && state == HealthState::Zombie) {
            std::cout << "🧟 [" << name << "] incursionando por la brecha ataca a " 
                      << entity->getName() << " causando " << damage << " de dano!\n";
            entity->applyDamage(damage);
            // Si el objetivo sobrevive pero fue atacado por un zombie, se transforma
            if (entity->getState() == HealthState::Healthy) {
                std::cout << "☣️  ¡" << entity->getName() << " ha sido infectado y se transforma en Zombie!\n";
                entity->setState(HealthState::Zombie);
            }
        } else if (entity == nullptr) {
            std::cout << "🧟 [" << name << "] ataca al aire (objetivo nullptr).\n";
        }
    }

    std::string getStateString() const {
        switch (state) {
            case HealthState::Healthy:  return "Saludable";
            case HealthState::Infected: return "Infectado";
            case HealthState::Zombie:   return "Zombie";
            case HealthState::Dead:     return "Muerto";
            default:                    return "Desconocido";
        }
    }

    void displayCard() const {
        std::cout << (state == HealthState::Zombie ? "🧟 " : "🧑 ")
                  << "Humano: " << name << " | Salud: " << health 
                  << " HP | Estado: " << getStateString() << "\n";
    }
};

int main() {
    // Interaccion de entidades via punteros y transicion de estado
    std::cout << "\n=== ENCUENTRO EN EL REFUGIO: INTERACCION VIA PUNTEROS ===\n";
    Human joel{"Joel Miller", 80, HealthState::Healthy};
    Human chasqueador{"Chasqueador", 100, HealthState::Zombie, 35};
    Fruit manzanaFresca{"Manzana fresca", 20};

    joel.displayCard();
    chasqueador.displayCard();

    std::cout << "\n-- Joel consume fruta del huerto antes de la incursion --\n";
    const Fruit* ptrFruta = &manzanaFresca;
    joel.eat(ptrFruta);
    joel.displayCard();

    std::cout << "\n-- Incursion zombie --\n";
    Human* ptrZombie = &chasqueador;
    Human* ptrHumano = &joel;

    // El zombie ataca directamente mutando la salud y el estado del objetivo
    ptrZombie->attack(ptrHumano);
    ptrHumano->displayCard();
    
    return 0;
}
