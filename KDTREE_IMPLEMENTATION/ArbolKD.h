//
// Created by saris on 4/10/2022.
//

#ifndef KDTREE_IMPLEMENTATION_ARBOLKD_H
#define KDTREE_IMPLEMENTATION_ARBOLKD_H
#include "NodoKD.h"

class ArbolKD {
protected:
    NodoKD* raiz;
public:
    NodoKD *getRaiz();

    void setRaiz(NodoKD *raiz);

public:
    ArbolKD();

    ArbolKD(Punto val);

    ~ArbolKD();

    Punto datoRaiz();

    bool esVacio();

    bool insertar(Punto val);

    void preOrden();

    void inOrden();

    void posOrden();

    void nivelOrden();
};



#endif //KDTREE_IMPLEMENTATION_ARBOLKD_H
