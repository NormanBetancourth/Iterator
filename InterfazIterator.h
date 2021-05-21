#ifndef ITERATOR_ITERATOR_H
#define ITERATOR_ITERATOR_H
#include"Persona.h"

class InterfazIterator {
public:
    virtual ~InterfazIterator() = default;
    virtual Persona* getFirst() = 0;
    virtual bool isThereNext() = 0;
};


#endif //ITERATOR_ITERATOR_H
