#include <iostream>
#include <string>
using namespace std;

void leerEscribir (istream& entrada,ostream& salida) {
    string cad;
    salida << "Ingrese la cadena: ";
    getline(entrada, cad);
    salida <<cad;

}



void toMayusculas(string &str){
    int n = str.length();
    for (int i = 0; i < n; ++i) {
        str[i] = toupper(str[i]);
    }
    cout << str <<endl;
}

int main(){
    string str = "Hola Mundo";
    toMayusculas(str);
    cout << str <<endl;

    leerEscribir(cin,cout);

    


  return 0; 
}