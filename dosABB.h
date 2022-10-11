#pragma once
# include "nodoA.h"
class dosABB
{
	nodoA* A;
	nodoA* B;

	bool identicos(nodoA*, nodoA*);
	bool espejo(nodoA*, nodoA*);
	void copiar(nodoA*, nodoA*&);
	void copiarEspejo(nodoA*, nodoA*&);

	dosABB();
	~dosABB();

	nodoA* getA();
	void setA(nodoA*);

	nodoA* getB();
	void setB(nodoA*);

	bool identicos();
	bool espejo();
	void copiar();
	void copiarEspejo();
};

