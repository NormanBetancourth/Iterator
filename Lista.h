//
// Created by norma on 18/5/2021.
//

#ifndef PERSONA_CPP_LISTA_H
#define PERSONA_CPP_LISTA_H
#include "InterfazColeccion.h"
#include "Nodo.h"
#include "ListIterator.h"

class Lista: public InterfazColeccion {
private:
    Nodo* raiz;
    Nodo* aux;
public:
    Lista();
    void insertarAlFinal(Persona* elemento);
    void borrarEnPosicion(int posicion, bool liberarMemoria);
    Persona* consultarPorPosicion(int posicion);
    bool contiene(Persona* elemento);
    int getCantidad();
    InterfazIterator* createIterador();
    void insertarEnPosicion(Persona* elemento, int posicion);


    bool estaVacia();
    Nodo* getRaiz();
    void agregarIni(Persona*);
    string toString();
    void ordenarLista();
    bool eliminarIni();
    bool eliminaFinal();
    int cuentaNodos();
    bool busqueda(string);
};


#endif //PERSONA_CPP_LISTA_H
