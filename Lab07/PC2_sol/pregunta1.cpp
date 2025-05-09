#include "pregunta1.hpp"
#include <iostream>
#include <string>
using namespace std;

/*
Entrada:
n = 5
arr =  1 2 3 4 5
k = 2 
rotacion: derecha


Salida:
arr = 4 5 1 2 3

Note que:
invertirArray(arr, 0, n-1) == 5 4 3 2 1 
invertirArray(arr,0, k -1) == 4 5 3 2 1 
invertirArray(arr,k, n-1 ) == 4 5 1 2 3    --> conincide con la salida requerida

*/

void invertirArray(int* arr, int inicio, int fin) {
    while (inicio < fin) {
        swap(*(arr + inicio), *(arr + fin)); // Recordar: *(arr + inicio) == arr[inicio]
        ++inicio;
        --fin;
    }
}



void rotarDerecha(int* arr, int k, int n) {
    k %= n; // Omitir rotaciones completas
    invertirArray(arr, 0, n-1);
    invertirArray(arr,0, k -1); 
    invertirArray(arr,k, n-1);
}

void rotarIzquierda(int* arr, int k, int n) {
    k %= n;
    rotarDerecha(arr, n-k, n);
}


void resolver_pregunta1() {
    cout << "\nPregunta 1: \n";
    int arr[100], n, k;
    string cad;
    
    cout << "Ingrese el valor el tamaño de arreglo (max 100): " <<endl;
    cin >> n;
    cout << "Ingrese los " << n << " elementos:\n";
    for (int i = 0; i < n; ++i) 
        cin >> arr[i];
    
    cout << "Ingrese el valor de k (posiciones a rotar): ";
    cin >> k;
    
    cout << "Elija entre rota a izquierda o derecha: ";
    cin >> cad;
    cin.ignore(); //limpiamos el buffer para poder leer con cin.getline() en la pregunta 4
    
    if (cad == "derecha") {
        rotarDerecha(arr, k, n);
        cout << "Arreglo rotado a la derecha:\n";
    } else if (cad == "izquierda") {
        rotarIzquierda(arr,k,n);
        cout << "Arreglo rotado a la izquierda:\n";
    }else {
        cout << "Rotación inválida\n ";
        return; 
    }
    
    for (int i = 0; i < n; ++i) 
        cout <<  arr[i] << " ";
    
    cout << "\n";
}


