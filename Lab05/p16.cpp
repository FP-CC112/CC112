#include <iostream>
using namespace std;

void contarParesImpares(int* arr, int n, int* pares, int* impares) {
    *pares = 0;
    *impares = 0;
    for (int i = 0; i < n; ++i) {
        if (*(arr + i) % 2 == 0) {
            (*pares)++;
        } else {
            (*impares)++;
        }
    }
}

int main() {
    int arreglo[] = {4, 7, 10, 3, 8, 11, 2, 9};
    int tamaño = sizeof(arreglo) / sizeof(arreglo[0]);

    int cantidadPares = 0, cantidadImpares = 0;
    contarParesImpares(arreglo, tamaño, &cantidadPares, &cantidadImpares);

    cout << "Cantidad de pares: " << cantidadPares << endl;
    cout << "Cantidad de impares: " << cantidadImpares << endl;

    return 0;
}
