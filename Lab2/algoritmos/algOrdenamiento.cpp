#include "algOrdenamiento.h"
#include <iostream>
using namespace std;

void burbuja(int arr[], int n){
    for(int i=0;i<n-1; i++){ // numero de pasadas
        for(int j=0; j<n-1;j++){ //comparaciones
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }   
}

void seleccion(int arr[], int n){
    for(int i= 0; i < n-1; ++i){
        int indMin = i;
        for(int j = i + 1; j < n; ++j){
            if(arr[j] < arr[indMin]){
                indMin = j;
            }
        }
        swap(arr[i], arr[indMin]);

    }
}

void insercion(int arr[], int n){
    for(int i = 1; i < n; ++i){
        int temp = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > temp){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
}

