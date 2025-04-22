/* Función que retorne el menor valor (punteros) 
Escribe una función int* menorElemento(int* arr, int n) 
que  retorne un puntero al menor elemento del arreglo. 
Luego imprime su valor y  dirección desde main. */


#include <iostream>
using namespace std;
int* menorElemento(int* arr, int n){ // int (*f)(int, int);
    int* ptrMenor = arr;
    for(int i = 0; i < n; ++i){
        if(*(arr + i) < *ptrMenor){
            ptrMenor = arr + i;
        }
    }
    return ptrMenor;

}

int main(){

    int arr[] = {4,8,0,3,2,5,6,11,-5};
    int *resultado = menorElemento(arr,9);
    cout << "El menor elemento es: " << *resultado <<endl;

    return 0; 
}