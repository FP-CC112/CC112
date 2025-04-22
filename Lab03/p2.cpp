#include <iostream>
using namespace std;

int busquedaBinaria(int array[], int n, int x){
    int inicio=0;
    int fin=n-1;
    int medio;

    while(inicio <= fin){
        medio = inicio+(fin-inicio)/2;
        if(array[medio]==x){
            return medio;
        } else if (array[medio]< x){
            inicio = medio + 1;
        } else {
            fin = medio - 1;
        }
    }

    return -1;
}

void ingresarDatos(int par[], int impar[], int n){
    cout << "Ingrese los n elementos:\n";
    for(int i = 0; i < n; ++i){
        if(i % 2 == 0)
            cin >> par[i/2];
        else
            cin >> impar[i/2];
    }
}




int main(){

    // 4 10 7 9 15 8 24 6 35 4 40 3 50 2 55 -5      n = 16

    int arr[30];
    int par[15];
    int impar[15];
    int n;
    int x;

    cout << "Ingrese el valor de n: ";
    cin >> n;

    ingresarDatos(par, impar, n);

    cout << "Ingrese el valor a buscar";
    cin >> x;

    int  rpar = busquedaBinaria(par,n/2 + n%2 ,x);
    int rimpar = busquedaBinaria(impar, n/2 ,x);

    if(rpar != -1){
        cout << "El elemento se encuentra en el indice " << rpar*2 <<endl;
    }else if (rimpar != -1){
        cout << "El elemento se encuentra en el indice " << rimpar*2+1 <<endl;
    }else{
        cout << "El elemento no se encuentra en el arreglo";
    }

    return 0; 
}