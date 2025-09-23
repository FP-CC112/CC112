#include <iostream>
using namespace std;

int main() {
    const int filas = 3;
    const int columnas = 4;

    // Arreglo unidimensional que simula matriz 3x4
    int arr[filas * columnas] = {
        1,  2,  3,  4,
        5,  6,  7,  8,
        9, 10, 11, 12
    };

    int* ptr = arr;  // Puntero al primer elemento

    cout << "Simulando matriz 3x4 usando arreglo unidimensional:" << endl;

    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            // Acceso a [i][j] usando aritmética de punteros
            cout << *(ptr + i * columnas + j) << " ";
        }
        cout << endl;
    }

    return 0;
}
