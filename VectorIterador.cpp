//
// Created by rebec on 18/5/2021.
//

#include "VectorIterador.h"

VectorIterador::VectorIterador(Persona **coleccionVector, int cantidad) {
    this -> coleccionVector = coleccionVector;
    this -> cantidad = cantidad;
    this -> posicionActual = 0;
}

// 1- Se guarda el elemento actual
// 2- Se avanza el iterador
//3- Se retorna el elemento actual
Persona *VectorIterador::getFirst() {
    if(this->isThereNext()){
        Persona* ele = this ->coleccionVector[this->posicionActual];
        this->posicionActual++;
        return ele;
    }
    return nullptr;
}

bool VectorIterador::isThereNext() {
    if(posicionActual >= this->cantidad){
        return false;
    }
    else{
        return true;
    }
}


