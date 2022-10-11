#pragma once
#include "nodoA.h"

class ABB
{
private:
	nodoA* raiz;

	//Operaciones recursivas
	bool agregar(int, nodoA*&);
	bool remover(int, nodoA*&);
	void eliminarNodo(nodoA*&);
	void preorden(nodoA*);
	void postorden(nodoA*);
	void enorden(nodoA*);

	//Operaciones practica 1
	bool EsHoja(nodoA*);
	void desplegarHojas(nodoA*);

	bool EsIntermedio(nodoA*);
	void desplegarIntermedios(nodoA*);
	bool EsPar(nodoA*);
	void desplegarPares(nodoA*);
	void descendente(nodoA*);

	int Cardinalidad(nodoA*);
	int CantidadHojas(nodoA*);
	bool esDePares(nodoA*);
	int gradoNodo(nodoA*);
	bool NodosEntre1y99(nodoA*);
	int altura(nodoA*);
	int buscarMenor(nodoA*);
	int buscarMayor(nodoA*);
	int CantidadNodosInternos(nodoA*);
	int SumaHojasPares(nodoA*);

	//Operaciones Tarea 1.
	int sumatoria(nodoA*);
	bool ArbLleno(nodoA*);
	bool ArbCompleto(nodoA*);


public:
	ABB();
	~ABB();
	nodoA *&getRaiz();
	void setRaiz(nodoA *);
	

	// Operaciones básicas de árboles
	bool esVacio();
	bool agregar(int);
	bool remover(int);
	void preorden();
	void postorden();
	void enorden();
	//Operaciones practica 1.
	void desplegarHojas();
	void desplegarIntermedios();
	void desplegarPares();
	void descendente();

	int Cardinalidad();
	int CantidadHojas();
	bool esDePares();
	int gradoNodo();
	bool NodosEntre1y99();
	int altura();
	int buscarMenor();
	int buscarMayor();
	int CantidadNodosInternos();
	int SumaHojasPares();


	//Operaciones Tarea 1.
	int sumatoria();
	bool ArbLleno();
	bool ArbCompleto();
};

