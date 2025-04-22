// Escribe dos funciones para calcular el n-ésimo número en la secuencia de Fibonacci:
// una usando un bucle (fibonacciIterativo) y otra usando recursión (fibonacciRecursivo).
// Discute el rendimiento y posibles optimizaciones.

#include <iostream>
using namespace std;

int fibIterativo(int n){
    int a=0, b =1;
     int c;
    for(int i=0; i<=n;i++){
     c=a+b;
     a = b;
     b=c;
  }
   return c;
}

int fibRecursivo(int n){
    //caso base
    if(n == 0 || n == 1)
        return n;
    
    //caso recursivo
    return fibRecursivo(n-1) + fibRecursivo(n-2);
 
}

int main(){ 
    int n;
    cout<<"Digite el numero de la secuencia de fibonacci que desea";
    cin>>n;

    int resultado = fibIterativo(n);

    //cout << "EL"

    return 0; 
}