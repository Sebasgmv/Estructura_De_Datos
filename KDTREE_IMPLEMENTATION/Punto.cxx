//
// Created by saris on 4/10/2022.
//

#include "Punto.h"

#include <iostream>

Punto::Punto() {
    this->x = 0;
    this->y = 0;
}

Punto::Punto(int x, int y) {
    this->x = x;
    this->y = y;
}

int Punto::getX(){
    return this->x;
}

void Punto::setX(int x){
    this->x = x;
}

int Punto::getY(){
    return this->y;
}

void Punto::setY(int y){
    this->y = y;
}

Punto& Punto::operator = (const Punto &p) {
    x = p.x;
    y = p.y;
    return *this;
}

bool Punto::operator == (const Punto &p) const{
    return (x == p.x && y == p.y);
}
