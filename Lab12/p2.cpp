#include <iostream>
#include <fstream>
using namespace std;

int main(){
    //Paso 1: Instanciar el objeto para escritura
    ofstream wfile;

    //Paso 2: Conectar el objeto al destino
    wfile.open("escribirArchivo.txt");

    //Paso 3: Escribir los datos en el destino
    if(!wfile.is_open()) {
        cerr << "Error al abrir el archivo";    
    } else {
        string linea;
        cout << "Ingrese una cadena de texto" <<endl;
        getline(cin,linea);

        wfile << linea << endl; // Escribe en el archivo
       cout << "Se escribió en el archivo de forma correcta";
    }

    //Paso 4: Desconectar del destino, buena práctica
    wfile.close();

    //Paso 5:  El sistema destruye el stream

    ofstream wfile1;
    wfile1.open("escribirArchivo.txt");
    string linea1;
    cout << "Ingrese una cadena de texto" <<endl;
    getline(cin,linea1);

    wfile1 << linea1 << endl; // Escribe en el archivo
    cout << "Se escribió en la segunda linea" << endl; 




    return 0; 
}