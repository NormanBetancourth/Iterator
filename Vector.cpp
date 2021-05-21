#include "Vector.h"

void Vector::asegurarCapacidad(){
    if (this->cantidad == this->capacidadActual) {
        //se duplica la capacidad actual del arreglo
        this->capacidadActual = capacidadActual * 2;
        auto** nuevoArreglo = new Persona * [this->capacidadActual];


        //se copian los elementos almacenados en el nuevo arreglo
        for (int i = 0; i < this->cantidad; i++) {
            nuevoArreglo[i] = datos[i];
        }

        //se elimina el arreglo anterior y se actualizan el arreglo
        delete[] this->datos;
        this->datos = nuevoArreglo;

        //se inicializan las nuevas posiciones libres
        for (int j = this->cantidad; j < this->capacidadActual; j++) {
            datos[j] = nullptr;
        }
    }
}

Vector::Vector(int capacidadInicial){
    this->capacidadActual = capacidadInicial;
    this->cantidad = 0;
    this->datos = new Persona * [this->capacidadActual];

    for (int i = 0; i < this->capacidadActual; i++) {
        this->datos[i] = nullptr;
    }
}

Vector::~Vector(){
    for (int i = 0; i < this->cantidad; i++) {
        datos[i] = nullptr;
    }
    delete[] datos;
}

void Vector::insertarAlFinal(Persona* elemento){
    asegurarCapacidad();
    this->datos[this->cantidad++] = elemento;
}

void Vector::insertarEnPosicion(Persona* elemento, int posicion){
    if (posicion > this->cantidad) {
        cerr << "Posicion de insercion invalida" << endl;
        return;
    }

    asegurarCapacidad();
    for (int i = this->cantidad - 1; i >= posicion; i--) {
        this->datos[i + 1] = this->datos[i];
    }
    this->datos[posicion] = elemento;
    this->cantidad++;
}

void Vector::borrarEnPosicion(int posicion, bool liberarMemoria){

    if (posicion >= this->cantidad) {
        cerr << "Posicion de eliminacion invalida" << endl;
        return;
    }

    if (liberarMemoria && this->datos[posicion]) {
        delete this->datos[posicion];
    }

    for (int i = posicion; i < this->cantidad - 1; i++) {
        this->datos[i] = datos[i + 1];
    }

    this->datos[this->cantidad - 1] = nullptr;
    this->cantidad--;
}


Persona* Vector::consultarPorPosicion(int posicion){
    if (posicion >= this->cantidad) {
        cerr << "Posicion invalida" << endl;
        return nullptr;
    }
    return this->datos[posicion];
}

bool Vector::contiene(Persona* elemento){
    for (int i = 0; i < this -> cantidad; i++) {
        if (this->datos[i] == elemento) {
            return true;
        }
    }
    return false;
}

int Vector::getCantidad() {
    return this->cantidad;
}

InterfazIterator* Vector::createIterador() {
    return new VectorIterador(this->datos, this->getCantidad());
}

int Vector::getCapacidadActual(){
    return capacidadActual;
}

string Vector::toString(){
    stringstream s;
    for (int i = 0; i < cantidad; i++) {
        cout << "\n" << datos[i]->toString();
    }

    return s.str();
}

