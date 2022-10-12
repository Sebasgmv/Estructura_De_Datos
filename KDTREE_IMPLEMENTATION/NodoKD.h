//
// Created by saris on 4/10/2022.
//

#ifndef KDTREE_IMPLEMENTATION_NODOKD_H
#define KDTREE_IMPLEMENTATION_NODOKD_H
#include "Punto.h"

class NodoKD {
protected:
    Punto dato;
    NodoKD* hijoIzq;
    NodoKD* hijoDer;
public:
    NodoKD();

    NodoKD(Punto val);

    ~NodoKD();

    bool esHoja();

    Punto getDato() ;

    void setDato( Punto dato);

    NodoKD *getHijoIzq() ;

    void setHijoIzq(NodoKD *hijoIzq);

    NodoKD *getHijoDer() ;

    void setHijoDer(NodoKD *hijoDer);
};


#endif //KDTREE_IMPLEMENTATION_NODOKD_H
