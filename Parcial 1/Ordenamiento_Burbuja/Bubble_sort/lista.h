#ifndef LISTA_H
#define LISTA_H
#include<iostream>
#include "nodo.h"
using namespace std;
class Lista
{
public:
    Lista();
    ~Lista();
    void setPrimero(Nodo* primero);
    void setUltimo(Nodo* ultimo);

    Nodo* getPrimero();
    Nodo* getUltimo();

    void insertar(int dato);
    void imprimir();
    void ordenar();
private:
    Nodo* primero;
    Nodo* ultimo;
};

#endif // LISTA_H
