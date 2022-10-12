//
// Created by saris on 4/10/2022.
//

#ifndef KDTREE_IMPLEMENTATION_PUNTO_H
#define KDTREE_IMPLEMENTATION_PUNTO_H


#include <fstream>

class Punto {

protected:
    int x;
    int y;
public:
    Punto();
    Punto(int x, int y);
    int getX();
    void setX(int x);
    int getY();
    void setY(int y);
    Punto& operator = (const Punto &p);
    bool operator == (const Punto &p) const;
    friend std::ostream& operator << (std::ostream &o, const Punto &p)
    { o << "(" << p.x << "," << p.y << ")";
        return o;
    }
};


#endif //KDTREE_IMPLEMENTATION_PUNTO_H
