/*Intercambiar valores de dos variables usando punteros: 
Pide al usuario que ingrese dos números. 
Escribe una función intercambiar(int* a, int* b) que 
intercambie sus valores usando punteros.*/

#include <iostream>
using namespace std;

void intercambiar(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

// adicional
// Intercambia dos arreglos de tamaño n usando punteros
void intercambiarArreglos(int* arr1, int* arr2, int n) {
    for (int i = 0; i < n; ++i) {
        intercambiar(&arr1[i], &arr2[i]);
    }
}

// Paso de puntero por referencia: cambia el puntero para que apunte a otro arreglo
void reasignarPuntero(int*& ptr, int* nuevoArreglo) {
    ptr = nuevoArreglo;
}



int main(){
    int a = 10, b = 20;
    intercambiar(&a, &b);
    cout<<"el valor de a es: "<<a<<endl;
    cout<<"el valor de b es: "<<b<<endl;

    
    // 2. Intercambio de dos arreglos
    const int TAM = 5;
    int arreglo1[TAM] = {1, 2, 3, 4, 5};
    int arreglo2[TAM] = {10, 20, 30, 40, 50};

    cout << "--- Intercambio de arreglos ---" << endl;
    cout << "Antes:" << endl;
    cout << "Arreglo 1: ";
    for (int i = 0; i < TAM; ++i) cout << arreglo1[i] << " ";
    cout << "\nArreglo 2: ";
    for (int i = 0; i < TAM; ++i) cout << arreglo2[i] << " ";
    cout << endl;

    intercambiarArreglos(arreglo1, arreglo2, TAM);

    cout << "Después:" << endl;
    cout << "Arreglo 1: ";
    for (int i = 0; i < TAM; ++i) cout << arreglo1[i] << " ";
    cout << "\nArreglo 2: ";
    for (int i = 0; i < TAM; ++i) cout << arreglo2[i] << " ";
    cout << endl << endl;

    // 3. Paso de puntero por referencia
    int arregloA[] = {100, 200, 300};
    int arregloB[] = {400, 500, 600};
    int* puntero = arregloA;

    cout << "--- Paso de punteros por referencia ---" << endl;
    cout << "Antes de reasignar el puntero, apunta a arregloA: " << puntero[0] << endl;
    reasignarPuntero(puntero, arregloB);
    cout << "Después de reasignar, ahora apunta a arregloB: " << puntero[0] << endl;




    return 0; 
}