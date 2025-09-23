#include <iostream>
using namespace std;

// Función de búsqueda lineal usando punteros
int* busquedaLineal(int* arr, int n, int valor) {
    for (int i = 0; i < n; ++i) {
        if (*(arr + i) == valor) {
            return (arr + i);  // Retorna la dirección del elemento encontrado
        }
    }
    return nullptr;  // No encontró el valor
}

int main() {
    const int TAM = 6;
    int arreglo[TAM] = {4, 7, 1, 8, 3, 7};

    int valorBuscado = 8;
    int* resultado = busquedaLineal(arreglo, TAM, valorBuscado);

    if (resultado != nullptr) {
        cout << "Valor " << valorBuscado << " encontrado en la dirección: " << resultado << endl;
        cout << "Índice del valor encontrado: " << resultado - arreglo << endl;
    } else {
        cout << "Valor " << valorBuscado << " no encontrado en el arreglo." << endl;
    }

    return 0;
}
