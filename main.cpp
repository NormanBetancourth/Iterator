#include <iostream>
#include "Vector.h"
#include "VectorIterador.h"
#include "Lista.h"
#include "ListIterator.h"
int main() {

    Persona *p1= new Persona( "Marta", "1", 34);
    Persona *p2= new Persona( "Jose", "2", 22);
    Persona *p3= new Persona( "Rebecca", "3", 18);
    Persona *p4= new Persona( "Norman", "4", 19);

    Vector* V=new Vector(5);
    V->insertarAlFinal(p1);
    V->insertarAlFinal(p2);
    V->insertarAlFinal(p3);
    V->insertarAlFinal(p4);

    Lista* L = new Lista();
    L->insertarAlFinal(p1);
    L->insertarAlFinal(p2);
    L->insertarAlFinal(p3);
    L->insertarAlFinal(p4);
    InterfazIterator * VI = V->createIterador();
    cout<<VI->getFirst()->toString();
    while (VI->isThereNext()){
        cout<<VI->getFirst()->toString();
    }

    cout<<"----------------------------------------------------------------------------------------"<<endl;
    VI = L->createIterador();
    cout<<VI->getFirst()->toString();
    while (VI->isThereNext()){
        cout<<VI->getFirst()->toString();
    }



    delete V;
    delete VI;
}
