//
// Created by norma on 19/5/2021.
//

#ifndef PERSONA_CPP_LISTITERATOR_H
#define PERSONA_CPP_LISTITERATOR_H
#include "Lista.h"
#include "InterfazIterator.h"

class ListIterator: public InterfazIterator {
private:
    Nodo* cursor;
public:
    ListIterator(Nodo* cursor);
    Persona* getFirst();
    bool isThereNext();

};


#endif //PERSONA_CPP_LISTITERATOR_H
