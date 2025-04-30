#include <iostream>
using namespace std;

 void letraE(char* cadena, char letra){
     char* destino = cadena;
     while(*cadena){
         if(*cadena != letra){
             *destino = *cadena;
             destino++;
         }
         cadena++;
     }
     *destino = '\0';
 }
 int main(){
     char let;
     char cad1[]= "hola mundo";
     cout<<"Letra a eliminar:";
     cin>> let;
     letraE(cad1,let);
     cout<< cad1;

     return 0;
 }