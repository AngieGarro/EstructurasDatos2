#include "ABB.h"
#include "dosABB.h"

ABB::ABB()
{
	this->raiz = NULL;
}

ABB::~ABB()
{
}

nodoA*& ABB::getRaiz()
{
	return this->raiz;
}

void ABB::setRaiz(nodoA* _ptr)
{
	this->raiz = _ptr;
}


bool ABB::esVacio()
{
	return this->raiz == NULL;
}

bool ABB::agregar(int _dato) //Agregar publico
{
	return agregar(_dato, raiz);

}

bool ABB::remover(int _dato)
{
	return remover(_dato, raiz);
}

void ABB::preorden()
{
	if (esVacio())
		cout << "El arbol esta vacio...";
	else {
		preorden(raiz);
		cout << "Fin" << endl;
		cout << endl;
	}

}

void ABB::postorden()
{
	if (esVacio())
		cout << "El arbol esta vacio...";
	else {
		postorden(raiz);
		cout << "Fin" << endl;
		cout << endl;
	}
}

void ABB::enorden()
{
	if (esVacio())
		cout << "El arbol esta vacio...";
	else {
		enorden(raiz);
		cout << "Fin" << endl;
		cout << endl;
	}
}

//OPERACIONES NUEVAS.

void ABB::desplegarHojas()
{
	if (esVacio())
		cout << "El arbol esta vacio...";
	else {
		cout << "Las hojas del arbol son: ";
		desplegarHojas(getRaiz());
		cout << "fin";
		cout << endl;
	}

}

void ABB::desplegarIntermedios()
{
	if (esVacio())
		cout << "El arbol esta vacio...";
	else {
		cout << "Los nodos internos del arbol son: ";
		desplegarIntermedios(getRaiz());
		cout << "fin";
		cout << endl;
	}
}

void ABB::desplegarPares()
{
	if (esVacio())
		cout << "El arbol esta vacio...";
	else {
		cout << "Los nodos pares del arbol son: ";
		desplegarPares(getRaiz());
		cout << endl;
	}
}

void ABB::descendente()
{
	if (esVacio())
		cout << "El arbol esta vacio...";
	else {
		descendente(raiz);
		cout << "Fin" << endl;
		cout << endl;
	}
}
int ABB::Cardinalidad()
{
	if (esVacio()) {
		cout << "El arbol esta vacio...";
		return 0;
	}
	else {
		cout << "La cardinalidad del arbol es: ";
		Cardinalidad(raiz);
		cout << endl;
	}

}

int ABB::CantidadHojas()
{
	return CantidadHojas(getRaiz());
}

bool ABB::esDePares()
{
	return esDePares(getRaiz());
}

int ABB::gradoNodo()
{
	return gradoNodo(getRaiz());
}

bool ABB::NodosEntre1y99()
{
	return NodosEntre1y99(getRaiz());
}

int ABB::altura()
{
	return altura(getRaiz());
}

int ABB::buscarMenor()
{
	return buscarMenor(getRaiz());
}

int ABB::buscarMayor()
{
	return buscarMayor(getRaiz());
}

int ABB::CantidadNodosInternos()
{
	return CantidadNodosInternos(getRaiz());
}

int ABB::SumaHojasPares()
{
	return SumaHojasPares(getRaiz());
}

void ABB::OrdenInverso()
{
	if (esVacio())
		cout << "El arbol esta vacio...";
	else {
		OrdenInverso(raiz);
		cout << "Fin" << endl;
		cout << endl;
	}
}

int ABB::CantidadNHijos()
{
	return 0;
}

int ABB::SumaMultiplo(int c)
{
	return SumaMultiplo(getRaiz(),c);
}

//OPERACIONES TAREA 1
int ABB::sumatoria()
{
	return sumatoria(getRaiz());
}

bool ABB::ArbLleno()
{
	return ArbLleno(getRaiz());
}

bool ABB::ArbCompleto(int p, int n)
{
	return ArbCompleto(getRaiz(), p, n);
}

int ABB::NivelNodos(int nivel)
{
	return NivelNodos(getRaiz(), nivel);
}

void ABB::VerNivelNodos(int N)
{
	return VerNivelNodos(getRaiz(), N);
}

void ABB::PodarArbol()
{
	if (esVacio())
		cout << "El arbol esta vacio...";
	else {
		PodarArbol(getRaiz());
		cout << endl;
	}
}



//IMPLEMENTACIONES PV:

