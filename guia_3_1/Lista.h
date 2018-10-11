#include <iostream>
#include "Nodo.h"

#ifndef LISTAS_H
#define LISTAS_H


/* ##################################
 * Definicion de la Clase Listas
 * ###################################*/
class Lista {
private:
    Nodo *raiz = NULL;
    Nodo *ultimo = NULL;

public:
    /* constructor*/
    Lista();

    /* PROTOTIPO METODOS DE LA CLASE LISTAS*/

    /* imprime la lista. */
    void imprimir ();
    void insertar(int numero);

    void agregar(int numero);
    Nodo *get_raiz();


};


#endif