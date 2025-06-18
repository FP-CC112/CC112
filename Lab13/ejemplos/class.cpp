#include <iostream>
using namespace std;

// Definir una clase NO crea variables ni ocupa memoria (no crea ningún objeto)
// "Crea un molde del objeto cuando se construyan"


class Circle {
    double radius; // debe inicializarse ?!
    int &ref;      // debe inicializarse ?!

public:
    // Constructor que usa lista de inicialización
    Circle(int &r) : radius(5.3), ref(r) {
        cout << "Constructor ejecutado" << endl;
    }
    Circle(double s, int &r) : radius(s), ref(r) {
        cout << "Constructor ejecutado" << endl;
    }


    void print() {
        cout << "radius = " << radius << ", ref = " << ref << endl;
    }
};

int main() {
    int x = 5;
    Circle c(x);  // Se crea un objeto  Circle, con x como referencia

    Circle d(4.5,x);
    c.print();

    return 0;
}
