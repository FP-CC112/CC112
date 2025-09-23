#include <iostream>
using namespace std;

// 1. Recibir como puntero simple
void imprimirComoPuntero(int* ptr, int size) {
    cout << "Desde puntero simple (int*):" << endl;
    for (int i = 0; i < size; ++i) {
        cout << ptr[i] << " ";
    }
    cout << endl;
}

// 2. Recibir como parámetro tipo arreglo (equivale a int*)
void imprimirComoArreglo(int arr[], int size) {
    cout << "Desde parámetro tipo arreglo (int arr[]):" << endl;
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// 3. Recibir como puntero al arreglo completo
void imprimirComoPunteroArreglo(int (*ptr)[10]) {
    cout << "Desde puntero al arreglo completo (int (*)[10]):" << endl;
    for (int i = 0; i < 10; ++i) {
        cout << (*ptr)[i] << " ";
    }
    cout << endl;
}

int main() {
    int arreglo[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    // Llamadas a las funciones
    imprimirComoPuntero(arreglo, 10);
    imprimirComoArreglo(arreglo, 10);
    imprimirComoPunteroArreglo(&arreglo); // &arreglo tiene tipo int (*)[10]

    return 0;
}
