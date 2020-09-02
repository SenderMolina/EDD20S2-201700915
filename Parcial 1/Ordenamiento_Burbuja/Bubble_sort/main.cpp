#include <iostream>
#include "nodo.h"
#include "lista.h"
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
    int dato;
    Lista *lista = new Lista();
    srand(time(NULL));
    cout<<"Datos sin ordernar:"<<endl;
    for(int i = 0; i <= 30; i++){
        dato = 1 + rand() % (101 - 1);
        lista->insertar(dato);
    }

    lista->imprimir();
    cout<<"\n";
    //ordenamiento
    cout<<"\n\nDatos ordenados"<<endl;;
    lista->ordenar();
    lista->imprimir();
    delete lista;



    return 0;
}
