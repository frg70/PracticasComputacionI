/* Fernando Ramírez González
 * fer.ramirez.gon@gmail.com
 * 15/10/2021
 */
#include <iostream>
#include "Punto.h"
#include <cmath>
#define PI 3.14159265358979323846
using namespace std;

float Punto2D::SetPosicion(float x, float y) {
    coordX = x;
    cout << "x:" ;
    coordY = y;
    cout << "y: ";
    return 0;
}
float Punto2D::Trasladar(float temp1, float temp2) {
    coordTempX = temp1;
    coordTempy = temp2;
    coordX = coordX+ coordTempX;
    coordY = coordY + coordTempy;
    return 0;
}
float Punto2D::RotarRespectoAlOrigen(float temp1) {
    a = coordX;
    coordX = a * cos(temp1*PI/180) - coordY * sin(PI*temp1/180);
    coordY = a * sin(temp1*PI/180) + coordY * cos(PI*temp1/180);
    return 0;

}
float Punto2D::Escalar(float temp1, float temp2) {
    coordX = coordX * temp1;
    coordY = coordY * temp2;
    return 0;
}
float Punto2D::GetX () {
    return coordX;
}
float Punto2D::GetY() {
    return coordY;
}











