/*Sumar dos números usando una función con punteros: 
Escribe una función sumar(int* a, int* b, int* resultado) 
que reciba dos punteros 
a enteros y almacene la suma en la dirección
apuntada por resultado*/

#include <iostream>
using namespace std;

void sumar(int* a, int* b, int* resultado){
    *resultado=*a+*b;
} 

int main(){
    int a=10, b=20, suma;
    sumar(&a,&b,&suma);
    cout << "La suma es: " << suma << endl;
    return 0; 
}