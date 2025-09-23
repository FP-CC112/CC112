/*Mostrar la dirección y el contenido de una variable:  
Declara un puntero int* p; y haz que apunte a x.  
Muestra en pantalla la dirección de memoria de x 
el contenido de esa dirección 
usando el puntero. */

#include <iostream>
using namespace std;

int main(){
    float x = 10.8;
    float* p = &x;
    cout << "La dirección de x es: " << p <<endl;
    cout << "El valor de x es: " << *p <<endl;

    //modificando el valor de x mediante el puntero p
    *p = 20.6;
    cout << x << endl;

    return 0; 
}


