// Escribir un programa que reciba la siguiente cadena​
// "123, 45.67, -89, 1001, 23.45, 6789, 12.45"​
// y calcule la suma de todos los números enteros contenidos en ella

#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

int main(){

    char cad[] =  "123, 45.67, -89, 1001, 23.45, 6789, 12.45";
    float suma = 0;
    char *ptr = strtok(cad, ", "); // {'1','2','3', '\0','\0', '4', '5'}...
    while (ptr != nullptr) {
        cout << ptr <<endl;
        if (atof(ptr) == floor (atof(ptr))){
            suma += atof(ptr);
        }
        ptr = strtok(nullptr, ", "); // actualizamos ptr continuando el análisis
                                     // último delimitador ok
    }

    cout << "La suma de enteros es: " << suma <<endl;


    return 0; 
}

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// #include <ctype.h>

// int es_entero(const char *token) {
//     // Verifica si el token representa un número entero válido (positivo o negativo)
//     if (*token == '-' || *token == '+') token++; // Ignorar signo inicial

//     while (*token) {
//         if (!isdigit(*token)) return 0; // Si hay algo que no es dígito, no es entero
//         token++;
//     }

//     return 1;
// }

// int main() {
//     char cad[] = "123, 45.67, -89, 1001, 23.45, 6789, 12.45";
//     char *token;
//     int suma = 0;

//     token = strtok(cad, ", ");

//     while (token != NULL) {
//         // Si no contiene punto y es un número entero
//         if (es_entero(token)){ //   (strchr(token, '.') == NULL && es_entero(token)) {
//             suma += atoi(token);
//         }
//         token = strtok(NULL, ", ");
//     }

//     printf("Suma de enteros: %d\n", suma);

//     return 0;
// }
