#ifndef NODO_H
#define NODO_H

/*####################################
 * Definicion de la estructura Nodo
 * ###################################*/



typedef struct _Nodo {
    int numero;
    struct _Nodo *sig;
} Nodo;

#endif 