//Ejemplo de uso de la clase string
//Ejercicio: Resolver usando <cstring>;
#include <iostream>
#include <string>
using namespace std;

void reemplazar(string &cadena, string &cadBuscar, string &cadReemplazar){
    int posicion = 0;
    while(true){
        posicion = cadena.find(cadBuscar, posicion);
        if (posicion == string::npos){
            break;
        }
        cadena.replace(posicion, cadBuscar.length(), cadReemplazar);
        posicion += cadReemplazar.length();  

    }
    
}



int main(){
    string cadBuscar, cadReemplazar, cadena;

    cout << "Ingrese la cadena a buscar: ";
    getline(cin, cadBuscar); //C: cin.getline(cadBucar,30);

    cout << "Ingrese la cadena a reemplazar: ";
    getline(cin, cadReemplazar);

    cout << "Ingrese el texto: ";
    getline(cin, cadena);

    reemplazar(cadena, cadBuscar, cadReemplazar);

    cout << "Texto reemplzado:\n" << cadena << endl;

    return 0;
}
