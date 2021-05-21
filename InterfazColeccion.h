//
// Created by rebec on 18/5/2021.
//

#ifndef PERSONA_CPP_INTERFAZCOLECCION_H
#define PERSONA_CPP_INTERFAZCOLECCION_H
#include<iostream>
#include"InterfazIterator.h"
using namespace std;

class InterfazColeccion {
public:
    virtual void insertarAlFinal(Persona* elemento) = 0;
    virtual void insertarEnPosicion(Persona* elemento, int posicion) = 0;
    virtual void borrarEnPosicion(int posicion, bool liberarMemoria = false) = 0;
    virtual Persona* consultarPorPosicion(int posicion) = 0;
    virtual bool contiene(Persona* elemento) = 0;
    virtual int getCantidad() = 0;
    virtual InterfazIterator* createIterador() = 0;
    virtual ~InterfazColeccion() = default;
};


#endif //PERSONA_CPP_INTERFAZCOLECCION_H
