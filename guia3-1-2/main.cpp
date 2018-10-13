#include <iostream>
#include "Lista.h"
using  namespace std;


/*##################################
 * Prototipo funciones
 * #################################*/


/* Funcion para agregar los valores iniciales a la lista*/
void llenar(Lista *);

/*##################################
 * FUncion Principal
 * #################################*/
int main() {

    /* crea los  objetos lista */
    Lista *lista_principal;
    lista_principal = new Lista;



    cout<< "Datos para la Lista Principal: "<<endl;
    llenar(lista_principal);


    cout<<"........................................................"<<endl;

    /* Imprimir las 3 listas */

    cout << "Lista Principal:"<< endl;
    lista_principal->imprimir();


}

/*############################################
 * funciones del main
 * ###########################################*/


/* Funcion para agregar los valores iniciales a la lista*/
void llenar(Lista *lista){

    string numero= " ";
    bool ciclo = true;
    string salir = "";

    while (salir != "n")
    {
        cout<< "Numero:" << endl;
        cin >> numero;

        lista->insertar(numero);
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


