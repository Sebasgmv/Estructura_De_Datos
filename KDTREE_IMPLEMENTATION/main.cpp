#include "Punto.h"
#include "ArbolKD.h"

using namespace std;

int main() {
    Punto puntoOrigen = Punto(35, 30);

    ArbolKD arbolitoKD = ArbolKD(puntoOrigen);

    Punto puntoInsertar = Punto(37, 12);

    arbolitoKD.insertar(puntoInsertar);

    Punto puntoInsertar2 = Punto(25, 45);

    arbolitoKD.insertar(puntoInsertar2);

    Punto puntoInsertar3 = Punto(45, 32);

    arbolitoKD.insertar(puntoInsertar3);

    Punto puntoInsertar4 = Punto(5, 15);

    arbolitoKD.insertar(puntoInsertar4);

    Punto puntoInsertar5 = Punto(40, 42);

    arbolitoKD.insertar(puntoInsertar5);

    Punto puntoInsertar6 = Punto(32, 25);

    arbolitoKD.insertar(puntoInsertar6);

    Punto puntoInsertar7 = Punto(30, 35);

    arbolitoKD.insertar(puntoInsertar7);

    return 0;
}
