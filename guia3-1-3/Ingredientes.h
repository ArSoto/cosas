#include "Nodos.h"

using namespace std;

#ifndef INGREDIENTES_H
#define INGREDIENTES_H


class Ingredientes {
private:

    Nodo_Ingredientes *raiz = NULL;
    Nodo_Ingredientes *ultimo = NULL;




public:
    /* constructor*/
    Ingredientes();

    /* PROTOTIPO METODOS DE LA CLASE LISTAS*/

    /* imprime la lista. */
    void imprimir ();
    void insertar(string nombre);

    void agregar(string nombre);
    Nodo_Ingredientes *get_raiz();


};


#endif
