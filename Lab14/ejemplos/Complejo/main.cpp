#include "Complejo.h"

int main(){
    Complejo c1(1, 0);
    Complejo c2(0, 1);
    Complejo c3(2, 2);

    Complejo resultado = c1 + c2; //   c1 + c2 ?  
    cout << resultado << endl;
    
    Complejo resultado1 = c1 + c2 + c3; // c1 + c2 + c3 ?
    cout << resultado1 << endl;
    
    
    Complejo resultado2 = c1 * c2; //    c1 * c2  
    cout << resultado2 << endl;
    
    return 0; 
}

// Sobrecarga de operadores 
// Permite redefinir el comportamiento de algunos 
// operadores integrados
// Es una forma de Polimorfismo en tiempo de compilación

