/* Author: Fernando Ramirez Gonzalez
 *  Date: 01/10/2021
 *  fer.ramirez.gon@gmail.com
 */
#include <iostream>
#include <array>
#include <iomanip>

// Añadir std para fácil llamado de funciones
using namespace std;

//// Declaración de funciones
//Definimos un template (un tipo de dato) para nuestra matriz
template <typename matriz>
void LlenarMatriz(matriz & miMatriz);

template <typename matriz>
void ImprimirMatriz(matriz & miMatriz);

template <typename matriz>
void GaussJordan(matriz & miMatriz);

template <typename matriz>
void ImprimirSolucion(matriz & miMatriz);

int main()
{
    // Definimos el número de variables de nuestro sistema
    const int variables = 3;
    // El número de columnas será el número de variables más su solición para cada ecuación
    const int columnas = variables + 1;

    // Inicializamos la matriz que vamos a ocupar
    array <array<float, columnas>, variables> miMatriz = { 0 };

    // Pedimos al usuario que llene la matriz
    LlenarMatriz(miMatriz);

    // Aplicamos el método de Gauss-Jordan sobre nuestra matriz
    GaussJordan(miMatriz);

    // Imprimimos la solución de la matriz
    ImprimirSolucion(miMatriz);

    return 0; // Indicamos que salimos del programa con éxito
}

/*
Llena 'miMatriz' con valores ingresados por el usuario para cada elemento.
No regresa ningún valor.
*/
template <typename matriz>
void LlenarMatriz(matriz & miMatriz)
{
    int variables = miMatriz.size();
    for (int i = 0; i < variables; i++) {
        for (int j = 0; j <= variables; j++) {
            cout << "Valor elemento [" << i << "][" << j << "]: ";
            cin >> miMatriz[i][j];
        }
    }
}

/*
Imprime cada elemento de 'miMatriz' emulando una matriz con corchetes cuadrados.
No regresa ningún valor.
*/
template <typename matriz>
void ImprimirMatriz(matriz & miMatriz)
{
    int matrixSize = miMatriz.size();
    for (int i = 0; i < matrixSize; i++) {
        cout << "[ ";
        for (int j = 0; j < matrixSize + 1; j++)
            cout << miMatriz[i][j] << '\t';
        cout << "]\n";
    }
}

/*
Imprime en pantalla la solución para cada variable del sistema de ecuaciones correspondiente a los valores en 'miMatriz'.
No regresa ningún valor.
*/
template <typename matriz>
void ImprimirSolucion(matriz & miMatriz)
{
    int variables = miMatriz.size();
    cout << "\nSolucion:" <<endl;
    for(int i = 0; i < variables; i++){
        cout <<"x" << i << " = "<< miMatriz[i][variables] << endl;
    }
}
/*
Implementa el algoritmo de Gauss-Jordan sobre 'miMatriz', finalizando en ella la solución del algoritmo.
No regresa ningún valor.
*/
template <typename matriz>
void GaussJordan(matriz & miMatriz)
{
    int maxC{0}, matrixSize = miMatriz.size(), index{0}, temp{0};
    double pivote{0};
     //obtener el valor máximo
     for (int i=0; i < matrixSize; i++){
         maxC = abs(miMatriz[i][i]);
         index = i;
        //Comparación para encontrar el pivote
         for (int j= i +1; j < matrixSize; j++) {
             if (maxC < abs(miMatriz[j][i])) {
                 maxC = abs(miMatriz[i][j]);
             }
         }
     //Intercambio de filas
     if (i != index){
         for (int w = 0; w < matrixSize; w++){
             temp = miMatriz[i][w];
             miMatriz[i][w] = miMatriz[index][w];
             miMatriz[index][w] = temp;
             }
     if (miMatriz[i][i] == 0){
         cout << "No existe solucion" << endl;
     }
     else{
         for (int v = 0; v <matrixSize; v++){
             if (v != i){
                 pivote = -miMatriz[v][i];
                 for (int  z = 1; z < matrixSize; z++){
                     miMatriz[v][z] = miMatriz[v][z] + pivote * miMatriz[i][z]/miMatriz[i][i];
                 }
             }
             else{
                 pivote = miMatriz[i][i];
                 for (int z = 1; z < matrixSize; z++){
                     miMatriz[v][z] = miMatriz[v][z] / pivote;
                 }
             }
         }


     }
     }
             }

             }
//Proceso mecánica para realizar GaussJordan
// 1. Encontrar una fila pivote
// 2. Convertir esa fila pivote en 1
// 3. Reducir la fila inferior restando la superior mutiplicada por 1/ fila inferior
// 4. Subir encima del pivote
// 5. Reducir la fila con el uso de mi pivote