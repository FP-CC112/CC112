#include <iostream>
#include <iomanip>// setw()
using namespace std;

int matrizRec(int arr[30][30], int n, int i, int j){
    if(j < 0 || j > i)
        return 0;

    if(j == 0 && i == 0)
        return 1;

    arr[i][j] = matrizRec(arr,n, i-1, j-1)+ matrizRec(arr,n, i-1, j);

    return arr[i][j];
    
}

void imprimir(int a[30][30], int n){
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            cout <<setw(2)  <<matrizRec(a,n,i,j) << " ";
        }
        cout << endl;
    }
}

int main(){
    int arr[30][30];
    int n;

    cout << "Ingrese el valor de n: ";
    cin >> n;

    imprimir(arr,n);



    return 0; 
}