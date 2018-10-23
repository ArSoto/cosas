#include <iostream>
#include "Postre.h"


/* ################################
 * Metodos de la Clase Lista
 * ################################*/

Postre::Postre(){
    ingredientes = new Ingredientes;
};

void Postre::imprimir () {
    /* utiliza variable temporal para recorrer la lista. */
    Nodo_Postre *tmp = this->raiz;

    /* la recorre mientras sea distinto de NULL (no hay más nodos). */
    while (tmp != NULL) {
        cout << tmp->nombre << endl ;
        tmp = tmp -> sigPostre;
    }
    cout << endl << endl;
}

/* Metodo para insertar un nuevo nodo a Nodo_Ingredientesla lista en orden creciente */
void Postre::insertar(string nombre)
{

    /*variables temporal para recorrer la lista. */
    Nodo_Postre *tmp = this->raiz;
    Nodo_Postre *tmp2= tmp;

    /* Crea el nuevo nodo y le asigna el valor */
    Nodo_Postre *aux = new Nodo_Postre;
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


/* metodo que elimina un nodo de la lista */
void Postre::eliminar(string nombre) {

    int band = 1;


    Nodo_Postre *tmp1;
    tmp1 = this->raiz;

    Nodo_Postre *tmp2;

    while (tmp1->nombre != nombre && band == 1) {
        if (tmp1->sigPostre != NULL) {

            tmp2 = tmp1;
            tmp1 = tmp1->sigPostre;

        } else {
            band = 0;
        }


    }

    if (band == 0) {
        cout << "El ingrediente que desea eliminar no existe en el listado " << endl;


    } else if (tmp1 == this->raiz) {

        this->raiz = tmp1->sigPostre;

    } else {

        tmp2->sigPostre = tmp1->sigPostre;
    }
}



Ingredientes *Postre::buscar(string nombre) {

    int band = 1;

    Nodo_Postre *tmp;
    tmp =  this ->raiz;

    /* Recorre la lista hasta que encuentra el valor o se llego al final de la lista */
    while (tmp ->nombre !=  nombre && band == 1 )
    {
        if (tmp -> sigPostre != NULL){

            tmp = tmp -> sigPostre;
        } else{
            band = 0;

        }
    }


    return this ->ingredientes;


}



