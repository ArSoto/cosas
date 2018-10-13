#include <string>


using namespace std;

#ifndef NODOS_H
#define NODOS_H

typedef struct _Ingrediente{

    string nombre;
    struct _Ingrediente *sig;


}Nodo_Ingrediente;

typedef struct _Postre {
    string nombre;
    struct _Postre *sigPostre;
    struct _Ingredientes *sigIngre;
} Nodo_Ingredientes;

#endif