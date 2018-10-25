#include <iostream>

/* include de la clase Postre */
#include "Postre.h"


using namespace std;


/* ######################################
 *  DECLARACION DE FUNCIONES */

void menupostres(Postre *);
void menuingredientes(Ingredientes *);

/* ######################################
 *         FUNCION PRINCIPAL  */

int main()
{
    /* ceacion del objeto postre*/
    Postre *postres;
    postres = new Postre;

    /* Funcion para administrar los postres  */
     menupostres(postres);

}

/*######################################
 *      DEFINICION DE LAS FUNCIONES */

/* funcion de que imprime munu para administrar los postres*/

void menupostres(Postre *postres){

    /* variable para el recibir el valor del menu elejido por el usuario*/
    int menu;

    /**/
    Nodo_Postre *tmp;
    Ingredientes *ingredientes;
    string nombre;
    int ciclo = 0;




    while (ciclo == 0) {

        cout << "##############################" << endl;
        cout << "#     MENU  POSTRES          #" << endl;
        cout << "#                            #" << endl;
        cout << "#                            #" << endl;
        cout << "#  [1] Listar postres        #" << endl;
        cout << "#  [2] Ingresar postre       #" << endl;
        cout << "#  [3] Eliminar postre       #" << endl;
        cout << "#  [4] Modificar postre      #" << endl;
        cout << "#  [5] Salir del menu        #" << endl;
        cout << "#                            #" << endl;
        cout << "##############################" << endl;
        cout << endl;


        cin >> menu;

        switch (menu) {
            case 1:
                postres->imprimir();
                break;

            case 2:

                cout << " Nombre de postre a ingresar" << endl;
                cin >> nombre;
                postres->insertar(nombre);
                break;

            case 3:
                cout << " Nombre de postre a Eliminar" << endl;
                cin >> nombre;
                postres->eliminar(nombre);
                break;

            case 4:
                cout << "Nombre del postre a modificar" << endl;
                cin >> nombre;

                ingredientes = postres->buscar(nombre);

                menuingredientes(ingredientes);
                break;

            case 5 :
                ciclo = 1;
                break;

            default:
                cout << "Ingresado no valido " << endl;
                break;


        }
    }


}

/* funcion menu de los ingredientes */

void menuingredientes(Ingredientes *ingredientes){
    int numero = 0;
    int band =0;
    string nombre;


    while (band == 0)
    {
        cout <<"##############################" << endl;
        cout <<"#     MENU  INGREDIENTES     #" << endl;
        cout <<"#                            #" << endl;
        cout <<"#                            #" << endl;
        cout <<"#  [1] Listar ingredientes   #" << endl;
        cout <<"#  [2] Ingresar ingrediente  #" << endl;
        cout <<"#  [3] Eliminar ingrediente  #" << endl;
        cout <<"#  [3] Salir del menu        #" << endl;
        cout <<"#                            #" << endl;
        cout <<"##############################" << endl;
        cout << endl;

        cin >> numero;

        switch (numero) {
            case 1:
                ingredientes->imprimir();
                break;

            case 2:
                cout << "Nombre del ingrediente a agregar " << endl;
                cin >> nombre;
                ingredientes->agregar(nombre);
                break;

            case 3:
                cout << "Nombre del ingrediente a eliminar" << endl;
                cin >> nombre;
                ingredientes->eliminar(nombre);
                break;

            case 4 :
                band =1;
                break;

            default:
                cout<<"Numero ingresado no valido "<< endl;
                break;

        }





    }





}