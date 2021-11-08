/* Fernando Ramírez González
 *  fer.ramirez.gon@gmail.com
 */
#include "Grupo.h"

using namespace std;
int Grupo::getCarga() {
    return carga;
}
float Grupo::getPka() {
    return pka;
}
Grupo::Grupo(string nombreGrupo, float pkGrupo, int cargaGrupo) {
    nombre = nombreGrupo;
    pka = pkGrupo;
    carga = cargaGrupo;
}
Grupo::Grupo() {
}
string Grupo::getname() {
    return nombre;}




