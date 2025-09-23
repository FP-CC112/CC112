/*Mostrar los valores de un arreglo al revés usando 
punteros: 
Escribe una función que reciba un puntero
a un arreglo y lo imprima en orden 
inverso sin usar índices. */
#include <iostream>
using namespace std;
void invertirArregloRec(int* arr, int n){
    if( n==0){
        cout<< *(arr+n);
        return;
    }
    
    cout<< *(arr+n-1)<<" ";
    invertirArregloRec(arr, n-1);
}

void InvertirArreglo(int* x, int n){
    for(int i = n-1; i >= 0; --i){
        cout<<*(x+i)<<" ";
    }
    cout<<endl;
    // int* inicio = x;
    // int* fin = x + n - 1;
    // while(inicio <= fin){
    //     cout << fin << " ";
    //     --fin;
    // }
    
}

int main(){
    int arreglo[5]={1,2,3,4,5};
    int n=sizeof(arreglo)/sizeof(arreglo[0]);
    invertirArregloRec(arreglo, n);

    return 0; 
}