// Human.h
#ifndef HUMAN_H
#define HUMAN_H

#include <string>

enum class HealthState {
    Healthy,
    Infected,
    Zombie,
    Dead
};

class Human {
private:
    std::string name;
    int health{100};
    HealthState state{HealthState::Healthy};
    int damage{30};

public:
    Human(const std::string& n, int h, HealthState s = HealthState::Healthy, int d = 30);
    ~Human();

    const std::string& getName() const;
    int getHealth() const;
    HealthState getState() const;
    int getDamage() const;

    void setState(HealthState newState);
    void applyDamage(int damageAmount);
    void attack(Human* target) const;

    std::string getStateString() const;
    void displayCard() const;
};

#endif // HUMAN_H
