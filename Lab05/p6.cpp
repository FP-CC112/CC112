/*Recorrer un arreglo usando punteros: 
Declara un arreglo de 5 enteros e inicialízalo. 
Usa un puntero para recorrer el 
arreglo e imprimir los elementos sin usar índices. */

#include <iostream>
using namespace std;

void imprimirArregloPtr(int* p, int n){
    for(int i=0; i<5; ++i){
        cout<<*p<<" ";
        p++; 
    }
    cout <<endl; 
}

int main(){
    int arr[5]={1,2,3,4,5};

    imprimirArregloPtr(arr,5);
    // int* ptr = arr;
    // for(int i=0; i<5; i++){
    //     cout<<*ptr<<" ";
    //     ptr++;
    // }
    return 0; 
}