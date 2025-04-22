// Implementa una función llamada cuadrado que tome un número entero como paráme-
// tro y devuelva su cuadrado.
#include <iostream>
using namespace std;

void cuadrado(int &a){
    a = a*a;
}

int main (){
    int a;
    cout << "Escriba un número entero:"; cin >> a;

    cuadrado(a);
    cout << "El cuadrado del número es: " << a << endl; 

     return 0;
}