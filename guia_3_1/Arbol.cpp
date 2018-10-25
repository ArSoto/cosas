#include "Arbol.h"

using namespace std;


/* ################################
 * Metodos de la Clase Arbol
 * ################################*/
Arbol::Arbol() {}


/*metodo para insertar un nuevo nodo al arbol */
void Arbol::agregar(Nodo *&aux, int numero) {


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

            agregar(aux -> izq, numero);


        } else if(numero > aux ->numero){

            agregar(aux -> der, numero);

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

Nodo *& Arbol::getRaiz() {
    return raiz;
}

void Arbol::eliminar(Nodo *&tmp, int numero) {

    Nodo *aux = NULL; //aux
    Nodo *aux2 = NULL;  //ax1
    Nodo *otro = NULL;  //otro
    bool bol;

    if (tmp != NULL){       //1
        if (numero < tmp -> numero ){     //1.1
            eliminar(tmp -> der , numero);
                        
        } else if (numero > tmp -> numero){     //1.1.1

                eliminar(tmp -> der, numero);

        } else{
            otro =tmp;

            if (otro -> der == NULL){     //1.1.1.1
                    tmp = otro -> izq;


                } else if(otro -> izq == NULL) {  //1.1.1.1.1
                        tmp = otro->der;

                    } else {
                aux = tmp->izq;
                bol = false;
                while (aux->der != NULL) { //a
                    aux2 = aux;
                    aux = aux->der;
                    bol = true;
                }
                tmp->numero = aux->numero;
                otro = aux;

                if (bol) {
                    aux2 -> der = aux;
                } else {
                    tmp -> izq = aux -> izq;
                }
            }

        }
    } else{
        cout << "El numero a elimiminar no esta en el nodo" << endl;
    }

}

void Arbol::modificar(int original , int cambio) {

    if (buscar(raiz, original)){
        if (!buscar(raiz, cambio)){
            eliminar(raiz, original);
            agregar(raiz, cambio);

        } else{
            cout << "El numero a ingresar ya esta en el arbol" <<endl;
        }

    } else{
        cout << "El numero a cambiar no se encuentra en el arbol" << endl;
    }

}

bool Arbol::buscar(Nodo *&tmp, int numero) {

    if (tmp != NULL) {
        if (numero < tmp->numero) {
            buscar(tmp->izq, numero);

        } else if (numero > tmp->numero) {
            buscar(tmp->der, numero);

        } else {         // numero encontrado
            return true;
        }


    } else {             // Numero no encontrado

        return false;
    }
}

void Arbol::imprimirPosorden(Nodo *&arbol) {

    if (arbol != NULL){

        imprimirPosorden(arbol -> izq);
        imprimirPosorden(arbol -> der);
        cout << arbol ->numero << " " ;

    }

    cout << endl;

}

void Arbol::imprimirPreorden(Nodo *&arbol) {

    if (arbol != NULL){
        cout << arbol -> numero;

        imprimirPreorden(arbol -> izq);
        imprimirPreorden(arbol -> der);

    }

    cout<< endl;

}

void Arbol::imprimirInorden(Nodo *&arbol) {

    if (arbol != NULL){
        imprimirInorden(arbol -> izq);
        cout <<  arbol -> numero;
        imprimirInorden(arbol -> der);
    }

}
