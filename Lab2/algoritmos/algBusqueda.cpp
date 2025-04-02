#include "algBusqueda.h"

int busquedaLineal(int arr[], int n, int valor){
    for(int i = 0; i < n; ++i){
        if(valor == arr[i]){
            return i;
        }
    }
    return -1;
}