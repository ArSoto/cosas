#include "Nodos.h"

using namespace std;

#ifndef INGREDIENTES_H
#define INGREDIENTES_H


class Ingredientes {
private:

    Nodo_Ingrediente *raiz = NULL;
    Nodo_Ingrediente *ultimo = NULL;




public:
    /* constructor*/
    Ingredientes();

    /* PROTOTIPO METODOS DE LA CLASE LISTAS*/

    /* imprime la lista. */
    void imprimir ();

    /* Agrega nodos a la lista*/
    void agregar(string nombre);

    /*Elimina nodos de la lista */
    void eliminar(string nombre);



};


#endif
