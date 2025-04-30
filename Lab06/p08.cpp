/*
cadena1 = "hola";
cadena2 = "holas";
cadena1 < cadena2
*/

#include <iostream>
#include <cstring> //strcmp(cad1,cad2);
using namespace std;

int miStrcmp(char* a, char* b){
	while(*a != '\0' && *b != '\0'){
		if(*a != *b){
			return *a - *b; // <0 or > 0
		}
		++a;
		++b;
	}
	return *a - *b; // < 0 or ==0 or > 0
}


int main(){
	
	char c1[] = "Fundamentos";
	char c2[] = "Fundament";
	
	cout << miStrcmp(c1,c2) <<endl;
	
	return 0;
}
