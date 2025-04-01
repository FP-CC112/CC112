// Sesión 1: Ejemplos

// // Sobrecarga de funciones
// #include <iostream>
// using namespace std;
// void miFuncion(){
//     cout <<"Funcion sin parametro";
// }

// void miFuncion(int a){
//     cout << " Funcion con parametro";
// }



// int main(){
//     miFuncion();
//     miFuncion(3);

//     return 0; 
// }


// // Parámetros por defecto
// void fDefecto(int a = 1){
//     cout << "el valor de a es: " << a<<endl;
// }

// int main(){
//     fDefecto(); //por defecto a = 1;
//     fDefecto(45);

//      return 0; 
// }

// Implementar una función que sume una lista de números proporcionados
// como argumentos de línea de comandos al ejecutar el programa. 
// El programa debe sumar todos los números ingresados y mostrar el resultado.
// (Uso de main con argumentos) 
// #include <iostream>
// using namespace std;

// int main(int argc, char* argv[]){
//     int suma = 0;
//     for(int i = 1; i < argc; ++i){
//         suma += atoi(argv[i]);
//     }

//     cout << "La suma es: " << suma;
//     return 0; 
// }



// Paso por valor vs paso por referencia
#include <iostream>
using namespace std;

void incrementarPorValor(int x) {
    x++;
    cout <<"El valor de a en la función es: " << x <<endl; 
}

void incrementarPorReferencia(int &x) {
    x++;
    cout <<"El valor de a en la función es: " << x <<endl; 
}
    

int main(){

    int a = 4;

    cout << "Paso por valor: \n";
    cout << "El valor de a antes de llamar a la funcion es:" <<a <<endl;
    incrementarPorValor(a);
    cout << "El valor de a despues de llamar a la funcion es:" <<a <<endl;
    cout <<"\n\n";
    cout << "Paso por referencia: \n";
    cout << "El valor de a antes de llamar a la funcion es:" <<a <<endl;
    incrementarPorReferencia(a);
    cout << "El valor de a despues de llamar a la funcion es:" <<a <<endl;



    return 0; 
}




// Imprimiendo un arreglo
#include <iostream>
using namespace std;

const int TAM = 11;
int i = 0;
void imprimirArreglo(int vector[TAM]){
    for(i=0; i<TAM; i++){
        cout<<vector[i]<< " ";
    }
    cout << i <<endl;
}


int main(){
    int vct[TAM]={0,1,2,3,4,5,6,7,8,9,10};
    imprimirArreglo(vct);
    return 0; 
}



// Tipos de recursión
#include <iostream>
using namespace std;


// Recursividad Directa
int factorial(int n){
    //caso base:
    if(n< 1)
        return 1;

     //caso recursivo   
    return n * factorial(n-1);
}

// Tail Recursion
int factorialTR(int n, int ac = 1){ //parametro ac = 1 por defecto
    //caso base:
    if(n< 1)
        return ac;

     //caso recursivo   
    return factorialTR(n-1, n * ac);
}


// Recursividad indirecta
int factAux(int); //es necesario el prototipo!
int fact(int n){
    if (n == 0)
        return 1;

    return n * factAux(n-1);
}
int factAux(int n){
    if (n == 0)
        return 1;

    return n * fact(n-1);
}

int main(){

    cout << factorial(5); // Recusión simple
    cout << "\n";
    cout << factorialTR(5); // Recursión final 
    cout << "\n";
    cout << fact(5); // Recursión indirecta

    return 0; 
}


/*
Autor: Américo Chulluncuy R
Date: 26/03/25
*/

// #include <iostream>
// using namespace std;


// void HanoiRec(int n, string origen, string auxiliar, string destino){
//     if (n == 1){
//         cout << "Mover disco de" << origen <<"->" << "destino" <<end;
//     }
    
// }



// int main(){
//     return 0;|
// }

 
// Escribe un programa para encontrar la primera letra mayúscula en una cadena usando recursión.
// Input: Ingresa una cadena que puede contener o no letras mayúsculas
// Output: La primera letra mayúscula que aparece en la cadena o un mensaje que indique que no se encontró letras mayúsculas

// #include <iostream>
// using namespace std;

// //Versión iterativa
// void esLetra(string s){
//     for(int i = 0; i < s.size(); ++i){
//         if(isalpha(s[i]) && isupper(s[i])){
//             cout << " La primera letra mayuscula que aparece en la cadena " << s  << " es: "  << s[i] <<endl;
//             break;
//         }
//     }
// }

// void esLetraRec(string s, int izq,int der){
//     //Caso base
//     if(izq > der)
//         return;
//     if(isalpha(s[izq]) && (s[izq] == toupper(s[izq]))){
//         cout << " The first capital letter appears in the string " << s  << " is: "  << s[izq] <<endl;
//         return;
//     }
    
//     esLetraRec(s,izq+1, der);
    
// }


// char esMayusRec(string s){
//     int i = 0;

//     if (i >= s.length())
//         return '\0';

//     if(isupper(s[i]) && isalpha(s[i])){
//         return s[i];
//     }

//     i = i+1;
//     return  esMayusRec(s);
    
// }


// int main(){

//     string s = "Haola MunD#";
//     //esLetra(s);

//     esLetraRec(s,0, s.length());

//     char resultado = esMayusRec(s);

//     if (resultado == '\0'){
//         cout << "No contiene mayusculas"<<endl;
//     }else{
//         cout << "La primera mayucula encontrada es " << resultado <<endl;
//     }

//     return 0; 
// }