#include <iostream>
using namespace std;

// Función que calcula suma y promedio, devuelve ambos por punteros (parámetros por referencia)
void calcularSumaPromedio(int* arr, int n, int* suma, double* promedio) {
    *suma = 0;
    for (int i = 0; i < n; ++i) {
        *suma += *(arr + i);
    }
    *promedio = static_cast<double>(*suma) / n;
}

int main() {
    int arreglo[10] = {5, 8, 12, 7, 9, 3, 4, 10, 6, 11};

    int suma = 0;
    double promedio = 0.0;

    calcularSumaPromedio(arreglo, 10, &suma, &promedio);

    cout << "Suma: " << suma << endl;
    cout << "Promedio: " << promedio << endl;

    return 0;
}
