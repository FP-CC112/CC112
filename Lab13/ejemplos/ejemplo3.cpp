/***************************************************************
Programa para declarar, definir y usar una clase que genera
un número entero aleatorio entre cualquier rango dado definido en
el constructor de la clase.
***************************************************************/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

/***************************************************************
Definición de clase (Declaración de datos de miembros y
funciones miembros) para un generador de números aleatorios.
***************************************************************/
class RandomInteger {
private:
    int low; // miembro de datos
    int high; // miembro de datos
    int value; // miembro de datos
public:
    RandomInteger (int low, int high); // Constructor
    ~RandomInteger (); // Destructor
    // Evitando  un constructor de copia sintetizado >C++11
    RandomInteger (const RandomInteger& random) = delete;
    void print () const; // función miembro accesorAccessor
};

/***************************************************************
Definiciones funciones miembro constructor, destructor y accesor
para la clase de generador de números aleatorios
***************************************************************/
// Constructor
RandomInteger :: RandomInteger (int lw, int hh) :low (lw), high (hh) {
    srand (time (0));
    int temp = rand ();
    value = temp % (high - low + 1) + low;
}
// Destructor
RandomInteger :: ~RandomInteger () {
    cout << "Destruyendo objetos" << endl;
}
// funciónmiembro accesor
void RandomInteger :: print () const {
    cout << value << endl;
}
/***************************************************************
Aplicación para crear instancias de objetos de números aleatorios
e imprimir el valor del número aleatorio
***************************************************************/
int main ( ) {
    // Generando un entero aleatorio entre 100 y 200
    RandomInteger r1 (100, 200);
    cout << "Numero aleatorio entre 100 y 200: ";
    r1.print();

    // Generando un entero aleatorio entre 400 y 600
    RandomInteger r2 (400, 600);
    cout << "Numero aleatorio entre 400 y 600: ";
    r2.print();

    // Generando un entero aleatorio entre 400 y 600 ;
    RandomInteger r3 (1500, 2000);
    cout << "Numero aleatorio entre 1500 y 2000: ";
    r3.print ();
    return 0;
}