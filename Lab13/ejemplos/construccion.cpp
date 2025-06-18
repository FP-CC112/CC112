#include <iostream>
using namespace std;

// ORDEN DE CONSTRUCCIÓN DE OBJETOS
// 1. Se reserva memoria para todos los miembros del objeto
// 2. Cada miembro se construye en orden (según el orden en la clase, no en la lista de inicialización)
// 3. Después de inicializar todos los miembros, se ejecuta el cuerpo de constructor

// Si no se inicializa una referencia o una const en la lista de inicialización ...ERROR!

#include <iostream>
using namespace std;

class Demo {
    int a;   // Debe inicializarse en la lista de inicialización
    int& b;        // También debe inicializarse en la lista de inicialización (referencia)

public:
    Demo(int value, int& ref) :  a(value), b(ref) {
        cout << "Constructor ejecutado" << endl;
        cout << "Valor de a (const): " << a << endl;
        cout << "Valor de b (referencia): " << b << endl;

        // Modificamos la referencia (afecta a la variable original)
        b = b + 10;
    }
};

int main() {
    int x = 20;

    cout << "Antes de crear Demo, x = " << x << endl;

    Demo obj(5, x);  // a se inicializa con 5, b referencia a x

    cout << "Después de crear Demo, x = " << x << endl;

    return 0;
}


// 1. En la lista de inicialización. el miembro se inicializa directamente
// 2. En el cuerpo del constructor, primero se llama al constructor por defecto
//  del miembro, luego se hace una asignación (- eficiente). Importante en clases con recursos dinámicos
  

// LA LISTA DE INICIALIZACIÓN ES ÚTIL CUANDO:
//a) En miembros const o por referencia que solo pueden ser inicilizados en la lista de inicialización.
//   para evitar doble inicializacion (construcción + asignación)     
//b) En clases derivadas, los constructores base deben ser llamados en la lista de inicialización
/* Ejemplo:
class Figura {
public:
    Figura(int id) {  }
};

class Circle : public Figura {
public:
    Circle(int id) : Figura(id) {  } 
};
*/