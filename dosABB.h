#pragma once
# include "ABB.h"
class dosABB
{
public:
	ABB* A;
	ABB* B;

private:
	dosABB();
	~dosABB();

	ABB* getA();
	void setA(ABB*);

	ABB* getB();
	void setB(ABB*);

	bool identicos();
	bool espejo();
	void copiar();
	void copiarEspejo();

	bool identicos(nodoA*, nodoA*);
	bool espejo(nodoA*, nodoA*);
	void copiar(nodoA*, nodoA*&);
	void copiarEspejo(nodoA*, nodoA*&);
};

