#include <iostream>
#include "Arbol.h"
using  namespace std;

void menu(Arbol *);


int main() {
    int c=1;
    Arbol *arbol = new Arbol;

        menu(arbol);



}

void menu(Arbol  *arbol){
    int opcion = 0;
    int numero = 0;
    int numero2 = 0;

    while (opcion != 9)
    {
        cout << "       MENU    " << endl;
        cout << endl;
        cout << "[1] agregar Nodo al arbol" << endl;
        cout << "[2] Eliminar nodo " << endl;
        cout << "[3] Modificar dato" << endl;
        cout << "[4] Imprimir  " << endl;
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
                arbol ->modificar(numero, numero2);

            default:
                cout <<"Numero no valido" << endl;


        }

    }


}