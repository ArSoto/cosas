#include <iostream>
#include "Postre.h"





/* ################################
 * Metodos de la Clase Lista
 * ################################*/
Postre::Postre() {}

void Postre::imprimir () {
    /* utiliza variable temporal para recorrer la lista. */
    Nodo_Ingredientes *tmp = this->raiz;

    /* la recorre mientras sea distinto de NULL (no hay más nodos). */
    while (tmp != NULL) {
        cout << " <-  " << tmp->nombre ;
        tmp = tmp -> sigPostre;
    }
    cout << endl << endl;
}

/* Metodo para insertar un nuevo nodo a la lista en orden creciente */
void Postre::insertar(string nombre)
{

    /*variables temporal para recorrer la lista. */
    Nodo_Ingredientes *tmp = this->raiz;
    Nodo_Ingredientes *tmp2= tmp;

    /* Crea el nuevo nodo y le asigna el valor */
    Nodo_Ingredientes *aux = new Nodo_Ingredientes;
    aux -> nombre = nombre;
    aux->sigPostre = NULL;




    /* si es el primer nodo de la lista lo deja como primero y ultimo*/
    if (this->raiz == NULL) {
        this->raiz = aux;
        this->ultimo = this->raiz;

        return;
    }

    /* si el valor del nodo es menor al valor de la raiz */
    if (this ->raiz->nombre > aux->nombre){

        aux->sigPostre =this ->raiz;
        this -> raiz =aux;

        return;

    }


    /* Si el valor del nodo es superior al ultimo nodo  */
    if (this -> ultimo -> nombre < aux->nombre){

        this -> ultimo -> sigPostre = aux;
        this -> ultimo = aux;
        return;

    }

    /* si el valor esta dentro del rango del menor y del mayor de los nodos
     * comenzara a buscar un numero mayor a el valor del nuevo nodo*/
    while ( tmp->nombre < aux-> nombre ){


        tmp2 =tmp;          //mantiene el valor del nodo anterior
        tmp = tmp->sigPostre;

    }

    /* Si el numero de ingresado ya existe en la lista */
    if (tmp->nombre == aux ->nombre)
    {
        return;
    }

    /* Inserta el nodo entre los valores del nodo tmp2 y tmp*/
    aux->sigPostre = tmp;
    tmp2->sigPostre = aux;

}

/*metodo para insertar un nuevo nodo a la lista */
void Postre::agregar(string nombre) {


    /* Crea el nuevo nodo y le asigna el valor */
    Nodo_Ingredientes *aux = new Nodo_Ingredientes;
    aux->nombre = nombre;
    aux->sigPostre = NULL;

    /* si es el primer nodo de la lista lo deja como primero y ultimo*/
    if (this->raiz == NULL) {
        this->raiz = aux;
        this->ultimo = this->raiz;

        return;
    }

    this->ultimo->sigPostre = aux;
    this->ultimo = aux;

}

/*Metodo retorna la pocicion inical del nodo*/
Nodo_Ingredientes * Postre::get_raiz(){
    return this-> raiz;

}