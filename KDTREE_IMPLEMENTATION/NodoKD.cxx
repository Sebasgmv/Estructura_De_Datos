//
// Created by saris on 4/10/2022.
//

#include "NodoKD.h"

NodoKD::NodoKD(){
    this->dato = Punto(0, 0);
    this->hijoDer = nullptr;
    this->hijoIzq = nullptr;
}

NodoKD::NodoKD(Punto val){
    this->dato = val;
    this->hijoDer = nullptr;
    this->hijoIzq = nullptr;
}

NodoKD::~NodoKD(){
    if(this->hijoIzq != nullptr){
        this->hijoIzq = nullptr;
        delete this->hijoIzq;
    }
    if(this->hijoDer != nullptr){
        this->hijoDer = nullptr;
        delete this->hijoDer;
    }
}

bool NodoKD::esHoja(){
    if(this->hijoDer == nullptr && this->hijoIzq == nullptr){
        return true;
    }
    return false;
}


Punto NodoKD::getDato()  {
    return dato;
}

void NodoKD::setDato( Punto dato) {
    NodoKD::dato = dato;
}

NodoKD *NodoKD::getHijoIzq()  {
    return hijoIzq;
}

void NodoKD::setHijoIzq(NodoKD *hijoIzq) {
    NodoKD::hijoIzq = hijoIzq;
}

NodoKD *NodoKD::getHijoDer()  {
    return hijoDer;
}

void NodoKD::setHijoDer(NodoKD *hijoDer) {
    NodoKD::hijoDer = hijoDer;
}
