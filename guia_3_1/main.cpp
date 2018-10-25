#include <iostream>
#include "Arbol.h"
#include "Grafo.h"
using  namespace std;

void menu(Arbol *, Grafo *);


int main() {
    Arbol *arbol ;
    arbol = new Arbol;

    Grafo *grafo;
    grafo = new Grafo(arbol-> getRaiz());

        menu(arbol, grafo);

}

void menu(Arbol  *arbol, Grafo *grafo){
    int opcion = 0;
    int numero = 0;
    int numero2 = 0;

    while (opcion != 9)
    {
        cout << "       MENU    " << endl;
        cout << endl;
        cout << "[1] Agregar Nodo al arbol" << endl;
        cout << "[2] Eliminar nodo " << endl;
        cout << "[3] Modificar dato" << endl;
        cout << "[4] Imprimir  " << endl;
        cout << "[5] Generar grafico" << endl;
        cout << "[9] Salir" << endl;

        cin >> opcion;


        switch (opcion)
        {
            case 1:
                cout << "Numero a agregar; " << endl;
                cin >> numero;
                arbol ->agregar(arbol->getRaiz(), numero);
                break;


            case 2:
                cout << "Numero a eliminar"<< endl;
                cin >> numero;
                arbol->eliminar(arbol->getRaiz(), numero);
                break;

            case 3:
                cout << "Numero que desea modificar "<< endl;
                cin >> numero;
                cout << "Numero de remplazo" << endl;
                cin >> numero2;
                arbol -> modificar(numero, numero2);
                break;

            case 4:
                cout << "Como desea imprimir el arbol"<< endl;
                cout << " [1] Inorden \n [2] Posorden \n [3] Preorden" << endl;
                cin >> numero2;

                switch (numero2){

                    case 1:
                        arbol -> imprimirInorden( arbol -> getRaiz());
                        cout << endl;
                        break;

                    case 2:
                        arbol -> imprimirPosorden( arbol -> getRaiz());
                        cout << endl;
                        break;

                    case 3:
                        arbol-> imprimirPreorden( arbol -> getRaiz());
                        cout << endl;
                        break;
                    default:
                        cout << "La opcion ingresada no es valida " << endl;
                        break;
                }
                break;

            case 5:
                grafo = new Grafo(arbol->getRaiz());
                grafo -> crearGrafo();


            case 9:
                continue;

            default:
                cout <<"Numero no valido" << endl;


        }

    }


}