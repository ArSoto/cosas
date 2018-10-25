#include <iostream>
#include "Ingredientes.h"
#include "Nodos.h"

/*Constructor*/
Ingredientes::Ingredientes() {};

/*Imprime los nodos de la lista*/
void Ingredientes ::imprimir () {
    /* utiliza variable temporal para recorrer la lista. */
    Nodo_Ingrediente *tmp = this->raiz;

    /* la recorre mientras sea distinto de NULL (no hay más nodos). */
    while (tmp != NULL) {
        cout << tmp->nombre << endl ;
        tmp = tmp -> sig;
    }
    cout << endl << endl;
}


/* metoso que ingresa nodos a la lista*/
void Ingredientes::agregar(string nombre) {


    /* Crea el nuevo nodo y le asigna el valor */
    Nodo_Ingrediente *aux = new Nodo_Ingrediente;
    aux->nombre = nombre;
    aux->sig = NULL;

    /* si es el primer nodo de la lista lo deja como primero y ultimo*/
    if (this->raiz == NULL) {
        this->raiz = aux;
        this->ultimo = this->raiz;

        return;
    }

    this->ultimo->sig = aux;
    this->ultimo = aux;

}

/* metodo que elimina un nodo de la lista */
void Ingredientes ::eliminar(string nombre) {

    int band = 1;


    Nodo_Ingrediente *tmp1;
    tmp1 = this->raiz;

    Nodo_Ingrediente *tmp2;

    while (tmp1->nombre != nombre && band == 1) {
        if (tmp1->sig != NULL) {

            tmp2 = tmp1;
            tmp1 = tmp1->sig;

        } else {
            band = 0;
        }


    }

    if (band == 0) {
        cout << "El ingrediente que desea eliminar no existe en el listado " << endl;


    } else if (tmp1 == this->raiz) {

        this->raiz = tmp1->sig;

    } else {

        tmp2->sig = tmp1->sig;
    }
}