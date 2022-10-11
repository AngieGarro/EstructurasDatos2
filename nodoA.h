#pragma once
#include <iostream>
#include <stdlib.h>
using namespace std;

class nodoA
{
private:
	int dato;
	nodoA* izq;
	nodoA* der;

public:
	nodoA();
	nodoA(int);
	~nodoA();
	int getDato();
	nodoA *&getIzq();
	nodoA *&getDer();

	void setDato(int);
	void setIzq(nodoA *);
	void setDer(nodoA *);
};

