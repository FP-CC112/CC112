/*Escribe una función que ordene alfabéticamente
 los caracteres de una cadena usando el
algoritmo de burbuja (bubble sort) y punteros.
Entrada: clase
Salida: acesl

*/

#include <iostream>
#include <cstring>
using namespace std;

void miSwap(char &c, char &d){
	char temp = c;
	c = d;
	d = temp;
}

void burbujaCadena(char* cadena){
	int n = strlen(cadena);
	
	for(int i = 0; i < n - 1; ++i){
		for(int j = 0; j < n - 1 - i; ++j){
			if(*(cadena + j) > *(cadena + j + 1)){
				miSwap(*(cadena + j),*(cadena + j + 1));
			}
		}
	}
}


int main(){
	
	char cadena[] = "Hola mundo";
	burbujaCadena(cadena);
	
	cout << cadena << endl;
	
	return 0;
}
