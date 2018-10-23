#include "Arbol.h"

using namespace std;


/* ################################
 * Metodos de la Clase Arbol
 * ################################*/
Arbol::Arbol() {}


/*metodo para insertar un nuevo nodo al arbol */
void Arbol::agregar(Nodo *aux, int numero) {


    /* si es el primer nodo de la lista lo deja como primero */
    if (raiz == NULL) {
        raiz = crearNodo(numero);
        return;
    }

    if (aux == NULL){
        aux = crearNodo(numero);
    }
    else
    {

        if (numero  < aux -> numero)
        {

            agregar(aux->izq, numero);


        } else if(numero > aux ->numero){
            if (aux->der != NULL) {
                agregar(aux->der, numero);
            } else {
                aux->izq = crearNodo(numero);
            }
        }else
        {
            cout << "El numero ingresado ya estaba en la lista. " << endl;
        }


    }




}

Nodo *Arbol::crearNodo(int numero) {

    /* Crea el nuevo nodo y le asigna el valor */
    Nodo *aux = new Nodo;
    aux -> numero = numero;
    aux -> der = NULL;
    aux -> izq = NULL;
}

Nodo *Arbol::getRaiz() {
    return raiz;
}

