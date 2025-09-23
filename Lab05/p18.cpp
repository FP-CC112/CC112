#include <iostream>
using namespace std;

// Función que ordena un arreglo de caracteres alfabéticamente usando burbuja y punteros
void ordenarCaracteres(char* arr, int n) {
    for (char* i = arr; i < arr + n - 1; ++i) {
        for (char* j = arr; j < arr + n - 1 - (i - arr); ++j) {
            if (*j > *(j + 1)) {
                // Intercambiar los caracteres
                char temp = *j;
                *j = *(j + 1);
                *(j + 1) = temp;
            }
        }
    }
}


// // char* letras = "abcde";  // NO SE DEBE MODIFICAR
// letras[0] = 'z';  // Comportamiento indefinido
int main() {
    char letras[] = {'z', 'b', 'k', 'a', 'm', 'c'};
    int tamaño = sizeof(letras) / sizeof(letras[0]);

    cout << "Antes de ordenar: ";
    for (int i = 0; i < tamaño; ++i) {
        cout << letras[i] << " ";
    }
    cout << endl;

    ordenarCaracteres(letras, tamaño);

    cout << "Después de ordenar: ";
    for (int i = 0; i < tamaño; ++i) {
        cout << letras[i] << " ";
    }
    cout << endl;

    return 0;
}

