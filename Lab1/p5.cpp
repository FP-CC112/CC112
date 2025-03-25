// Escribe una función llamada invertirCadena que reciba una cadena como parámetro y
// devuelva la cadena invertida
#include <iostream>
#include <cstring>
using namespace std;

void invertir(char cadena[], int n){
    char aux;
    for(int i=0; i<n/2; i++){
        aux = cadena[i];
        cadena[i] = cadena[n-1-i];
        cadena[n-1-i] = aux;
    }
}

void imprimir(char cadena[], int n){
    for(int i=0; i<n; i++){
        cout << cadena[i];
    }
}

int main()
{
	char cadena[20] = "holar";
	cout << "cadena: ";
	imprimir(cadena,strlen(cadena));
	invertir(cadena,strlen(cadena));
	cout << "\ncadena invertida: ";
	imprimir(cadena,strlen(cadena));
	return 0;
}