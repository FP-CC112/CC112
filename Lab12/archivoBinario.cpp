#include <iostream>
#include <fstream>
using namespace std;

struct Puntaje {
    char nombre[30];
    int puntos;
};

void guardarPuntajes() {
    ofstream archivo("puntajes.dat", ios::binary | ios::out);

    Puntaje jugadores[] = {
        {"Juan", 1300},
        {"victor", 1500},
        {"pedro", 1250}
    };

    for (const auto & jugador: jugadores) {
        archivo.write((char*)&jugador,sizeof(Puntaje)); //|    |    |     | seekp() tellg()
    }

    archivo.close();
    cout << "Puntajes guardados en un archivo binario" <<endl;
}

void leerPuntajes() {
    ifstream archivo("puntajes.dat", ios::binary | ios::in);

    Puntaje jugador;

    cout << "PUNTAJES REGISTRADOS\n";

    while(archivo.read((char*)&jugador,sizeof(Puntaje))) {
        cout << "Jugador:  " << jugador.nombre << " Puntos: " << jugador.puntos << endl;
    }
    archivo.close();
}





int main(){

    guardarPuntajes();
    leerPuntajes();

    return 0; 
}