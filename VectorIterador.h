#ifndef PERSONA_CPP_VECTORITERADOR_H
#define PERSONA_CPP_VECTORITERADOR_H
#include"InterfazIterator.h"
#include"Vector.h"
using namespace std;

class VectorIterador: public InterfazIterator {
private:
    Persona** coleccionVector;
    int cantidad;
    int posicionActual;
public:
    VectorIterador(Persona** coleccionVector, int cant);
    Persona* getFirst();
    bool isThereNext();
};



#endif //PERSONA_CPP_VECTORITERADOR_H
