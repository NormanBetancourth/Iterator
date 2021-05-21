//
// Created by norma on 16/5/2021.
//

#ifndef ITERATOR_PERSONA_H
#define ITERATOR_PERSONA_H
#include <iostream>
#include <sstream>

using namespace std;
class Persona {
private:
    string nombre;
    string id;
    int edad ;
public:
    Persona(string nombre="indef",string id="indef", int edad=0 );
    ~Persona();

    void setNombre(const string &nombre);
    void setId(const string &id);
    void setEdad(int edad);

    const string &getNombre() const;
    const string &getId() const;
    int getEdad() const;

    string toString();
};


#endif //ITERATOR_PERSONA_H
