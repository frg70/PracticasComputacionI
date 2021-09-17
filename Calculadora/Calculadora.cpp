/* Author: Fernando Ramírez González
 * fer.ramirez.gon@gmail.com
 * September 13, 2021
 */
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    float a = 0, b = 0; double result = 0; string c; //Variable definition
    cout <<"Entre su primer digito: "; cin >> a; cout << "Entre su primer operador: "; cin >> c; cout << "Entre su segundo digito: "; cin >> b; //Input parameters
    //Compare the sign conditions
    if (c == "+"){result = a + b;}
    if (c == "-"){result = a - b;}
    if (c == "*"){result = a * b;}
    if (c == "/"){result = a/b;};
    if (c == "%"){result = fmod(a,b);}
    //Print out the elements according to Github example
    cout <<"Primer numero: " << a << endl;
    cout << " Operacion: " << c << endl;
    cout << "Segundo numero: " << b << endl;
    cout << "Resultado: " << endl;
    cout << a << " " << c <<" "<< b << " = " << result << endl;
    return 0;
}
