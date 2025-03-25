// Escribe una función llamada suma_naturales que tome un número entero n como 
//parámetro y devuelva la suma de los primeros n números naturales.
#include <iostream>
using namespace std;

int suma_naturales(int m){
    return (m*(m+1))/2;
}

int main(){
    int m;
    cout<<"ingrese un número";
    cin>>m;
    cout<<"la suma de los primeros "<<m<<" es: "<<suma_naturales(m);

    return 0;
}