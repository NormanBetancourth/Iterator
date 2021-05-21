#ifndef ITERATOR_VECTOR_H
#define ITERATOR_VECTOR_H
#include"InterfazColeccion.h"
#include"InterfazIterator.h"
#include"VectorIterador.h"

class Vector: public InterfazColeccion{
private:
    Persona** datos;
    int capacidadActual;
    int cantidad;
    void asegurarCapacidad();
public:
    Vector(int);
    ~Vector();
    void insertarAlFinal(Persona* elemento);
    void insertarEnPosicion(Persona* elemento, int posicion);
    void borrarEnPosicion(int posicion, bool liberarMemoria = false);
    Persona* consultarPorPosicion(int posicion);
    bool contiene(Persona* elemento);
    int getCantidad();
    InterfazIterator* createIterador();
    int getCapacidadActual();
    string toString();
};



#endif //ITERATOR_VECTOR_H
