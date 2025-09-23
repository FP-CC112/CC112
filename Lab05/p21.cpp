#include <iostream>
using namespace std;

/*
Prototipos posibles para recibir matrices estáticas usando punteros

Cuando declaras una matriz como int matriz[3][4];
 puedes recibirla de varias formas.

 a) Recibir como puntero a arreglo fijo (más usada en C/C++ estático):
void funcion(int (*mat)[4], int filas);

Recomendado para matrices con columnas fijas ([3][4], [N][4])

b) Recibir como arreglo bidimensional con tamaño de columna explícito:
void funcion(int mat[][4], int filas);


Equivalente a (a), pero más legible. 
El compilador necesita saber el tamaño de columnas
para hacer el cálculo de posición en memoria.

c) Recibir como puntero a entero, tratando la matriz como un arreglo plano:
void funcion(int* mat, int filas, int columnas);

Aquí recorres como si fuera un arreglo de tamaño filas * columnas, y accedes con:

*(mat + i * columnas + j)


O solo con punteros si no usas índices.

d) Recibir usando void funcion(int** mat)

Util en matrices dinámicas (con new int*[filas]), no para int mat[3][4].


TAmbién podemos usarlo con matrices estáticas asi
#include <iostream>
using namespace std;

void imprimirMatriz(int** mat, int filas, int columnas) {
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    const int FILAS = 3, COLUMNAS = 4;
    int fila0[] = {1, 2, 3, 4};
    int fila1[] = {5, 6, 7, 8};
    int fila2[] = {9, 10, 11, 12};

    int* matriz[FILAS] = {fila0, fila1, fila2};  // arreglo de punteros

    imprimirMatriz(matriz, FILAS, COLUMNAS);

    return 0;
}
*/

// Imprimir matriz usando punteros (sin índices)
void imprimirMatriz(int (*mat)[4], int filas) {
    for (int* fila = *mat; fila < *mat + filas * 4; ++fila) {
        cout << *fila << " ";
    }
    cout << endl;
}

int main() {
    int matriz[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    imprimirMatriz(matriz, 3); // 3 filas
    return 0;
}
