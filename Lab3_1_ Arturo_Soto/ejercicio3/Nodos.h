#include <string>


using namespace std;

#ifndef NODOS_H
#define NODOS_H

/* Nodo para los ingredientes*/
typedef struct _Ingrediente{

    string nombre;
    struct _Ingrediente *sig;


}Nodo_Ingrediente;

/* Nodo para los postres*/
typedef struct _Postre {
    string nombre;
    struct _Postre *sigPostre;

} Nodo_Postre;

#endif