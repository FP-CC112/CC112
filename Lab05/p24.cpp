#include <iostream>
using namespace std;

int main() {
    // 1. Declarar un arreglo de 10 enteros
    int numeros[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    // 2. Declarar un puntero al arreglo completo de 10 enteros
    int (*ptr)[10] = &numeros;

    // 3. Acceder a los elementos usando (*ptr)[i]
    cout << "Elementos del arreglo usando (*ptr)[i]:" << endl;
    for (int i = 0; i < 10; ++i) {
        cout << "Elemento " << i << ": " << (*ptr)[i] << endl;
    }

    // 4. Modificar los elementos a través del puntero
    for (int i = 0; i < 10; ++i) {
        (*ptr)[i] *= 2;  // Duplicar cada valor
    }

    // 5. Mostrar los valores modificados
    cout << "\nElementos modificados:" << endl;
    for (int i = 0; i < 10; ++i) {
        cout << "Elemento " << i << ": " << numeros[i] << endl;
    }

    return 0;
}


/*
¿Por qué usar int (*ptr)[10]?

Esto es útil cuando:

Quieres pasar un arreglo completo como puntero a función.

Quieres evitar la conversión de int[] a int*, que pierde el tamaño.

Estás trabajando con arreglos multidimensionales, y necesitas mantener estructura.
*/