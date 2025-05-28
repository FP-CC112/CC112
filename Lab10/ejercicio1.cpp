#include <iostream>
using namespace std;

/*
nodo debe almacenar:
    * Nombre del paciente (cadena dinámica)
    * Edad
    * Motivo de la consulta (cadena dinámica)
    * Puntero al siguiente nodo
*/
struct Paciente {
    char *nombre;
    int edad;
    char* motivoConsulta;
    Paciente* siguiente;
}

Paciente* crearPaciente(char* nombre, int edad, char* motivo) {
    Paciente *p = new Paciente;

    p->nombre = new char[strlen(nombre) + 1];
    strcpy(p->nombre,nombre);
    //p->nombre = nombre; ?

    p->motivoConsulta = new char[strlen(motivo) + 1];
    strcpy(p->motivoConsulta,motivo);


    p-> edad = edad;

    p->siguiente = nullptr;

    return p;

}

void agregarPaciente (Paciente*& inicio, char* nombre, int edad, char* motivo) {
    Paciente* p = crearPaciente(nombre, edad, motivo);
    if (inicio == nullptr) {
        inicio = p;
    } else {
        Paciente* actual = inicio;
        while (actual-> siguiente != nullptr){
            actual = actual->siguiente;
        }
        actual->siguiente = p;
    }
}

// COMPLETAR LAS FUNCIONES PENDIENTES




int main(){

    Pciente *lista = nullptr;

    //menu de opciones

    

    Paciente*p = crearPaciente(nombre, edad, motivo);
    //.................

    delete [] p->nombre;
    delete [] p->motivoConsulta;
    delete p;




    return 0; 
}