/*
Defina una clase con 
dos variables enteras privadas y
dos funciones miembro: 
una para ingresar los valores desde el teclado y
otra para mostrarlos en pantalla
*/

#include <iostream>
using namespace std;

//seccion 1
class Demo {
private:
    int numero1;
    int numero2;

public:
    void ingresarDatos(int, int);
    void mostrarDatos();
};

//seccion 2: Definimos las funciones miembro
void Demo::ingresarDatos(int a, int b) {
    cout << "Ingrese dos numeros enteros: ";
    cin >> a >> b;
    numero1 = a;
    numero2 = b;

 }
void Demo::mostrarDatos() {
    cout << "numero1= " << numero1 << endl;
    cout << "numero2= " << numero2 << endl;
}

int main(){
    Demo d1; //instanciamos un objeto
    d1.ingresarDatos(10,40);
    d1.mostrarDatos();

    cout << "El tamaño de d1 es: " << sizeof(d1) <<endl;  //Calcula el damaño en bytes del objeto

    return 0; 
}
