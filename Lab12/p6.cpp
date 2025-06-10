/*Crea un programa que lea un archivo de texto y 
cuente el número de palabras*/

#include <iostream>
#include <fstream>
#include <sstream>
#include <cstring>
using namespace std;

int main(){




    ifstream entrada("archivo6.txt");

    const int MAX = 100;

    char linea[MAX];

    int cont = 0;

    while(entrada.getline(linea,MAX)) {
        char *palabra = strtok(linea," \n");
        while(palabra != nullptr){
            cont++;
            palabra = strtok(nullptr, " \n");
        }
    }



    // string linea, palabra;
    // int cont = 0;

    // while(getline(entrada,linea)) {
    //     stringstream ss(linea);
    //     while(ss>>palabra){
    //         cont++;
    //     }
    // }

    cout << "Numero de palabras: " <<cont << endl;

    entrada.close();

    return 0; 
}