/*La función de partición tomará el primer elemento del arreglo como el pivote. Todos
los elementos menores que el pivote deben ir a la izquierda del pivote. Todos los ele-
mentos mayores que el pivote deben ir a la derecha del pivote. El pivote debe estar en
su posición final (donde todos los elementos menores están a su izquierda y todos los
mayores están a su derecha). Ejemplo:
Entrada:
Arreglo: [12, 9, 3, 5, 2, 8, 7, 1]
Índice de inicio: 0
Índice de fin: 7
Salida:
Arreglo después de partición: [1, 9, 3, 5, 2, 8, 7, 12]
Índice del pivote: 7*/

#include <iostream>
using namespace std;

int particion(int arr[], int inicio, int fin){
    int pivote = arr[inicio]; //pivote es el primer elemento
    int i = inicio + 1;
    for (int j = inicio + 1; j <= fin; j++){
        if(arr[j] < pivote){
            swap(arr[i], arr[j]);
            i++;
        }
    }
    //colocar el pivote en su posicion correcta
    swap(arr[inicio], arr[i-1]);

    return i-1;
}

void imprimirArreglo(int a[], int n){
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}



void quickSort(int arr[], int inicio, int fin){
    int pivote;
    if(inicio < final){
        pivote = particion(arr, inicio,fin);
        quickSort(arr, inicio, pivote -1);
        quickSort(arr, pivote +1, fin);

    }
}

int main(){
    int arr[] = {12, 9, 3, 5, 2, 8, 7, 1};
    int ind = particion(arr, 0,7);
    imprimirArreglo(arr,8);

    cout << "El indice del pivote es " << ind;



    return 0; 
}