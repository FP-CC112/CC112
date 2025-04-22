#include <iostream>
#include "algOrdenamiento.h"
#include "algBusqueda.h"
#include "imprimirArreglo.h"

using namespace std;

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Arreglo original:\n";
    imprimirArreglo(arr,n);
    //********************************
    cout << "\nOrdenando con Burbuja: \n";
    burbuja(arr,n);
    imprimirArreglo(arr,n);
    

    //********************************
    int arr1[] = {64, 25, 12, 22, 11};
    cout << "\nOrdenando con Seleccion: \n";
    seleccion(arr1,n);
    imprimirArreglo(arr1,n);
    

    //*********************************
    int arr2[] = {64, 25, 12, 22, 11};
    cout << "\nOrdenando con Insercion:\n";
    insercion(arr2,n);
    imprimirArreglo(arr2,n);


    
    return 0;
}


//g++ -o prog  main.cpp algOrdenamiento.cpp algBusqueda.cpp imprimirArreglo.cpp