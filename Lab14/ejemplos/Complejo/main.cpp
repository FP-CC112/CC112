#include "Complejo.h"
#include <iostream>
using namespace std;

int main(){
    Complejo c1(1, 0);
    Complejo c2(0, 1);
    Complejo c3(2, 2);

    Complejo resultado = c1.sumar(c2); //   c1 + c2 ?  
    resultado.mostrar();
    
    Complejo resultado1 = c1.sumar(c2).sumar(c3); // c1 + c2 + c3 ?
    resultado1.mostrar();
    
    Complejo resultado2 = c1.multiplicar(c2); //    c1 * c2  
    resultado2.mostrar();
   
    // ERROR
    //cout << resultado <<endl; // Debemos decirle como imprimir tus tipos de datos (Complejo)

    return 0; 
}

// Sobrecarga de operadores ?
// Permite redefinir el comportamiento de algunos 
// operadores integrados
// Es una forma de Polimorfismo en tiempo de compilación

