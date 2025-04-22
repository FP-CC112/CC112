// Escribir una Función para calcular el máximo de dos números enteros Nombre a la
// función maximo, ésta debe recibir dos números enteros como parámetros y devolver el
// mayor de los dos.
#include <iostream>
using namespace std;
void maximo(int A , int B){
    if (A>B){
        cout <<"El mayor es: "<< A;
    }else if (B>A){
        cout <<"El mayor es: "<<B;
    }
}
int main(){
    int A , B;
    cout <<"Ingrese dos numeros para calcular el mayor: ";cin >>A ;cin >> B;
    maximo(A , B);
    return 0;
}
