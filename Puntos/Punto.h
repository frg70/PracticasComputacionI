//
// Fernando Ramirez
//
#ifndef PUNTOS_PUNTO_H
#define PUNTOS_PUNTO_H
#include <iostream>
using namespace std;
class Punto2D{
public:
    float coordX, coordY, coordTempX, coordTempy, a;
    float SetPosicion(float x, float y);
    float Trasladar(float temp1, float temp2);
    float RotarRespectoAlOrigen(float temp1);

    float Escalar(float temp1,float temp2);
    float GetX() ;
    float GetY() ;
private:
    float miPunto;
};
#endif //PUNTOS_PUNTO_H


