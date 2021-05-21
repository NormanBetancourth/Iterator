//
// Created by norma on 19/5/2021.
//

#include "ListIterator.h"

ListIterator::ListIterator(Nodo *cursor) {
    this->cursor=cursor;
}

Persona *ListIterator::getFirst() {
    Persona *P;
    if (isThereNext()){
        P = cursor->getPersona();
        cursor = cursor->getSig();
        return P;
    }
    else
        return nullptr;
}

bool ListIterator::isThereNext() {
    return (cursor!= nullptr);
}

