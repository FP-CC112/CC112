/*Escriba un programa que defina una estructura Persona y una función crearPersona que
reciba un nombre y una edad como argumentos, cree una Persona con estos valores y
la retorne. En la función principal main, llama a esta función y muestra los datos de la
Persona retornada*/

#include <iostream>
using namespace std;

struct Persona {
    string nombre;
    int edad;
};

// Retorno de estructuras
Persona crearpersona(string nombre, int edad) {
    Persona p;
    p.nombre = nombre;
    p.edad = edad;

    return  p;
}

int main(){

    return 0; 
}