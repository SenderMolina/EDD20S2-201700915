#ifndef NODO_H
#define NODO_H

#include<iostream>
using namespace std;
class Nodo
{
public:
    Nodo(int dato);
    void setSiguiente(Nodo* siguiente);
    void setDato(int dato);
    void setAnterior(Nodo* anterior);

    Nodo* getSiguiente();
    Nodo* getAnterior();
    int getDato();
private:
    int dato;
    Nodo* siguiente;
    Nodo* anterior;

};

#endif // NODO_H
