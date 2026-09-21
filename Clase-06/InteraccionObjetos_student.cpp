// InteraccionObjetos_student.cpp
// USFQ - Colegio de Ciencias e Ingeniería
// CMP-2102: Programación Avanzada en C++
// Clase 06: Punteros a Constante, Punteros Mutables e Interacción entre Objetos
// Estudiante: [Tu Nombre]
// Profesor: Juan Diego Haro (jharo@asig.com.ec)
//
// Compilación:
// g++ -std=c++14 -Wall -Wextra InteraccionObjetos_student.cpp -o interaccion_student
// ./interaccion_student

#include <iostream>
#include <string>

enum class HealthState
{
    Healthy,
    Infected,
    Zombie,
    Dead
};

// 1. Entidad Fruta (Alimento restaurador)
class Fruit
{
private:
    std::string type{"Manzana silvestre"};
    int healAmount{20};

public:
    Fruit(const std::string &typeVal = "Manzana silvestre", int healVal = 20)
        : type{typeVal}, healAmount{healVal} {}

    const std::string &getType() const { return type; }
    int getHealAmount() const { return healAmount; }
};

// 2. Entidad Muro de Madera (Defensa perimetral)
class WoodWall
{
private:
    int durability{100};

public:
    explicit WoodWall(int initialDurability = 100)
        : durability{initialDurability} {}

    int getDurability() const { return durability; }

    void deteriorate(int amount)
    {
        durability -= amount;
        if (durability < 0)
            durability = 0;
    }

    bool isBroken() const { return durability <= 0; }
};

// 3. Entidad Muro Danado (Brecha transitable para la horda)
class DamagedWall
{
public:
    bool isPassable() const { return true; }
};

// 4. Entidad Arbol (Obstaculo natural intransitable)
class Tree
{
public:
    bool isPassable() const { return false; }
};

// 5. Entidad Humano (Engloba sanos, infectados, zombies y muertos)
class Human
{
private:
    std::string name;
    int health{100};
    HealthState state{HealthState::Healthy};
    int damage{25};

public:
    Human(const std::string &nameVal, int healthVal, HealthState stateVal = HealthState::Healthy, int damageVal = 25)
        : name{nameVal}, health{healthVal}, state{stateVal}, damage{damageVal}
    {
        if (health <= 0)
        {
            health = 0;
            state = HealthState::Dead;
        }
    }

    const std::string &getName() const { return name; }
    int getHealth() const { return health; }
    HealthState getState() const { return state; }
    int getDamage() const { return damage; }

    void setState(HealthState newState)
    {
        state = newState;
    }

    inline void applyDamage(int damageAmount)
    {
        health -= damageAmount;
        if (health <= 0)
        {
            health = 0;
            state = HealthState::Dead;
        }
    }

    inline void heal(int amount)
    {
        if (state != HealthState::Dead && state != HealthState::Zombie)
        {
            health += amount;
            if (health > 100)
                health = 100;
        }
    }

    // =========================================================================
    // TODO 1: Interacción de alimentación (Principio de Menor Privilegio)
    // 1. Valida que 'fruit' no sea nullptr antes de acceder a sus datos.
    // 2. Completa la llamada a heal() pasando la curación provista por 'fruit'
    //    mediante el operador flecha (->).
    // =========================================================================
    inline void eat(const Fruit *fruit)
    {
        if (/* TODO: validar que fruit no sea nullptr */ &&(state == HealthState::Healthy || state == HealthState::Infected))
        {
            std::cout << "🍎 " << name << " consume una " << fruit->getType()
                      << " y recupera " << fruit->getHealAmount() << " HP.\n";
            heal(/* TODO: obtener curación desde fruit */);
        }
    }

    // =========================================================================
    // TODO 2: Interacción de ataque zombie mediante puntero mutable
    // 1. Verifica que 'entity' no sea nullptr y que el atacante sea un Zombie.
    // 2. Aplica 'damage' a la entidad objetivo usando el operador flecha (->).
    // 3. Si el objetivo sobrevive pero estaba Healthy, inféctalo usando setState().
    // =========================================================================
    void attack(Human *entity) const
    {
        if (/* TODO: validar entity y que atacante sea Zombie */)
        {
            std::cout << "🧟 [" << name << "] incursionando por la brecha ataca a "
                      << entity->getName() << " causando " << damage << " de dano!\n";

            // TODO: Aplicar damage a entity invocando applyDamage()
            entity->/* TODO */;

            // Si el objetivo sobrevive pero fue atacado por un zombie, se transforma
            if (entity->getState() == HealthState::Healthy)
            {
                std::cout << "☣️  ¡" << entity->getName() << " ha sido infectado y se transforma en Zombie!\n";
                // TODO: Asignar HealthState::Zombie a entity
                entity->/* TODO */;
            }
        }
        else if (entity == nullptr)
        {
            std::cout << "🧟 [" << name << "] ataca al aire (objetivo nullptr).\n";
        }
    }

    std::string getStateString() const
    {
        switch (state)
        {
        case HealthState::Healthy:
            return "Saludable";
        case HealthState::Infected:
            return "Infectado";
        case HealthState::Zombie:
            return "Zombie";
        case HealthState::Dead:
            return "Muerto";
        default:
            return "Desconocido";
        }
    }

    void displayCard() const
    {
        std::cout << (state == HealthState::Zombie ? "🧟 " : "🧑 ")
                  << "Humano: " << name << " | Salud: " << health
                  << " HP | Estado: " << getStateString() << "\n";
    }
};

int main()
{
    std::cout << "\n=== ENCUENTRO EN EL REFUGIO: INTERACCION VIA PUNTEROS ===\n";
    Human joel{"Joel Miller", 80, HealthState::Healthy};
    Human chasqueador{"Chasqueador", 100, HealthState::Zombie, 35};
    Fruit manzanaFresca{"Manzana fresca", 20};

    joel.displayCard();
    chasqueador.displayCard();

    std::cout << "\n-- Joel consume fruta del huerto antes de la incursion --\n";
    // =========================================================================
    // TODO 3: Puntero constante y alimentación
    // 1. Declara un puntero constante a Fruit llamado 'ptrFruta' que almacene
    //    la dirección de memoria de 'manzanaFresca'.
    // 2. Haz que Joel consuma la fruta invocando su método eat(ptrFruta).
    // =========================================================================
    /* TODO: Declarar ptrFruta apuntando a &manzanaFresca */
    /* TODO: Invocar joel.eat(ptrFruta) */

    joel.displayCard();

    std::cout << "\n-- Incursion zombie --\n";
    // =========================================================================
    // TODO 4: Punteros mutables y combate
    // 1. Declara los punteros mutables 'ptrZombie' y 'ptrHumano', apuntando a
    //    las direcciones de 'chasqueador' y 'joel' respectivamente.
    // 2. A través de 'ptrZombie', invoca el método attack() pasando a 'ptrHumano'.
    // 3. Muestra la tarjeta de salud del humano atacado invocando displayCard()
    //    a través de 'ptrHumano' usando el operador flecha (->).
    // =========================================================================
    /* TODO: Declarar ptrZombie apuntando a &chasqueador */
    /* TODO: Declarar ptrHumano apuntando a &joel */

    /* TODO: Ejecutar el ataque de ptrZombie hacia ptrHumano */
    /* TODO: Mostrar la tarjeta de ptrHumano con el operador flecha */

    return 0;
}
