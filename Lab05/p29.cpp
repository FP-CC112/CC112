#include <iostream>
using namespace std;

// Función aplicar que usa un puntero a función para modificar elementos
void aplicar(int* arr, int n, int (*f)(int)) {
    for (int i = 0; i < n; ++i) {
        arr[i] = f(arr[i]);
    }
}

// Funciones para usar con aplicar

int cuadrado(int x) {
    return x * x;
}

int doble(int x) {
    return 2 * x;
}

int negativo(int x) {
    return -x;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original: ";
    for (int x : arr) cout << x << " ";
    cout << endl;

    aplicar(arr, n, cuadrado);
    cout << "Cuadrado: ";
    for (int x : arr) cout << x << " ";
    cout << endl;

    aplicar(arr, n, doble);
    cout << "Doble: ";
    for (int x : arr) cout << x << " ";
    cout << endl;

    aplicar(arr, n, negativo);
    cout << "Negativo: ";
    for (int x : arr) cout << x << " ";
    cout << endl;

    return 0;
}
