#include <iostream>
using namespace std;

void imprimirMatrizPtr(int (*p)[4], int f, int c){
    for(int i = 0 ; i <f; ++i ){
        for (int j = 0; j < c; ++j){
            cout << *(*(p + i) + j) << " ";
        }
        cout << endl; 
    }
}

int main(){
    int matriz[3][4] = {{1,2,3,4}, {5,6,7,8},{9,10,11,12}};
    
    int (*ptr)[4] = matriz;
    //int (*ptr)[4] es un puntero a un arreglo de 4 elementos
    //int *ptr[4] es un arreglo 4 de punteros a enteros
    imprimirMatrizPtr(ptr,3,4);

    return 0; 
}