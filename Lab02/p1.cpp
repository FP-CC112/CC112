// Implementa una función en C++ que reciba un arreglo de enteros y lo ordene mediante
// el algoritmo de burbuja. Luego, modifica la función para que use recursividad

#include <iostream>
using namespace std;

void intercambio(int &a, int &b){
    int x=a;
    a = b;
    b = x;
}


void ordBurbuja(int arreglo[], int n){
    if (n == 1){
        return;
    }
    //while(true){
    int contador=0;
    for(int j=0; j < n - 1; j++){
        if(arreglo[j]<arreglo[j+1]){
            swap(arreglo[j],arreglo[j+1]);
            contador++;
        }
    }
    if(contador==0){
        return;
    }

    ordBurbuja(arreglo, n-1);

    //}
}


void imprimirArreglo(int arreglo[], int n){
    cout<<"[";
    for(int i=0; i < n; i++){
        cout<<arreglo[i];
    }
    cout<<"]"<<endl;
}

int main(){
    int arreglo[]={1,7,2,8,5, 6, 0};

    int n = sizeof(arreglo)/sizeof(arreglo[0]);

    ordBurbuja(arreglo,n);
    imprimirArreglo(arreglo, n);
    return 0; 
}