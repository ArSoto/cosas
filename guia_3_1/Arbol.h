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
    Nodo *crearNodo(int);
public:
    /* constructor*/
    Arbol();

    void agregar(Nodo *&, int);

    void eliminar(Nodo *&, int);

    Nodo *& getRaiz();

    void modificar(int, int);

    bool buscar(Nodo *& , int);



};


#endif