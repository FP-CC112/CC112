/*Escriba un programa que defina una estructura Persona y cree una instancia de ella. Usa
un puntero a la estructura para asignar valores a sus campos y luego muestra los valores
usando el puntero*/

#include <iostream>
using namespace std;

struct Persona {
    int edad;
    string nombre;
};

void inicializarPersona(Persona *p) {
    //completar
    
        cout << "Ingrese su edad: ";
        cin >> (*p).edad;
        cout << "Ingrese su nombre: ";
        getline(cin, (*p).nombre);
    
}

// NOTACION ALTERNATIVA para punteros a estructuras: operador flecha ->
void mostrarPersona(Persona *p) {
    //completar

        cout << "Edad: " << p->edad <<endl;
        cout << "Nombre: " << p->nombre << endl;
    
}


int main(){
    Persona p;

    Persona *ptrStruct = &p;
    inicializarPersona(ptrStruct);
    mostrarPersona(ptrStruct);


    return 0; 
}