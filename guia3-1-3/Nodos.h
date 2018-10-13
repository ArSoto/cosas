#include <string>

using namespace std;

#ifndef NODOS_H
#define NODOS_H

typedef struct _Ingrediente{

    string nombre;
    struct _Ingrediente *sig;

}Ingrediente;

typedef struct _Nodo {
    string nombre;
    struct _Nodo *sigNodo;
    struct _Ingredientes *sigIngre;
} Nodo;

#endif