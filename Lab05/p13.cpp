/*Contador de caracteres en un char[] 
Escribe una función que reciba una cadena de
 caracteres  (char[]) y cuente 
cuántas veces aparece un carácter específico.
 Usa solo punteros */

 #include <iostream>
 using namespace std;

// Cuenta cuántas veces aparece un carácter 'c' en la cadena 'str' usando punteros
int contarCaracter(const char* str, char c) {
    int contador = 0;
    while (*str != '\0') {        // Mientras no sea el fin de cadena
        if (*str == c) {
            contador++;
        }
        str++;                   // Avanzar al siguiente carácter
    }
    return contador;
}

int main() {
    const char texto[] = "hola mundo, hola punteros";
    char caracterBuscado = 'o';

    int cantidad = contarCaracter(texto, caracterBuscado);

    cout << "El caracter '" << caracterBuscado << "' aparece " << cantidad << " veces en la cadena." << endl;

    return 0;
}
