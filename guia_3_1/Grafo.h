#include "Nodo.h"
#include <iostream>
#include <fstream>
using  namespace std;

#ifndef GRAFO_H
#define GRAFO_H


class Grafo {
private:
    Nodo *arbol = NULL;

public:
    /* constructor*/
    Grafo(Nodo *arbol);

    /* Métodos de la clase Grafo */
    void crearGrafo();
    void recorrerArbol (Nodo *, ofstream &);

};


#endif
