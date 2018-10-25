#include <iostream>
#include "Lista.h"
using  namespace std;


/*##################################
 * Prototipo funciones
 * #################################*/


/* Funcion para agregar los valores iniciales a la lista*/
void llenar(Lista *);

/* Funcion que separa los datos  entre positivos y negativos */

void separar(Lista *, Lista *, Lista*);



/*##################################
 * FUncion Principal
 * #################################3*/
int main() {

    /* crea los  objetos lista */
    Lista *lista_principal;
    lista_principal = new Lista;

    Lista *lista_negativos;
    lista_negativos = new Lista;

    Lista *lista_positivos;
    lista_positivos = new Lista;


    cout<< "Datos para la Lista Principal: "<<endl;
    llenar(lista_principal);

    separar(lista_principal, lista_negativos, lista_positivos);



    cout<<"........................................................"<<endl;

    /* Imprimir las 3 listas */

    cout << "Lista Principal:"<< endl;
    lista_principal->imprimir();

    cout << "Lista de N° Negativos" << endl;
    lista_negativos->imprimir();


    cout << "Lista de N° Positivos" << endl;
    lista_positivos->imprimir();

}

/*############################################
 * funciones del main
 * ###########################################*/


/* Funcion para agregar los valores iniciales a la lista*/
void llenar(Lista *lista){

    int numero= 0;
    bool ciclo = true;
    string salir = "";

    while (salir != "n")
    {
        cout<< "Numero:" << endl;
        cin >> numero;

        lista->agregar(numero);
        lista->imprimir();
        cin.ignore();

        while (ciclo) {


            cout << "¿ Deasea continuar agregando valores ? \n [s] si  \n [n] no" << endl;
            cin >> salir;

            if (salir == "s"  || salir == "n"){
                ciclo = false;
            }

        }
        ciclo= true;
        cout << endl <<"....................................................." << endl;
    }



}

void separar(Lista *lista, Lista *negativos, Lista *positivos)
{
    Nodo *tmp;

    tmp= lista->get_raiz();

    while (tmp != NULL){

        if (tmp->numero < 0 )
        {
            negativos->insertar(tmp->numero);
        } else{
            positivos->insertar(tmp->numero);
        }

        tmp=tmp->sig;


    }



}
