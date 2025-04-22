/*ntercambiar valores de dos variables usando punteros: 
Pide al usuario que ingrese dos números. 
Escribe una función intercambiar(int* a, int* b) que 
intercambie sus valores usando punteros.*/

#include <iostream>
using namespace std;

void intercambiar(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int a = 10, b = 20;
    intercambiar(&a, &b);
    cout<<"el valor de a es: "<<a<<endl;
    cout<<"el valor de b es: "<<b<<endl;
    return 0; 
}