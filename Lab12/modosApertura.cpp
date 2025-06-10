/*
ios::app   agregar al final sin borrar el contenido
ios::out   Escritura
ios::in    Lectura
ios::trunc Borrar el contenido anterior
ios::binary    archivo binario
*/

//Completar implementando un menu interactivo


#include <iostream>
#include <fstream>
using namespace std;

void escribirDiario(){
    ofstream archivo("diario.txt", ios::out | ios::trunc);
    archivo << "Dia 1, no me fue bien en el examen" <<endl;
    archivo << "Dia 2, Llegué tarde a la clase" <<endl;
}
void agregarEntrada(){
    ofstream archivo("diario.txt", ios::out | ios::app);

    archivo << "Dia 3, Hoy no almorcé" <<endl;
    archivo.close();
    cout << "Se agregó una nueva entrada al diario" <<endl;
}
void leerDiario() {
    ifstream archivo("diario.txt", ios::in);
    string linea;
    while(getline(archivo, linea)){ 
        cout << linea << endl;
    }

    archivo.close();
}

int main(){
    escribirDiario();
    leerDiario();
    agregarEntrada();

    leerDiario();

    return 0; 
}