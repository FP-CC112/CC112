#include <iostream>
using namespace std;


void ordSeleccion(int arr[], int n){
    for(int i = 0; i < n - 1; ++i){
        int indMin = i;
        for(int j = i + 1; j < n; ++j){
            if(arr[j] < arr[indMin]){
                indMin = j;
            }
        }
        swap(arr[i], arr[indMin]);
    }
}














void selectionSort(int arr[],int inic, int n) {
    if (inic >= n - 1)
        return;

    //for (int i = 0; i < n - 1; i++) {
        int minIdx = inic;
        for (int j = inic + 1; j < n; j++) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        std::swap(arr[inic], arr[minIdx]);
    //}


    selectionSort(arr,inic+1,n);

}


void imprimirArray(int arr[], int n){
    for(int i = 0; i < n; ++i ){
            cout << arr[i] << " ";
    }
    cout << endl;
}



int main(){
    int arr[] = {1,2,9,7,6,3,-1};
    int n = sizeof(arr)/sizeof(arr[0]);

    ordSeleccion(arr,n); //selectionSort(arr,0,n);

    imprimirArray(arr,n);

    return 0; 
}