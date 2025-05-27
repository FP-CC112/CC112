/*Escribe un programa que defina una estructura Persona con los campos nombre (cadena
de caracteres) y edad (entero). Crea una instancia de Persona, asigna valores a sus
campos y muestra estos valores por pantalla.*/

#include <iostream>
#include <cstring>
using namespace std;

struct Persona {
    int edad;
    char nombre[30];
    string apellido;
};


void inicializarPersona(Persona p[], int n) {
    //completar
    for (int i = 0; i <n; ++i) {
        cout << "Ingrese su edad: ";
        cin >> p[i].edad;
        cin.ignore();
        cout << "Ingrese su nombre: ";
        cin.getline(p[i].nombre,30);

        cout << "Ingrese su apellido: ";
        getline(cin, p[i].apellido);

    }
    
}

void mostrarPersona(Persona p[], int n) {
    //completar
    for (int i = 0; i <n; ++i) {
        cout << "Edad: " << p[i].edad <<endl;
        cout << "Nombre: " << p[i].nombre << endl;
        cout << "Apellido: " << p[i].apellido <<endl;
    }
    
}

int main(){
    Persona p = {45, "Juan", "Perez"};

    Persona p1[3];

    Persona p2;

    inicializarPersona(p1, 3);
    mostrarPersona(p1, 3);

    //Metodo 1 Solicitar al usuario

    //Metodo 2 Declarar e inicializar

    //Metodo 3 Inicializar cada miembro
    strcpy(p.nombre, "Andres");
    p.edad = 45;


    return 0; 
}