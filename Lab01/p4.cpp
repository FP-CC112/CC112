// Implementa una función llamada esPrimo que determine si un número dado es primo.
// La función debe devolver un valor booleano

#include <iostream>
#include <cmath>
using namespace std;
bool esPrimo(int n){
    if(n < 2)
        return false;
    
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0){
            return  false;
        }
    }
    return true;
}

int main(){
    int n;
    cout<<"ingrese un valor entero: ";
    cin>>n;
    if(esPrimo(n))
    {
        cout<<"el numero es primo";
    }
    else
    cout<<"el numero no es primo";
    
    return 0; 
}