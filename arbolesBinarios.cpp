// arbolesBinarios.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <stdlib.h>
using namespace std;
#include "ABB.h"
#include "dosABB.h"


//SUB-MENUS
void agregarDato(ABB *& A) {
    cout << "Agregando un nuevo dato al arbol "<< endl;
    cout << "Digite el valor ";
    int dato;
    cin >> dato;
    if (A->agregar(dato))
        cout << "Se ha agregado exitosamente el valor " << dato << " al arbol." << endl;
    else
        cout << dato << " ya existe en el arbol." << endl;
}

void removerDato(ABB*& A) {
    cout << "Eliminar un dato del arbol " << endl;
    cout << "Digite el valor a eliminar: ";
    int dato;
    cin >> dato;
    if (A->remover(dato))
        cout << "Se ha eliminado exitosamente el valor " << dato << " del arbol." << endl;
    else
        cout << dato << " no existe en el arbol." << endl;
}

void VerNivel(ABB* A) {
    
};

//MENU ARBOLES AVL
void menuAVL() {
    int opc = 0;
    ABB* A = new ABB();
    ABB* B = new ABB();

    do {
        system("cls");
        cout << "--------------OPERACIONES ARBOLES AVL--------------\n";
        cout << "___________________ARBOLES______________________\n";
        cout << "(1) OPERACIONES ARBOLES BINARIOS DE BUSQUEDAS \n";
        cout << "(0) Salir del menu \n";
        cout << endl;
        cout << "Ingrese su opcion->";
        cin >> opc;
        switch (opc) {
        case 1: {
            cout << "Opciones ABB Y DosABB..." << endl;
            break;
        }
        case 2: {
            break;
        }
        case 3: {
            break;
        }
        case 4: {
            break;
        }
        }
        system("pause");

    } while (opc != 0);
}

//MENU DOS ARBOLES 
void menuDosABB() {
    int opc = 0;
    ABB* A = new ABB();
    ABB* B = new ABB();
    do {
        system("cls");
        cout << "----------------OPERACIONES 2 ARBOLES-----------------\n";
        cout << "______________________________________________________ \n";
        cout << "(1) Comparar arboles identicos \n";
        cout << "(2) Comparar arboles espejo \n";
        cout << "(3) Crear copia arbol A \n";
        cout << "(4) Crear copia espejo arbol A \n";
        cout << "(0) Salir del menu \n";
        cout << endl;
        cout << "Ingrese su opcion->";
        cin >> opc;
        switch (opc) {
        case 1: {
            
            A->enorden();
            break;
        }
        case 2: {

            A->enorden();
            break;
        }
        case 3: {

            A->enorden();
            break;
        }
        case 4: {

            A->enorden();
            break;
        }
      }
        system("pause");
    } while (opc != 0);
}

//MENU TAREA 1
void menuTarea1() {
    int opc = 0;
    ABB* A = new ABB();
    do {
        system("cls");
        cout << "______________________________________________________ \n";
        cout << "-------------OPERACIONES DE TAREA 1------------------- \n";
        cout << "(1) Sumar todos los valores de los nodos \n";
        cout << "(2) El arbol, es un arbol lleno? \n";
        cout << "(3) El arbol, es un arbol Completo? \n";
        cout << "(4) Visualizar todos los nodos de un nivel \n";
        cout << "(5) Podar Arbol \n";
        cout << "(6) Crear Arbol (Este Crea el arbol de la tarea) \n";
        cout << "(0) Salir del menu \n";
        cout << endl;
        cout << "Ingrese su opcion->";
        cin >> opc;
        switch (opc) {
        case 1: {
            cout << "Suma de valores..." << endl;
            cout << "La suma de los valores es: " << A->sumatoria() << endl;
            break;
        }
        case 2: {
            if (A->ArbLleno()) {
                cout << "VERDADERO" << endl;
            }
            else {
                cout << "FALSO" << endl;
            }
            break;
        }
        case 3: {
            if (A->ArbLleno()) {
                cout << "VERDADERO" << endl;
            }
            else {
                cout << "FALSO" << endl;
            }
            break;
        }
        case 4: {
            cout << "Ver los datos del nivel del arbol " << endl;
            cout << "Digite el nivel: ";
            int nivel;
            cin >> nivel;
            cout << "Los valores del nivel " << nivel << " del arbol son:" << endl;
            A->VerNivelNodos(nivel);
            break;
        }
        case 5: {
            cout << "Podar arbol..." << endl;
            A->PodarArbol();
            A->enorden();
            break;
        }
        case 6: {
            cout << "Arbol Creado..." << endl;
            A->agregar(15);
            A->agregar(6);
            A->agregar(3);
            A->agregar(9);
            A->agregar(1);
            A->agregar(4);
            A->agregar(7);
            A->agregar(12);
            A->agregar(20);
            A->agregar(18);
            A->agregar(17);
            A->agregar(24);
            break;
           }
        }
        system("pause");
    } while (opc != 0);
}

