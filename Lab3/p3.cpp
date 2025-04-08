/*Dado dos arreglos arr1[] y arr2[] de números enteros ordenados en forma ascendente,
cuyos tamaños son n1 y n2 respectivamente (tamaño máximo 20). Escribe una función
llamada mezcla que fusione ambos arreglos en un solo arreglo ordenado. Ejemplo
Entrada:
arr1[] = {1, 4, 6, 9}
arr2[] = {2, 3, 7, 8, 10}
Salida:
arr[] = {1, 2, 3, 4, 6, 7, 8, 9, 10}*/

#include <iostream>
using namespace std;


//revisar funcion
void merge(int arr1[], int n1, int arr2[], int n2, int arr[]){
    int i = 0, j = 0 , k = 0;

    while(i < n1 && j < n2){
        // if(arr1[i] < arr2[j]){
        //     arr[k] = arr1[i];
        //     i++;
        // }else{
        //     arr[k] = arr2[j];
        //     j++;
        // }
        // k++;
        arr[k++] = (arr1[i] < arr2[j]) ? arr1[i++] : arr2[j++];
    }

    while(i < n1){
        arr[k] = arr1[i];
        i++;
        k++;
    }

    while(j < n2){
        arr[k] = arr2[j];
        j++;
        k++;
    }


}

void imprimirArreglo(int a[], int n){
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[40];

    int arr1[] = {1, 4, 6, 9};
    int arr2[] = {2, 3, 7, 8, 10};

    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);

    merge(arr1, n1, arr2, n2, arr);

    imprimirArreglo(arr,n1+n2);






    return 0; 
}