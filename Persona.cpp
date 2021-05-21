//
// Created by norma on 16/5/2021.
//

#include "Persona.h"

Persona::Persona(string nombre, string id, int edad) {
    this->nombre=nombre;
    this->id=id;
    this->edad=edad;
}

Persona::~Persona() {

}

void Persona::setNombre(const string &nombre) {
    Persona::nombre = nombre;
}

void Persona::setId(const string &id) {
    Persona::id = id;
}

void Persona::setEdad(int edad) {
    Persona::edad = edad;
}

const string &Persona::getNombre() const {
    return nombre;
}

const string &Persona::getId() const {
    return id;
}

int Persona::getEdad() const {
    return edad;
}

string Persona::toString() {
    stringstream s;
    s<<"Persona: "<<getNombre()<<"\n"<<"Id: "<<getId()<<"\n"<<"edad: "<<getEdad()<<"\n";
    return s.str();
}
