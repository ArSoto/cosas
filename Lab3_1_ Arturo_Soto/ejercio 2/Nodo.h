//
using  namespace std;
#ifndef NODO_H
#define NODO_H

/*####################################
 * Definicion de la estructura Nodo
 * ###################################*/



typedef struct _Nodo {
    string nombre;
    struct _Nodo *sig;
} Nodo;

#endif