/*Una  frase  se  considera  palíndromo  si  invertida  sin  considerar  los  espacios  es  igual  a  la 
original sin considerar los espacios y sin tener en cuenta acentos. Los siguientes son ejemplos de frases 
palíndromas: "dabale arroz a la zorra el abad "; "a ti no bonita"; “ animo Romina ” ; “La ruta nos 
aporto otro paso natural ” ; “Se verla al reves”. Utilizando recursión escriba un programa en C++ que 
determine si una frase es o no un palíndromo.   
Sugerencias:   
 Para comprobar si un carácter es de tipo espacio, use: la función isspace().  
 Para convertir a minúsculas use la función tolower().*/


#include <iostream>
using namespace std;

//funcion recursiva
bool esPalindroma(string s, int inicio, int fin){
    //caso base
    if (inicio >= fin)
        return true;

    //descartando espacios en blanco
    while( inicio < fin && isspace(s[inicio])){
        inicio++;
    }

    while( inicio < fin && isspace(s[fin])){
        fin--;
    }
    // caso recursivo

    if(tolower(s[inicio]) == tolower(s[fin])){
        return esPalindroma(s, inicio + 1, fin - 1);
    }

    return false;

}


void test(){
    string s1 = "dabale arroz a la zorra el abad ";
    string s2 = "a ti no bonita";
    string s3 = " animo Romina ";
    string s4 = "La ruta nos aporto otro paso natural ";
    string s5 = "Se verla al reves";
    string s6 = "Hola Mundo";

    string ss[6] = {s1, s2, s3, s4, s5, s6};

    cout << "Casos de prueba: " <<endl;

    for(int i = 0; i < 6; ++i){
        if(esPalindroma(ss[i],0 , ss[i].size() - 1 )){
            cout << ss[i] << ": Es palindroma" <<endl;
        }else{
            cout << ss[i] << ": No es Palindroma" <<endl;
        }
    }



}

int main(){

    test();

    return 0; 
}