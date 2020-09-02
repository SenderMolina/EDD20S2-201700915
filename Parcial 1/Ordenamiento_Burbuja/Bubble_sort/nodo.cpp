#include "nodo.h"

Nodo::Nodo(int dato)
{
    this->dato = dato;
    siguiente = NULL;

}

void Nodo::setSiguiente(Nodo *siguiente){
    this->siguiente = siguiente;
}
void Nodo::setAnterior(Nodo *anterior){
    this->anterior = anterior;
}
void Nodo::setDato(int dato){
    this->dato = dato;
}


Nodo* Nodo::getSiguiente(){
    return this->siguiente;
}
Nodo* Nodo::getAnterior(){
    return this->anterior;
}
int Nodo::getDato(){
    return dato;
}
