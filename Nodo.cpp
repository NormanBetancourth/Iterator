//
// Created by norma on 18/5/2021.
//

#include "Nodo.h"
Nodo::Nodo(Persona *p, Nodo * sig) {
    this->p=p;
    this->sig=sig;
}

void Nodo::setPersona(Persona *P) {
    p=P;
}

Persona *Nodo::getPersona() {
    return p;
}

void Nodo::setSig(Nodo *sig) {
    this->sig=sig;
}

Nodo *Nodo::getSig() {
    return sig;
}

string Nodo::toString() {
    return p->toString();
}