//MENU PRINCIPAL
void menu() {
    int opc = 0;
    ABB* A = new ABB();
    do {
        system("cls");
        cout << "OPERACIONES ARBOLES BINARIOS DE BUSQUEDA!\n";
        cout << "______________________________________________________ \n";
        cout << "(1) Agregar dato al arbol \n";
        cout << "(2) Remover dato del arbol \n";
        cout << "(3) Recorrido en preorden \n";
        cout << "(4) Recorrido en orden \n";
        cout << "(5) Recorrido en postOrden \n";
        cout << "(6) Desplegar las hojas del arbol \n";
        cout << "(7) Desplegar los nodos intermedios del arbol \n";
        cout << "(8) Desplegar los nodos pares del arbol \n";
        cout << "(9) Desplegar en orden descendente \n";
        cout << "(10) Cardinalidad del arbol \n";
        cout << "(11) Cantidad de nodos hojas que tiene el arbol \n";
        cout << "(12) Todos los nodos son pares? \n";
        cout << "(13) Grado del Nodo \n";
        cout << "(14) Todos los nodos son numeros entre 1 y 99? \n";
        cout << "(15) Buscar el menor de los nodos \n";
        cout << "(16) Buscar el mayor de los nodos \n";
        cout << "(17) Ver la altura del arbol \n";
        cout << "(18) Cantidad de nodos internos \n";
        cout << "(19) Suma de hojas pares \n";
        cout << "______________________________________________________ \n";
        cout << "(98) Menu Tarea 1 \n";
        cout << "(99) Menu para dos o mas arboles \n";
        cout << "(0) Salir del menu \n";
        cout << endl;
        cout << "Ingrese su opcion->";
        cin >> opc;

        switch (opc) {
        case 1: {
            agregarDato(A);
            A->enorden();
            break;
        }
        case 2: {
            removerDato(A);
            A->enorden();
            break;
        }
        case 3: {
            cout << "Recorrido en preorden..." << endl;
            A->preorden();
            break;
        }
        case 4: {
            cout << "Recorrido en orden..." << endl;
            A->enorden();
            break;
        }
        case 5: {
            cout << "Recorrido en postorden..." << endl;
            A->postorden();
            break;
        }
        case 6: {
            cout << "Hojas del arbol..." << endl;
            A->desplegarHojas();
            break;
        }
        case 7: {
            cout << "Nodos intermedios..." << endl;
            A->desplegarIntermedios();
            break;
        }
        case 8: {
            cout << "Nodos Pares..." << endl;
            A->desplegarPares();
            break;
        }
        case 9: {
            cout << "Orden Descendente..." << endl;
            A->descendente();
            break;
        }
        case 10: {
            cout << "Cardinalidad..." << endl;
            A->Cardinalidad();
            break;
        }
        case 11: {
            cout << "Cantidad nodos hojas..." << endl;
            cout << "Cantidad de hojas es:" << A->CantidadHojas();
            break;
        }
        case 12: {
            if (A->esDePares()) {
                cout << "Todos los nodos son pares" << endl;
            }
            else {
                cout << "No todos los nodos son pares" << endl;
            }
            break;
        }
        case 13: {
            cout << "Grado Nodo..." << endl;
            cout << "El grado del Nodo es: " << A->gradoNodo();
            break;
        }
        case 14: {
            if (A->NodosEntre1y99()) {
                cout << "Todos los nodos van entre 1 y 99." << endl;
            }
            else {
                cout << "No todos los nodos van entre 1 y 99." << endl;
            }
            break;
        }
        case 15: {
            cout << "Menor Nodo..." << endl;
            cout << "El menor de los nodos es:" << A->buscarMenor();
            break;
        }
        case 16: {
            cout << "Mayor Nodo..." << endl;
            cout << "El mayor de los nodos es:" << A->buscarMayor();
            break;
        }
        case 17: {
            cout << "Altura del arbol..." << endl;
            cout << "La altura del arbol es:" << A->altura();
            break;
        }
        case 18: {
            cout << "Cantidad Nodos internos..." << endl;
            cout << "Cantidad de Nodos internos es:" << A->CantidadNodosInternos();
            break;
        }
        case 19: {
            cout << "Suma hojas pares..." << endl;
            cout << "La suma es:" << A->SumaHojasPares();
            break;
        } 
        //QUIZ-01
        case 20: {
            cout << "Suma hojas pares..." << endl;
            cout << "La suma es:" << A->SumaHojasPares();
            break;
        }
        case 21: {
            cout << "Orden inverso es..." << endl;
            A->OrdenInverso();
            break;
        }
        case 97: {
            cout << "Orden inverso es..." << endl;
            A->OrdenInverso();
            break;
        }
        case 98: {
           cout << "Opciones Tarea 1..." << endl;
           menuTarea1();
           break;
               }
        case 99: {
            cout << "Opciones DosABB..." << endl;
            menuDosABB();
            break;
        }
        }
        system("pause");
    } while (opc != 0);
}


int main()
{
    menu();
}
