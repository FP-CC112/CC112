// Dado un arreglo de enteros, encontrar el elemento más cercano 
// pero mayor que unvalor dado.
// Ejemplo [12, 7, 19, 25, 14, 9]
// Ingrese el elemento de referencia: 14
// El elemento mayor más cercano a 14 es: 19

#include <iostream>
using namespace std;

int encontrarMayorCercano( int arreglo[], int n, int valor){
    int mayorCercano = -1;

    for (int i = 0; i < n; i++){
        if (arreglo[i]>valor){
            if (mayorCercano == -1 || arreglo[i]<mayorCercano){
                mayorCercano=arreglo[i];
            }
        }
    }
    return mayorCercano;
}

int main(){
    int array[]= {1, 6, 9, 34, 23, 12};
    int n=sizeof(array)/sizeof(array[0]);
    int valor = 34;

    int resultado = encontrarMayorCercano(array, n, valor);
    
    if (resultado!=-1){
        cout << "El numero mas cercano pero mayor es: " << resultado << endl;
    } else {
        cout << "No hay numero mayor en el arreglo." << endl;
    }
    return 0; 
}