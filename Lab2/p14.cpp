// Dado un arreglo de enteros, escribir un programa que encuentre la última
// ocurrencia de un número específico dentro del arreglo.


#include <iostream>
using namespace std;

int ultimaOcurrencia(int arr[], int n, int valor){
    for (int i = n - 1; i >= 0; --i){
        if(arr[i] == valor){
            return i;
        }
    }
    return -1;
}

int main(){

    int arr[] = {3,6,8,9,5,3,4,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int valor = 3;

    int resultado = ultimaOcurrencia(arr,n,valor);

    if(resultado < 0){
        cout << "El elemento no se encuentra en el erreglo"<<endl;
    }else{
        cout << "La última ocurrencia de " << arr[resultado] << " ocurre en el indice " << resultado <<endl;
    }

    return 0; 
}