bool ABB::agregar(int _dato, nodoA*& A)
{
	if (A == NULL) {
		A = new nodoA(_dato);
		return true;
	}
	else {
		if (A->getDato() == _dato) {
			return false;
		}
		else {
			if (_dato < A->getDato()) {
				return agregar(_dato, A->getIzq());
			}
			else {
				return agregar(_dato, A->getDer());
			}
		}
	}

}

bool ABB::remover(int _dato, nodoA*& A)
{
	if (A == NULL)
		return false;
	else
		if (A->getDato() == _dato) {
			eliminarNodo(A);
			return true;
		}
		else
			if (_dato < A->getDato())
				return remover(_dato, A->getIzq());
			else
				return remover(_dato, A->getDer());
}

void ABB::eliminarNodo(nodoA*& A)
{
	if (A != NULL) {
		if (EsHoja(A)) {
			delete A;
			A = NULL;
		}
		else {
			nodoA* aux;
			if (A->getIzq() == NULL) {
				aux = A;
				A = A->getDer();
				delete aux;
			}
			else {
				if (A->getDer() == NULL) {
					aux = A;
					A = A->getIzq();
					delete aux;
				}
				else {
					int mayor = buscarMayor(A->getIzq());//Determinar el mayor de los menores
					A->setDato(mayor);
					remover(mayor, A->getIzq());
				}
			}
		}
	}
}

void ABB::preorden(nodoA* A)  //RID
{
	if (A != NULL) {
		cout << A->getDato() << "-";
		preorden(A->getIzq());
		preorden(A->getDer());
	}
}

void ABB::postorden(nodoA* A) //IDR
{
	if (A != NULL) {
		postorden(A->getIzq());
		postorden(A->getDer());
		cout << A->getDato() << "-";
	}
}

void ABB::enorden(nodoA* A) //IRD
{
	if (A != NULL) {
		enorden(A->getIzq());
		cout << A->getDato() << "-";
		enorden(A->getDer());

	}
}

//OPERACIONES NUEVAS:

bool ABB::EsHoja(nodoA* A)
{
	if (A == NULL) {
		return false;
	}
	else {
		return (A->getIzq() == NULL && A->getDer() == NULL);
	}
}

void ABB::desplegarHojas(nodoA* A)
{
	if (A != NULL) {
		if (EsHoja(A)) {
			cout << A->getDato() << "-";
		}
		else {
			desplegarHojas(A->getIzq());
			desplegarHojas(A->getDer());
		}
	}

}

bool ABB::EsIntermedio(nodoA* A)
{
	if (EsHoja(A)) {
		return false;

	}
	else {
		return (A->getIzq() != NULL && A->getDer() != NULL);
	}
}

void ABB::desplegarIntermedios(nodoA* A)
{
	if (A != NULL) {
		if (EsIntermedio(A)) {
			cout << A->getDato() << "-";
		}
		else {
			desplegarIntermedios(A->getIzq());
			desplegarIntermedios(A->getDer());
		}
	}
}

bool ABB::EsPar(nodoA* A)
{
	if (A != NULL) {
		if (A->getDato() % 2 != 0)
			return false;
		else
			return true && EsPar(A->getIzq()) && EsPar(A->getDer());
	}
	else
		return true;
}

void ABB::desplegarPares(nodoA* A)
{
	if (A != NULL) {
		if (EsPar(A)) {
			cout << A->getDato() << "-";
		}
		else {
			desplegarPares(A->getIzq());
			desplegarPares(A->getDer());
		}
	}
}

void ABB::descendente(nodoA* A)
{
	if (A != NULL) {
		descendente(A->getDer());
		cout << A->getDato() << "-";
		descendente(A->getIzq());
	}
}

int ABB::Cardinalidad(nodoA* A)
{
	if (A == NULL)
		return 0;
	else
		return 1 + Cardinalidad(A->getIzq()) + Cardinalidad(A->getDer());

}

int ABB::CantidadHojas(nodoA* A)
{
	if (A != NULL)
	{
		if (EsHoja(A))
		{
			return 1;
		}
		else
		{
			return CantidadHojas(A->getIzq()) + CantidadHojas(A->getDer());
		}
	}
	else
	{
		return 0;
	}
}

bool ABB::esDePares(nodoA* A)
{
	if (A != NULL) {
		if (A->getDato() % 2 != 0)
			return false;
		else
			return true && esDePares(A->getIzq()) && esDePares(A->getDer());
	}
	else
		return true;
}

int ABB::gradoNodo(nodoA* A)
{
	if (A != NULL) {
		if (A->getIzq() == NULL && A->getDer() == NULL)
		{
			return 0;

		}if (A->getIzq() != NULL && A->getDer() != NULL) {

			return 2;
		}
	}
	else
		return 1;

}

