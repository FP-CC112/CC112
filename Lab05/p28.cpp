/*Puntero a función: 
Escribe dos funciones sumar y restar, y un puntero 
int (*operacion)(int, int);. 
Pide al usuario elegir qué operación aplicar a dos
números y llama a la función 
usando el puntero*/

#include <iostream>
using namespace std;

int sumar(int a, int b){ // "El nombre de una funcion es un puntero al 
                           //inicio de su codigo";
    return a + b;
}

int restar(int a, int b){
    return a - b;
}

int main(){
    int (*operacion)(int, int);
    int opcion, n1 = 2, n2 = 10;

    cout << "Elija una opcion: 1.suma, 2. Resta: ";
    cin >> opcion;
    if(opcion == 1){
        operacion = &sumar;
    }else if (opcion == 2){
        operacion = &restar;
    }else{
        cout << "Opcion invalida";
    }

    int res = operacion(n1,n2);
    cout << "Resultado: " << res <<endl;


    return 0; 
}