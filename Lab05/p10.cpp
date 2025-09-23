#include <iostream>
using namespace std;

// Función que compara dos arreglos usando punteros
bool compararArreglos(const int* arr1, const int* arr2, int n) {
    for (int i = 0; i < n; ++i) {
        if (*(arr1 + i) != *(arr2 + i)) {
            return false;
        }
    }
    return true;
}

int main() {
    const int TAM = 5;
    int arreglo1[TAM] = {1, 2, 3, 4, 5};
    int arreglo2[TAM] = {1, 2, 3, 4, 5};
    int arreglo3[TAM] = {1, 2, 0, 4, 5};

    cout << "Comparando arreglo1 y arreglo2: ";
    cout << (compararArreglos(arreglo1, arreglo2, TAM) ? "Son iguales" : "Son diferentes") << endl;

    cout << "Comparando arreglo1 y arreglo3: ";
    cout << (compararArreglos(arreglo1, arreglo3, TAM) ? "Son iguales" : "Son diferentes") << endl;

    return 0;
}
