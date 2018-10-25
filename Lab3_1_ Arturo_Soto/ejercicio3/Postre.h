#include "Nodos.h"
#include "Ingredientes.h"

#ifndef LISTA_H
#define LISTA_H


/* ##################################
 * Definicion de la Clase Listas
 * ###################################*/
class Postre {
private:
    Nodo_Postre *raiz = NULL;
    Nodo_Postre *ultimo = NULL;
    Ingredientes *ingredientes;




public:
    /* constructor*/
    Postre();

    /* PROTOTIPO METODOS DE LA CLASE LISTAS*/

    /* imprime la lista. */
    void imprimir ();
    /* Inserta nodo ordenado alfabeticamente*/
    void insertar(string nombre);

    /* elimina un nodo por seleccionado por el nombre*/
    void eliminar(string nombre);

    /* busca el nombre del postre en la lista y retorna los ingredientes de este*/
    Ingredientes *buscar(string nombre);



};




#endif
