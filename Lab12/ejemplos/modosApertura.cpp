// Uso del modo ios::trunc
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    fstream archivo("test1.txt", ios::in | ios::out | ios::trunc); 

    if (!archivo.is_open()) {
        cerr << "Error al abrir el archivo.\n";
        return 1;
    }

    archivo << "Nuevo texto\n";  // sobreescribe desde el inicio
    
    archivo.seekg(0);// volver al principio para leer ??archivo.seekg(0);

    string linea;
    getline(archivo, linea);
    cout << "Contenido sin trunc: " << linea << endl;

    archivo.close();
    return 0;
}

/*
editar archivo orginal: Texto original
¿Qué sucede?
*/


// modo ate
// El puntero de lectura/escritura está al final
//     streampos posicionFinal = archivo.tellg();
//     cout << "Puntero al abrir (ate): " << posicionFinal << endl;

//     //Volver al principio para escribir
//     archivo.seekp(0);
//     archivo << "EDITADO: ";




