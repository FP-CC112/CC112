#include<iostream>

using namespace std;

class Persona {
protected:
    char nombre[40];
    int edad;
public:
    void cargarDatosPersonales();
    void imprimirDatosPersonales();
};

class Empleado : public Persona {
private:
    float sueldo;
public:
    void cargarSueldo();
    void imprimirSueldo();
};


void Persona::cargarDatosPersonales() {
    cout << "Ingrese nombre:";
    cin.getline(nombre, 40);
    cout << "Ingrese edad:";
    cin >> edad;
    cin.get();
}

void Persona::imprimirDatosPersonales() {
    cout << "Nombre:"<<nombre<<"\n";
    cout << "Edad:" << edad << "\n";
}


void Empleado::cargarSueldo() {
    cout << "Ingrese sueldo:";
    cin >> sueldo;
}

void Empleado::imprimirSueldo() {
    cout << "Sueldo:" << sueldo << "\n";
}


int main() {
    Persona persona1;
    persona1.cargarDatosPersonales();
    persona1.imprimirDatosPersonales();

    Empleado empleado1;
    empleado1.cargarDatosPersonales();
    empleado1.cargarSueldo();
    empleado1.imprimirDatosPersonales();
    empleado1.imprimirSueldo();
    return 0;
}