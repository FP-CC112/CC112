#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
   
    int suma = 0;

    for (int i = 1; i < argc; i++) {
        suma += atoi(argv[i]);  
    }

    cout << "La suma es: " << suma << endl;
    return 0;
}

#include <iostream>
using namespace std;

bool validarCredenciales(string usuario, string contrasena){
    static int contadorFallos = 0;

    string USER_VALID = "admin";
    string PASSWORD_VALID = "123";

    if(usuario == USER_VALID && contrasena == PASSWORD_VALID){
        cout << "Inicio de sesión exitoso ";
        return true;
    }else{
        contadorFallos++;
        cout << "Contraseña incorrecta. Intento " << contadorFallos << " de 3\n";

        if(contadorFallos >= 3){
            cout << "cuenta bloqueada ";
            return true;
        }

        return false;
    }
}


int main(){

    string usuario, contrasena;
    
    while (true) {
        cout << "Usuario: ";
        cin >> usuario;
        cout << "Contraseña: ";
        cin >> contrasena;

        if (validarCredenciales(usuario, contrasena)) {
            break;  // Sale del bucle si inicia sesión correctamente
        }
    }
    
    return 0;

}