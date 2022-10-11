#include "nodoA.h"

nodoA::nodoA()
{
	this->dato = 0;
	this->der = NULL;
	this->izq = NULL;

}

nodoA::nodoA(int _dato)
{
	this->dato = _dato;
	this->der = NULL;
	this->izq = NULL;
}

nodoA::~nodoA()
{
}

int nodoA::getDato()
{
	return this->dato;
}

nodoA*& nodoA::getIzq()
{
	return this->izq;
}

nodoA*& nodoA::getDer()
{
	return this->der;
}

void nodoA::setDato(int _dato)
{
	this->dato = _dato;
}

void nodoA::setIzq(nodoA * _ptr)
{
	this->izq = _ptr;
}

void nodoA::setDer(nodoA* _ptr)
{
	this->izq = _ptr;
}
