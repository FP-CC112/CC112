/*Escribe una funci�n que reciba
una cadena y cambie todas las
letras min�sculas por may�sculas
usando punteros*/

#include <iostream>
using namespace std;

void convertiraMayusculas(char* cadena){
    while (*cadena!='\0'){
    	//if(islower(*cadena)){
        //     *cadena = toupper(*cadena);
		//  }
        if (*cadena >= 'a' && *cadena <= 'z'){ 
            *cadena -= 32; // Convertir a may�scula ASCII
        }
        cadena++;
    }
    
}
int main(){
    char cadena[]="hola mundo";
    convertiraMayusculas(cadena);
    cout << "Cadena en may�sculas: " << cadena << endl;
    return 0;
}
