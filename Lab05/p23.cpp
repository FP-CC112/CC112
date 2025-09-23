#include <iostream>
using namespace std;

int main() {
    // 1. Declarar 5 variables distintas
    int a = 10, b = 20, c = 30, d = 40, e = 50;

    // 2. Declarar un arreglo de punteros a int
    int* ptrs[5];

    // 3. Asignar direcciones de las variables a los punteros
    ptrs[0] = &a;
    ptrs[1] = &b;
    ptrs[2] = &c;
    ptrs[3] = &d;
    ptrs[4] = &e;

    // 4. Mostrar los valores originales
    cout << "Valores originales:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << "Valor " << i << ": " << *ptrs[i] << endl;
    }

    // 5. Modificar los valores a través de los punteros
    for (int i = 0; i < 5; ++i) {
        *ptrs[i] += 100;  // Sumar 100 a cada variable
    }

    // 6. Mostrar los valores modificados
    cout << "\nValores después de modificar con punteros:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    cout << "d = " << d << endl;
    cout << "e = " << e << endl;

    return 0;
}
