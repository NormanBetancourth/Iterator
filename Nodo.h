//
// Created by norma on 18/5/2021.
//

#ifndef PERSONA_CPP_NODO_H
#define PERSONA_CPP_NODO_H
#include "Persona.h"
#include <sstream>

class Nodo {
private:
    Persona *p;
    Nodo* sig;
public:
    Nodo(Persona *, Nodo*);

    void setPersona(Persona*);
    Persona* getPersona();
    void setSig(Nodo*);
    Nodo* getSig();
    string toString();



};


#endif //PERSONA_CPP_NODO_H
