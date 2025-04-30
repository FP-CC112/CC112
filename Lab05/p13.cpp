/*Contador de caracteres en un char[] 
Escribe una función que reciba una cadena de
 caracteres  (char[]) y cuente 
cuántas veces aparece un carácter específico.
 Usa solo punteros */

 #include <iostream>
 using namespace std;

 int contarCaracter(char *cadena, char caracter){
   int cont=0;
   char *ptr=cadena;
   

    while(*ptr!='\0'){
       if(*ptr == caracter){
          cont++;
       }
       ptr++;
    }
    cout << cadena <<endl;

    return cont;
 }
 
 int main(){
    char texto[] = "programacion";
    char letra='a';

    int resultado= contarCaracter(texto, letra);
    cout << "El caracter aparece " << resultado << " veces." << endl;
    return 0; 
 }