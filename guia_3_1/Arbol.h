#include <iostream>
#include "Nodo.h"

#ifndef LISTAS_H
#define LISTAS_H


/* ##################################
 * Definicion de la Clase Listas
 * ###################################*/
class Arbol {
private:
    Nodo *raiz = NULL;

public:
    /* constructor*/
    Arbol();

    void agregar(Nodo *, int);

    Nodo *crearNodo(int);

    Nodo *getRaiz();

};


#endif