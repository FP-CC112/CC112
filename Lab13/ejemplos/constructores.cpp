#include <iostream>
using namespace std;

class Punto {
private:
    int x, y; 

public:
    /*
    // Constructor predeterminado
    Punto() {
        x = 0;
        y = 0;
        cout << "Constructor predeterminado llamado." << endl;
    }
    

    // Constructor con parámetros (sobrecarga)
    Punto(int a, int b) {
        x = a;
        y = b;
        cout << "Constructor con parámetros llamado." << endl;
    }

    // Constructor de copia
    Punto(const Punto& otro) {
        x = otro.x;
        y = otro.y;
        cout << "Constructor de copia llamado." << endl;
    }
    */
    
    /*
    // Destructor
    ~Punto() {
        cout << "Destructor llamado para Punto(" << x << ", " << y << ")" << endl;
    }
    */

    // Método para mostrar el punto
    void mostrar() const {
        cout << "Punto(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    // Constructor predeterminado
    Punto p1;
    p1.mostrar(); // Muestra: Punto(0, 0)

    /*
    // Constructor con parámetros
    Punto p2(5, 10);
    p2.mostrar(); // Muestra: Punto(5, 10)

    // Constructor de copia
    Punto p3 = p2;
    p3.mostrar(); // Muestra: Punto(5, 10)
    */

    return 0;
}