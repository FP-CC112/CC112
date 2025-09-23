#include <iostream>
using namespace std;

// Función de ordenamiento tipo burbuja con función de comparación personalizada
void ordenar(int* arr, int n, bool (*comparar)(int, int)) {
    for (int* i = arr; i < arr + n - 1; ++i) {
        for (int* j = arr; j < arr + n - 1 - (i - arr); ++j) {
            if (comparar(*j, *(j + 1))) {
                // Intercambiar
                int temp = *j;
                *j = *(j + 1);
                *(j + 1) = temp;
            }
        }
    }
}

// Funciones de comparación
bool compararAsc(int a, int b) {
    return a > b; // Intercambiar si a es mayor que b
}

bool compararDesc(int a, int b) {
    return a < b; // Intercambiar si a es menor que b
}

// Imprimir arreglo con punteros
void imprimir(int* arr, int n) {
    for (int* p = arr; p < arr + n; ++p) {
        cout << *p << " ";
    }
    cout << endl;
}

// ---------- MAIN ----------
int main() {
    int arreglo1[] = {7, 2, 9, 4, 1, 5};
    int arreglo2[] = {7, 2, 9, 4, 1, 5};
    int n = sizeof(arreglo1) / sizeof(arreglo1[0]);

    cout << "Original: ";
    imprimir(arreglo1, n);

    cout << "Orden Ascendente: ";
    ordenar(arreglo1, n, compararAsc);
    imprimir(arreglo1, n);

    cout << "Orden Descendente: ";
    ordenar(arreglo2, n, compararDesc);
    imprimir(arreglo2, n);

    return 0;
}
