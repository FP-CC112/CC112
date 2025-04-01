#include <iostream>
#include <cstdlib> //para system()
#include <string>
using namespace std;


int main(int argc, char* argv[]) {
    if (argc < 2) {
        cout << "Modo de uso: mkdir <nombre_carpeta>" << endl;
        return 1;
    }
    string carpeta = argv[1];
    string comando = "mkdir " + carpeta;
    system(comando.c_str());  // espera un const char* 
    //Ejecuta el comando en la terminal
    return 0;
}

//int main(int argc, char* argv[]);

