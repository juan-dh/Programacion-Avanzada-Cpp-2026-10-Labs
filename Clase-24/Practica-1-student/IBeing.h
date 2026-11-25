// IBeing.h
// Práctica 1: Funciones Genéricas y Aserciones Estáticas en el Ecosistema
// Profesor: Juan Diego Haro (jharo@asig.com.ec)

#ifndef IBEING_H
#define IBEING_H

#include <string>

class IBeing {
public:
    virtual ~IBeing() = default;

    virtual void update() = 0;
    virtual bool isActive() const = 0;
    virtual std::string getLabel() const = 0;
};

#endif // IBEING_H
