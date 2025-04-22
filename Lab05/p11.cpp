/*Eliminar múltiplos de un número en un arreglo: 
Dado un arreglo de enteros, elimina (lógicamente) 
los múltiplos de un número 
dado usando solo punteros. No uses índices.
Imprime el resultado sin modificar 
la memoria original (solo salta esos elementos). */
#include <iostream>
using namespace std;

void eliminarMultiplos(int* p, int n, int valor){
    for(int i = 0; i < n; ++i){
         if(*(p + i) % valor != 0 ){
            cout << *(p + i) <<endl;
         }
    }
    cout <<endl; 
}


int main(){
    int arr[] = {1,2,3,5,7,9,4,6,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int valor = 2;
    eliminarMultiplos(arr,n,valor);


    return 0; 
}