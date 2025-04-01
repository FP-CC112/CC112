#include <iostream>
using namespace std;

void intercambio(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void bubbleSort(int arr[], int n){
    if (n == 1)
        return;

    //bool indicadora;
    //for(int i = 0; i < n - 1; ++i ){
       bool indicadora = false;
        for(int j = 0; j < n - 1; ++j){
            if(arr[j] > arr[j+1]){
                intercambio(arr[j], arr[j+1]);
                indicadora = true;
            }
        }
        if(!indicadora)
            return;
    //}

    bubbleSort(arr, n-1);
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

    bubbleSort(arr,n);

    imprimirArray(arr,n);

    return 0; 
}