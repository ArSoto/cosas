#include "Lista.h"

using namespace std;


/* ################################
 * Metodos de la Clase Lista
 * ################################*/
Lista::Lista() {}

void Lista::imprimir () {
    /* utiliza variable temporal para recorrer la lista. */
    Nodo *tmp = this->raiz;

    /* la recorre mientras sea distinto de NULL (no hay más nodos). */
    while (tmp != NULL) {
        cout << "   " << tmp->numero ;
        tmp = tmp->sig;
    }
    cout << endl << endl;
}

/* Metodo para insertar un nuevo nodo a la lista en orden creciente */
void Lista::insertar(int numero)
{

    /*variables temporal para recorrer la lista. */
    Nodo *tmp = this->raiz;
    Nodo *tmp2= tmp;

    /* Crea el nuevo nodo y le asigna el valor */
    Nodo *aux = new Nodo;
    aux -> numero = numero;
    aux->sig = NULL;

    /* si es el primer nodo de la lista lo deja como primero y ultimo*/
    if (this->raiz == NULL) {
        this->raiz = aux;
        this->ultimo = this->raiz;

        return;
    }

    /* si el valor del nodo es menor al valor de la raiz */
    if (this ->raiz->numero > aux->numero){

        aux->sig =this ->raiz;
        this -> raiz =aux;

        return;

    }


    /* Si el valor del nodo es superior al ultimo nodo  */
    if (this -> ultimo -> numero < aux->numero){

        this -> ultimo -> sig = aux;
        this -> ultimo = aux;
        return;

    }

    /* si el valor esta dentro del rango del menor y del mayor de los nodos
     * comenzara a buscar un numero mayor a el valor del nuevo nodo*/
    while ( tmp->numero < aux-> numero ){


        tmp2 =tmp;          //mantiene el valor del nodo anterior
        tmp = tmp->sig;

    }

    /* Si el numero de ingresado ya existe en la lista */
    if (tmp->numero == aux ->numero)
    {
        return;
    }

    /* Inserta el nodo entre los valores del nodo tmp2 y tmp*/
    aux->sig = tmp;
    tmp2->sig = aux;

}

/*metodo para insertar un nuevo nodo a la lista */
void Lista::agregar(int numero) {


    /* Crea el nuevo nodo y le asigna el valor */
    Nodo *aux = new Nodo;
    aux->numero = numero;
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

/*Metodo retorna la pocicion inical del nodo*/
Nodo * Lista::get_raiz(){
    return this-> raiz;

}