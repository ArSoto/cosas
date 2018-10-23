#include <iostream>
#include "Arbol.h"
using  namespace std;



int main() {
    int c=1;
    Arbol *arbol = new Arbol;

    while (c !=0){
        cin >> c;
        arbol -> agregar(arbol->getRaiz(), c);




}


}