#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

struct Persona {
    int id;
    char nombre[30];
    int edad;
};

void crearArchivo() {
    ofstream f("personas.dat", ios::binary | ios::trunc);

    Persona personas[4] = {
        {1, "Ana", 25},
        {2, "Luis", 30},
        {3, "Carlos", 40},
        {4, "Marta", 50}
    };

    for (Persona&p : personas) {
        f.write(reinterpret_cast<char*>(&p), sizeof(Persona));
    }

    f.close();
    cout << "Archivo creado con registros iniciales.\n";
}


void modificarTercerRegistro() {
    fstream f("personas.dat", ios::in | ios::out | ios::binary);
    if (!f.is_open()) {
        cerr << "No se pudo abrir el archivo.\n";
        return;
    }

    Persona p;

    // Ir al tercer registro (índice 2)
    f.seekg(2 * sizeof(Persona), ios::beg);
    f.read(reinterpret_cast<char*>(&p), sizeof(Persona));

    cout << "Antes: ID=" << p.id << ", Nombre=" << p.nombre << ", Edad=" << p.edad << '\n';

    // Modificar
    p.edad = 56;

    // Volver al mismo lugar para escribir
    f.seekp(2 * sizeof(Persona), ios::beg);
    f.write(reinterpret_cast<const char*>(&p), sizeof(Persona));

    f.close();
    cout << "Tercer registro modificado.\n";
}

void mostrarArchivo() {
    ifstream f("personas.dat", ios::binary);
    Persona p;
    int i = 1;
    while (f.read(reinterpret_cast<char*>(&p), sizeof(Persona))) {
        cout << "Registro " << i++ << ": ID=" << p.id << ", Nombre=" << p.nombre << ", Edad=" << p.edad << '\n';
    }
    f.close();
}




int main() {
    crearArchivo();              // Inicializamos el archivo con 4 personas
    modificarTercerRegistro();   // Cambiamos la edad de Carlos
    mostrarArchivo(); 

    return 0;
}
