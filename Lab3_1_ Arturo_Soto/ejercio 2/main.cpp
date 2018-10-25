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



    cout<< "Nombres Para la lista principal: "<<endl;
    llenar(lista_principal);


    cout<<"........................................................"<<endl;

    /* Imprimir la lista */

    cout << "Lista Principal:"<< endl;
    lista_principal->imprimir();


}

/*############################################
 * funciones del main
 * ###########################################*/


/* Funcion para agregar los valores iniciales a la lista*/
void llenar(Lista *lista){

    string nombre= " ";
    bool ciclo = true;
    string salir = "";

    while (salir != "n")
    {
        cout<< "Nombre:" << endl;
        cin >> nombre;

        lista->insertar(nombre);
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


