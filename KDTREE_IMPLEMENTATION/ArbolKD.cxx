//
// Created by saris on 4/10/2022.
//
#include <iostream>
#include "ArbolKD.h"

using namespace std;

ArbolKD::ArbolKD(){
    this->raiz = nullptr;
    this->raiz->setHijoDer(nullptr);
    this->raiz->setHijoIzq(nullptr);
}

ArbolKD::ArbolKD(Punto val){
    this->raiz->setDato(val);
    this->raiz->setHijoDer(nullptr);
    this->raiz->setHijoIzq(nullptr);
}

ArbolKD::~ArbolKD(){
    if(this->raiz != nullptr){
        this->raiz = nullptr;
        delete this->raiz;
    }
}

Punto ArbolKD::datoRaiz(){
    if(this->raiz != nullptr){
        return this->raiz->getDato();
    }
}

bool ArbolKD::insertar(Punto val){
    NodoKD* nodoActual = this->raiz;
    char dimension = 'x';

    while(true){
        if(dimension == 'x') {
            if(val.getX() == nodoActual->getDato().getX()){
                return false;
            }
            if (val.getX() > nodoActual->getDato().getX()) {
                if(nodoActual->getHijoDer() == nullptr){
                    NodoKD* nodoHijo = new NodoKD(val);
                    nodoActual->setHijoDer(nodoHijo);
                    return true;
                }
                else{
                    nodoActual = nodoActual->getHijoDer();
                }
            } else {
                if(nodoActual->getHijoIzq() == nullptr){
                    NodoKD* nodoHijo = new NodoKD(val);
                    nodoActual->setHijoIzq(nodoHijo);
                    return true;
                }
                else {
                    nodoActual = nodoActual->getHijoIzq();
                }
            }
            dimension = 'y';
        }
        else{
            if(val.getY() == nodoActual->getDato().getY()){
                return false;
            }
            if (val.getY() > nodoActual->getDato().getY()) {
                if(nodoActual->getHijoDer() == nullptr){
                    NodoKD* nodoHijo = new NodoKD(val);
                    nodoActual->setHijoDer(nodoHijo);
                    return true;
                }
                else {
                    nodoActual = nodoActual->getHijoDer();
                }
            } else {
                if(nodoActual->getHijoIzq() == nullptr){
                    NodoKD* nodoHijo = new NodoKD(val);
                    nodoActual->setHijoIzq(nodoHijo);
                    return true;
                }
                else {
                    nodoActual = nodoActual->getHijoIzq();
                }
            }
            dimension = 'x';
        }
    }


}

void ArbolKD::preOrden(){


}

void ArbolKD::inOrden(){

}

void ArbolKD::posOrden(){

}

void ArbolKD::nivelOrden() {

}

bool ArbolKD::esVacio(){
    if(this->raiz==nullptr){
        return true;
    }
    return false;
}

NodoKD *ArbolKD::getRaiz() {
    return raiz;
}

void ArbolKD::setRaiz(NodoKD *raiz) {
    ArbolKD::raiz = raiz;
}
