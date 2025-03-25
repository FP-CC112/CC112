// Implementa las funciones factorial y factorialRecursivo que tome un número entero n y
// devuelva el factorial de n.

#include <iostream>
using namespace std;

int factorialRecursivo(int n){
    if (n == 0)
        return 1;
    return n*factorialRecursivo(n-1);
}

int main(){

    return 0; 
}