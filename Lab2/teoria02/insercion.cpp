#include <iostream>
using namespace std;

void insercion(int arr[], int n) {
    for (int i = 1; i < n; i++) { //primera carta ya esta aordenada
        int clave = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > clave) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = clave;
    }
}

int main(){

    return 0; 
}