bool ABB::NodosEntre1y99(nodoA* A)
{
	if (A != NULL) {
		if (A->getDato() > 99 && A->getDato() < 1) {

			return false;

		}
		else {
			return true && NodosEntre1y99(A->getIzq()) && NodosEntre1y99(A->getDer());
		}
	}
	else {
		return true;
	}
}

int ABB::altura(nodoA* A)
{
	if (A == NULL)
		return 0;
	else
		return 1 + max(altura(A->getIzq()), altura(A->getDer()));
}

int ABB::buscarMenor(nodoA* A)
{
	int menor;
	while (A->getIzq() != NULL)
		A = A->getIzq();
	menor = A->getDato();
	return menor;
}

int ABB::buscarMayor(nodoA* A)
{
	int mayor;
	while (A->getDer() != NULL)
		A = A->getDer();
	mayor = A->getDato();
	return mayor;
}

int ABB::CantidadNodosInternos(nodoA* A)
{
	if (A != NULL)
	{
		if (EsIntermedio(A))
		{
			return 1;
		}
		else
		{
			return CantidadNodosInternos(A->getIzq()) + CantidadNodosInternos(A->getDer());
		}
	}
	else
	{
		return 0;
	}
}

int ABB::SumaHojasPares(nodoA* A)
{
	if (A != NULL) {
		if (EsHoja(A) && EsPar(A)) {

			return A->getDato() + SumaHojasPares(A->getIzq()) + SumaHojasPares(A->getDer());
		}
	}
}

void ABB::OrdenInverso(nodoA* A)
{
	if (A != NULL) {
		OrdenInverso(A->getDer());
		cout << A->getDato() << "-";
		OrdenInverso(A->getIzq());
	}
}

int ABB::CantidadNHijos(nodoA*)
{
	return 0;
}

int ABB::SumaMultiplo(nodoA* A, int c)
{
	int s;
	c = 3;
	if (A == NULL) {
		s = 0;
	}
	else {
		if ((A->getDato()) % c == 0) {
			s = A->getDato() + SumaMultiplo(A->getDer(), c) + SumaMultiplo(A->getIzq(), c);
		}
		else {
			s = SumaMultiplo(A->getDer(), c) + SumaMultiplo(A->getIzq(), c);
		}
	}
	return s;
}

//OPERACIONES TAREA 1
// 
//Sumar todos los valores de los nodos del árbol.
int ABB::sumatoria(nodoA* A)
{
	if (A == 0) {
		return 0;
	}
	else {
		return A->getDato() + sumatoria(A->getIzq()) + sumatoria(A->getDer());
	}
}

//Determinar si un árbol está lleno. 
bool ABB::ArbLleno(nodoA* A)
{
	if (A == NULL)
		return true;

	if (A->getIzq() == NULL && A->getDer() == NULL)
		return true;

	if ((A->getIzq()) && (A->getDer()))
		return (ArbLleno(A->getIzq()) && ArbLleno(A->getDer()));

	return false;
}

//Determinar si un árbol es completo.
bool ABB::ArbCompleto(nodoA* A, int p, int n)
{
	if (A == nullptr) {
		return true;
	}

	if ((A->getIzq() && 2 * p + 1 >= n) || !ArbCompleto(A->getIzq(), 2 * p + 1, n)) {
		return false;
	}

	if ((A->getDer() && 2 * p + 2 >= n) || !ArbCompleto(A->getDer(), 2 * p + 2, n)) {
		return false;
	}

	return true;
}
//Muestra la cantidad de Nodos por nivel.
int ABB::NivelNodos(nodoA* A, int N)
{
	if (A != NULL) {
		if (N == 0) {
			return NivelNodos(A->getIzq(), N - 1) + NivelNodos(A->getDer(), N - 1) + 1;
			return NivelNodos(A->getIzq(), N - 1) + NivelNodos(A->getDer(), N - 1);
		}
	}
	return 0;
}
//Muestra los Nodos por nivel.
void ABB::VerNivelNodos(nodoA* A, int N)
{

	if (A != NULL) {

		VerNivelNodos(A->getIzq(), N - 1);
		VerNivelNodos(A->getDer(), N - 1);

		if (N == 1) {
			cout << A->getDato() << " - ";

		}
	}
}
//Poda el arbol, eliminando todas las hojas del arbol.
//COMPLETAR IMPLEMENTACIÓN
void ABB::PodarArbol(nodoA* A)
{
	if (A != NULL) {
		if (EsHoja(A)) {
			cout << "Eliminando :" << A->getDato() << ",";
			remover(A->getDato());
		}
		else {
			PodarArbol(A->getIzq());
			PodarArbol(A->getDer());
		}
	}

}






