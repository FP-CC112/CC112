/*
Implementa una función que invierta
 una cadena de caracteres utilizando punteros.
*/
//Implementa una función que invierta una cadena de caracteres utilizando punteros.
//Implementa una funci?n que invierta una cadena de caracteres utilizando punteros.
#include<iostream>
#include <cstring>
using namespace std;

void invCadena(char *arr){
    int n=0;
    for(int i = 0; *(arr+i) != '\0'; ++i){//arr = arr + i
    	n++;
	} //strlen(arr);	
	char* inicio = arr;
	char* fin = arr + n - 1;
	
    while(inicio < fin){      //tama?o de la cadena
        char temp = *inicio;
		*inicio = *fin;
		*fin = temp; 
		 ++inicio;
		 --fin;  
    }
  cout << arr <<endl;
}

int main(){
    char A[] = "Hola mundo";
    invCadena(A);
    //cout<<A;
    return 0;
}

  
