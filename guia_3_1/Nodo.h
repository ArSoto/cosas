#ifndef NODO_H
#define NODO_H

/*####################################
 * Definicion de la estructura Nodo
 * ###################################*/



typedef struct _Nodo {
    int numero;
    struct _Nodo *izq;
    struct _Nodo *der;
} Nodo;

#endif 