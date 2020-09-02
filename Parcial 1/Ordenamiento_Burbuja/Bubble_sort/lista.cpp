#include "lista.h"

Lista::Lista()
{
    this->primero = NULL;
    this->ultimo = NULL;
}
Lista::~Lista(){
    Nodo *aux = this->primero;
    while(primero != NULL){
      aux = primero->getSiguiente();
      delete primero;
      primero = aux;
    }
}
void Lista::setPrimero(Nodo *primero){
    this->primero = primero;
}
void Lista::setUltimo(Nodo *ultimo){
    this->ultimo = ultimo;
}

Nodo* Lista::getPrimero(){
    return this->primero;
}
Nodo* Lista::getUltimo(){
    return this->ultimo;
}

void Lista::insertar(int dato){
    Nodo *nuevo = new Nodo(dato);
    if(primero == NULL){
        primero = nuevo;
        ultimo  = nuevo;
    }else{
        ultimo->setSiguiente(nuevo);
        nuevo ->setAnterior(ultimo);
        ultimo = nuevo;
    }
}

void Lista::imprimir(){
    Nodo *aux = this->primero;

    while(aux != NULL){
        cout<<aux->getDato()<<endl;
        aux = aux->getSiguiente();
    }
}

void Lista::ordenar(){
    Nodo *aux = this->primero;
    Nodo *tmp;
    int datoAux;
    while(aux->getSiguiente() != NULL){

        tmp = aux->getSiguiente();
        while(tmp != NULL){
            if(aux->getDato() > tmp->getDato()){
                datoAux = tmp->getDato();
                tmp->setDato(aux->getDato());
                aux->setDato(datoAux);
            }
            tmp = tmp->getSiguiente();
        }
     aux = aux->getSiguiente();
    }
}

