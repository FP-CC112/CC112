/*Escribe una función que reciba
una cadena y cambie todas las
letras minúsculas por mayúsculas
usando punteros*/

#include <iostream>
using namespace std;

void convertiraMayusculas(char* cadena){
    while (*cadena!='\0'){
    	//if(islower(*cadena)){
        //     *cadena = toupper(*cadena);
		//  }
        if (*cadena >= 'a' && *cadena <= 'z'){ 
            *cadena -= 32; // Convertir a mayúscula ASCII
        }
        cadena++;
    }
    
}
int main(){
    char cadena[]="hola mundo";
    convertiraMayusculas(cadena);
    cout << "Cadena en mayúsculas: " << cadena << endl;
    return 0;
}
