#include "dosABB.h"
#include "nodoA.h"
#include "ABB.h"

bool dosABB::identicos(nodoA* pA, nodoA* pB)
{
    if (pA == NULL && pB == NULL)
        return true;
    else
        if (pA == NULL || pB == NULL)
            return false;
        else //ambos son distintos de NULL
            if (pA->getDato() == pB->getDato())
                return identicos(pA->getIzq(), pB->getIzq()) && identicos(pA->getDer(), pB->getDer());
            else
                return false;
}

bool dosABB::espejo(nodoA* pA, nodoA* pB)
{
    if (pA == NULL && pB == NULL)
        return true;
    else
        if (pA == NULL || pB == NULL)
            return false;
        else //ambos son distintos de NULL
            if (pA->getDato() == pB->getDato())
                return espejo(pA->getIzq(), pB->getDer()) && espejo(pA->getDer(), pB->getIzq());
            else
                return false;
}

void dosABB::copiar(nodoA* pA, nodoA*& pB)
{
    if (pA != NULL) {
        pB = new nodoA(pA->getDato());
        copiar(pA->getIzq(), pB->getIzq());
        copiar(pA->getDer(), pB->getDer());
    }
}

void dosABB::copiarEspejo(nodoA* AA, nodoA*& AB)
{
    if (AA != NULL) {
        AB = new nodoA(AA->getDato());
        copiarEspejo(AA->getIzq(), AB->getDer());
        copiarEspejo(AA->getDer(), AB->getIzq());
    }
}

dosABB::dosABB()
{
    this->A = NULL;
    this->B = NULL;
}

dosABB::~dosABB()
{
}

ABB* dosABB::getA()
{
    return this->A;
}

void dosABB::setA(ABB* Ap)
{
    this->A = Ap;
}

ABB* dosABB::getB()
{
    return this->B;
}

void dosABB::setB(ABB* Bp)
{
    this->B = Bp;
}



bool dosABB::identicos()
{
    return identicos(A->getRaiz(), B->getRaiz());
}

bool dosABB::espejo()
{
   return espejo(A->getRaiz(), B->getRaiz());
}

void dosABB::copiar()
{
   copiar(A->getRaiz(), B->getRaiz());
}

void dosABB::copiarEspejo()
{
    copiarEspejo(A->getRaiz(), B->getRaiz());
}
