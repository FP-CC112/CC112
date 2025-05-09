#include "pregunta4.hpp"
#include <iostream>
#include <cstring> // para strlen()
#include <cctype>  // para isalpha(), isalnum(), isspace()
using namespace std;

/*
Un nombre de variable en C++ debe cumplir las siguientes reglas:  
a. Solo puede contener letras (a-z, A-Z), dígitos (0-9) y el símbolo guion bajo ('_'). 
b. Debe comenzar con una letra o guion bajo, no con un número. 
c. No puede contener espacios en blanco. 
d. No puede tener dos guiones bajos seguidos (__).  
 
Escriba una función: EsNombreValido(char *p) que reciba una cadena y devuelva:  
• 0 si el nombre es válido.  
• La posición del primer carácter donde se viola alguna regla, si es inválido.
*/


int EsNombreValido(char *p){
    int len = strlen(p);

    //b. Debe comenzar con una letra o guion bajo, no con un número.
    if (!isalpha(p[0]) && p[0] != '_')
        return 1;

    for (int i = 0; i < len; ++i) {
        char c = p[i];
        
        //a. Solo puede contener letras (a-z, A-Z), dígitos (0-9) y el símbolo guion bajo ('_'). 
        if(!isalnum(c) && c != '_') 
            return i + 1;
        
        //c. No puede contener espacios en blanco. 
        if (isspace(c))
            return i + 1;
        
        // d. No puede tener dos guiones bajos seguidos (__).  
        if (c == '_' && p[i+1] == '_')
            return i +1;     
    }

    return 0; // identificador válido    
}

void resolver_pregunta4() {
    cout << "\nPregunta 4: \n";
    char nombre[100];
    cout << "Ingrese un nombre de variable: ";
    cin.getline(nombre,100);
    int resultado = EsNombreValido(nombre);

    if (resultado == 0) 
        cout << "El nombre de variable es válido.\n";
    else
        cout << "Error en la posición " << resultado << ": " << nombre[resultado-1] << "\n";

    cout << "\n";
}