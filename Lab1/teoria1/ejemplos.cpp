// #include <iostream>
// using namespace std;

// //SOBRECARGA DE FUNCIONES
// void miFuncion(){
//     cout << "Funcion sin parametros" <<endl;
// }

// void miFuncion(int a){
//     cout << "Funcion con parametro" << endl;
// }

// //FUNCIONES CON PARAMETROS POR DEFECTO
// void paramDefecto(int a = 1){
//     cout << "El valor es " << a <<endl;
// }


// int main(){

//     miFuncion();

//     miFuncion(6);

//     paramDefecto();
//     paramDefecto(45);

//     return 0; 
// }



// Implementar una función que sume una lista de números proporcionados
// como argumentos de línea de comandos al ejecutar el programa. 
// El programa debe sumar todos los números ingresados y mostrar el resultado.


// #include <iostream>
// using namespace std;









// int main(int argc, char* argv[]){
//     int suma = 0;
//     for(int i=1; i<argc; i++){
//         suma=suma + atoi(argv[i]);
//     }
//     cout<<"el resultado es: "<<suma<<endl;
//     return 0; 
// }





// #include <iostream>
// using namespace std;

// const int TAM = 6;

// void imprimirArreglo(int vector[]){
//     for(int i = 0; i < 6; i++){
//         cout << vector[i] << " ";    
//     }

// }

// int main(){
//     int A[TAM] = {2,8,6,4,3,5};

//     //llamada
//     imprimirArreglo(A);
    
    
//         return 0; 
// }

// Implemente un sistema de inicio de sesión donde un usuario (con usuario y contraseña)
//  solo tiene tres intentos
//  antes de que la cuenta se bloquee temporalmente. (Restricción: No use  variables globales)
#include <iostream>
using namespace std;

bool validarCredenciales(string usuario, string contrasena){
    static int conFallos  = 0;
    string USER_VALID = "admin";
    string PASSWORD_VALID = "123";

    if(user==USER_VALID && contrasena==PASSWORD_VALID){
        cout<<"ingreso con éxito"<<endl;
        return true;
    }
    else{
        cout<<"intente de nuevo"<<endl;
        conFallos++;
    }
    if(conFallos==3){
        cout<<"se cerró el sistema";
        return false;
    }
}


int main(){
    string 
    cout<<"ingrese sus credenciales: ";

    return 0; 
}
