// Implementar una función recursiva que 
// permita convertir un número decimal a binario

#include <iostream>
using namespace std;


void decimalBinario(int n){
    //caso base
    if(n == 0 || n == 1){
        cout << n;
        return; 
    }

    decimalBinario(n/2);
    cout << n%2;
}

int main(){

    decimalBinario(4);

    return 0; 
}