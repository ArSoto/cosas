#include "Grafo.h"

/* Constructor de la Clase Grafo */
Grafo::Grafo(Nodo *raiz) {
    this->arbol = raiz;
}

/* ofstream es el tipo de dato correspondiente a archivos en cpp (el llamado es ofstream &nombre_archivo). */
void Grafo::recorrerArbol(Nodo *p, ofstream &archivo) {
    string aux ;

    string infoTmp;
    /* Se enlazan los nodos del grafo, para diferencia entre izq y der a cada nodo se le entrega un identificador al final, siendo i: izquierda
     * y d: derecha, esto se cumplirá para los casos en donde los nodos no apunten a ningún otro (nodos finales)
     * */
    if (p != NULL) {
        /* Por cada nodo ya sea por izq o der se escribe dentro de la instancia del archivo */
        if (p->izq != NULL) {
            archivo<< p->numero << "->" << p->izq->numero << ";" << endl;
        } else {
            infoTmp = p->numero;
            infoTmp += "i";
            archivo << infoTmp << "[shape=point]" << endl;
            archivo << p->numero << "->" << infoTmp << ";" << endl;
        }

        infoTmp = p->numero;
        if (p->der != NULL) {
            archivo << p->numero << "->" << p->der->numero << ";" << endl;
        } else {
            infoTmp = p->numero;
            infoTmp += "d";
            archivo << infoTmp << "[shape=point]" << endl;
            archivo << p->numero << "->" << infoTmp << ";" << endl;
        }

        /* Se realizan los llamados tanto por la izquierda como por la derecha para la creación del grafo */
        recorrerArbol(p->izq, archivo);
        recorrerArbol(p->der, archivo);
    }
    return;
}

void Grafo::crearGrafo() {
    ofstream archivo;
    /* Se abre/crea el archivo datos.txt, a partir de este se generará el grafo */
    archivo.open("datos.txt");
    /* Se escribe dentro del archivo datos.txt "digraph G { " */
    archivo << "digraph G {" << endl;
    /* Se pueden cambiar los colores que representarán a los nodos, para el ejemplo el color será verde */
    archivo << "node [style=filled fillcolor=green];" << endl;
    /* Llamado a la función recursiva que genera el archivo de texto para creación del grafo */
    recorrerArbol(this->arbol, archivo);
    /* Se termina de escribir dentro del archivo datos.txt*/
    archivo << "}" << endl;
    archivo.close();

    /* genera el grafo */
    system("dot -Tpng -ografo.png datos.txt &");
}
