# Ejercicio 1
Implementar operaciones con vectores  representados con arreglos dinámicos y manipulados mediante punteros a estructuras.

Se desea representar un **vector de `n` dimensiones** usando una estructura y realizar las siguientes operaciones:

- Leer los elementos del vector desde el teclado.
- Mostrar el vector.
- Calcular el **producto punto** entre dos vectores.
- Liberar correctamente la memoria asignada.



## Código base sugerido (a completar):

```cpp
#include <iostream>
using namespace std;


struct Vector {
    double* elementos;
    int dimension;
};

Vector* crearVector(int dimension) {
    // Completar: reservar memoria para Vector , inicializar  el tamaño y reservar memoria dinámica para sus elementos
}


void leerVector(Vector* v) {
    // Completar: pedir valores al usuario, usa un bucle for para ingresar los datos
}


void mostrarVector(Vector* v) {
    // Completar: mostrar vector con formato (1.0, 2.0, 3.0)
}


double productoPunto(Vector* v1, Vector* v2) {
    // Completar: implementar producto punto (escalar)
    // calcular la suma de v1->elementos[i] * v2-> elementos[i] para cada i
}

void liberarVector(Vector* v) {
    // Completar: liberar memoria de elementos y del struct
}

int main() {
    int n;
    cout << "Ingrese la dimension del vector: ";
    cin >> n;

    Vector* v1 = crearVector(n);
    Vector* v2 = crearVector(n);

    cout << "\nIngrese los elementos del primer vector:\n";
    leerVector(v1);
    cout << "Ingrese los elementos del segundo vector:\n";
    leerVector(v2);

    cout << "\nVector 1: ";
    mostrarVector(v1);
    cout << "\nVector 2: ";
    mostrarVector(v2);

    double resultado = productoPunto(v1, v2);
    cout << "\nProducto punto: " << resultado << endl;

    liberarVector(v1);
    liberarVector(v2);

    return 0;
}
```