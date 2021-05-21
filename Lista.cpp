//
// Created by norma on 18/5/2021.
//

#include "Lista.h"

Lista::Lista() {
    raiz=nullptr;
    aux=nullptr;
}

void Lista::insertarAlFinal(Persona *P) {
    aux=raiz;
    if (estaVacia()){
        raiz =new Nodo(P, nullptr);
    } else{
        while (aux->getSig()!= nullptr){
            aux =aux->getSig();
        }
        aux->setSig(new Nodo(P, nullptr));
    }
}

bool Lista::estaVacia() {
        return raiz== nullptr? true:false;
}

void Lista::borrarEnPosicion(int posicion, bool liberarMemoria) {
    stringstream ss;//casteo para eliminar en la lista
                    //con respecto a el id de la persona
    string nom;
    ss << posicion;
    ss >> nom;
    Nodo* anterior = nullptr;
    aux=raiz;
    if (raiz->getPersona()->getId()==nom){
        aux =aux->getSig();
        delete raiz;
        raiz =aux;
    }
    while (aux != nullptr and aux->getPersona()->getId()!= nom){
        anterior = aux;
        aux= aux->getSig();
    }
    if (aux== nullptr){
    } else{
        anterior->setSig(aux->getSig());
        delete aux;
    }
}

Persona* Lista::consultarPorPosicion(int posicion) {

    string id;
    stringstream ss;
    ss<<posicion;
    ss>>id;

    if (estaVacia()) {
        return nullptr;
    }
    else {
        if (busqueda(id) != false) {
            return aux->getPersona();
        }
        return nullptr;
    }
}

void Lista::agregarIni(Persona * P) {
    raiz = new Nodo(P, raiz);
}

string Lista::toString() {
    aux = raiz;
    stringstream s;
    while (aux != nullptr) {
        s << aux->toString() << endl;
        aux= aux->getSig();
    }
    return s.str();
}

void Lista::ordenarLista() {
    aux =raiz;
    Nodo *temp = nullptr;
    Persona* P= nullptr;
    while (aux->getSig()!= nullptr){
        temp = aux->getSig();
        while (temp!= nullptr){
            if (aux->getPersona()->getId()> temp->getPersona()->getId()){
                P = temp->getPersona();
                temp->setPersona(aux->getPersona());
                aux->setPersona(P);
            }
            temp=temp->getSig();
        }
        aux=aux->getSig();
    }
}

bool Lista::eliminarIni() {
    if (estaVacia()){
        return false;
    } else{
        aux=raiz;
        raiz = raiz->getSig();
        delete aux;
        return true;
    }
}

bool Lista::busqueda(string id) {
    aux = raiz;
    if (estaVacia()) {
        return false;
    }
    else {
        while (aux != nullptr) {
            if (aux->getPersona()->getId() == id) {
                return true;
            }
            aux = aux->getSig();
        }
        return false;
    }
}

bool Lista::eliminaFinal() {
    aux = raiz;
    Nodo* anterior= nullptr;
    if (estaVacia()) {
        return false;
    }
    else {
        while (aux->getSig() != nullptr) {
            anterior = aux;
            aux = aux->getSig();

        }
        anterior->setSig(nullptr);
        delete aux;
        aux = anterior;
        return true;
    }
}

bool Lista::contiene(Persona *elemento) {
    return  busqueda(elemento->getId());
}

int Lista::cuentaNodos() {
    int cont = 0;
    aux = raiz;
    while (aux != nullptr) {
        aux = aux->getSig();
        cont++;
    }
    return cont;
}

int Lista::getCantidad() {
    return cuentaNodos();
}

InterfazIterator* Lista::createIterador() {
    return new ListIterator(raiz);
}

Nodo *Lista::getRaiz() {
    return raiz;
}

void Lista::insertarEnPosicion(Persona *elemento, int posicion) {
   insertarAlFinal(elemento);
}
