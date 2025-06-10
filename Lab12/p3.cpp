#include <iostream>
#include <fstream>
using namespace std;

// Ejericio: Implmentar con funciones 


int main(){

    ifstream entrada("origen3.txt");  // 1. iftream entrada;   2. entrada.open("origen.txt");
    ofstream salida("destino3.txt");

    string linea;

    while(getline(entrada,linea)) {
        salida << linea << endl;
    }

    entrada.close();
    salida.close();

    return 0; 
}