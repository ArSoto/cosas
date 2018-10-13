#include "Nodos.h"
#include "Ingredientes.h"

#ifndef LISTA_H
#define LISTA_H


/* ##################################
 * Definicion de la Clase Listas
 * ###################################*/
class Postre {
private:
    Nodo_Ingredientes *raiz = NULL;
    Nodo_Ingredientes *ultimo = NULL;
    Ingredientes *ingredientes;



public:
    /* constructor*/
    Postre();

    /* PROTOTIPO METODOS DE LA CLASE LISTAS*/

    /* imprime la lista. */
    void imprimir ();
    void insertar(string nombre);

    void agregar(string nombre);
    Nodo_Ingredientes *get_raiz();


};




#endif
