/* Fernando Ramírez González
 *  fer.ramirez.gon@gmail.com
 */
#ifndef CARGAELECTRICA_GRUPO_H
#define CARGAELECTRICA_GRUPO_H
#include <string>
using namespace std;
class Grupo{
public:
    Grupo();
    Grupo(string , float , int );
float getPka();
int getCarga();
string getname();
private:
    string nombre;
    float pka;
    int carga;
};
#endif //CARGAELECTRICA_GRUPO_H
