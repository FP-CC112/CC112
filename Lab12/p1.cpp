#include <iostream>
#include <fstream>
using namespace std;


//Abrir un archivo
ifstream & abrirArchivo(const string &nombreArchivo,ifstream &rfile) {
    rfile.open(nombreArchivo);

    if(!rfile.is_open()) {
        cerr << "Error al abrir el archivo";    
    }
    
    return rfile;
    
}

//Procesar el archivo
void procesarArchivo(ifstream & rfile) {
    string linea;
    int count = 0;
    while(getline(rfile,linea)) {
        cout << linea << endl;
        count++;
    }

    cout << "Se procesaron " << count << " lineas." <<endl;
}


int main(){
    string nombreArchivo = "leerArchivo.txt";
    ifstream rfile;

    ifstream &refArchivo = abrirArchivo(nombreArchivo, rfile);
    procesarArchivo(refArchivo);
    refArchivo.close();
    // //Paso 1: Instanciar el objeto
    // ifstream rfile;

    // //Paso 2: Conectar el objeto a la fuente
    // rfile.open("leerArchivo.txt");

    // //Paso 3: Leer datos de la fuente
    // if(!rfile.is_open()) {
    //     cerr << "Error al abrir el archivo";    
    // } else {
    //     string linea;

    //     while(getline(rfile,linea)) {
    //         cout << linea << endl;
    //     }
    // }

    //Paso 4: Desconectar la fuente, buena práctica
    //rfile.close();

    //Paso 5:  El sistema destruye el stream


    return 0; 
}