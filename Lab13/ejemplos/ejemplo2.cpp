/***********************
* Uso de clases en POO *
************************/

#include <iostream>
using namespace std;
/**************************************************
1. Definición de la clase: declaramos los datos y *
las funciones miembro (constructor de parámetros, *
predeterminado, copia. Destructor)                 *
***************************************************/
class Circle {
private:
    double radius; //declaración de miembros de datos (variables)
public:
    Circle(double radius); // Constructor de parámetro
    Circle(); //Constructor predeterminado
    ~Circle(); //Destructor
    Circle(const Circle& circle);// constructor copia
    void setRadius (double value); //Mutador
    double getRadius () const; // Accesor
    double getArea () const;  //Accesor
    double getPerimeter () const; // Accesor

};

/************************************************
2. Definición de las funciones miembro          *
Definición de los constructores y el destructor *
*************************************************/
// Definición del constructor de parametro
Circle::Circle(double rds) : radius(rds) {
    cout << "El constructor de parametro fue llamado " <<endl;
}

// Definición del constructor predeterminado
Circle::Circle() : radius(0.0) {
    cout << "El constructor predeteminado fue llamado " <<endl;
}

// Definición del constructor copia
Circle::Circle(const  Circle& circle) : radius(circle.radius) {
    cout << "El constructor copia fue llamado " <<endl;
}

//Definición del destructor
Circle:: ~Circle() {
    cout << "El destructor fue llamado para el círculo con radio " <<radius <<endl;
}

//Definición de la función miembro setRadius
void Circle :: setRadius (double value) {
    radius = value;
}

//Definición de la función miembro getRadius
double Circle :: getRadius () const {
    return radius;
}
//Definición de la función miembro getArea
double Circle :: getArea () const {
    const double PI = 3.14;
    return (PI * radius * radius);
}
//Definición de la función miembro getPerimeter
double Circle :: getPerimeter () const {
    const double PI = 3.14;
    return (2 * PI * radius);
}


/*************************************************************
3. Aplicación: Creando 3 objetos de la clase Circle (circle1,*
circle2, circle3) y aplicando alguna operacion a cada objeto *
**************************************************************/
int main ( ) {
// Instanciando circle1 y aplicando operaciones
    cout << "Circulo 1: " << endl;
    Circle circle1(5.2);
    cout << "Radio: " << circle1.getRadius() << endl;
    cout << "Area: " << circle1.getArea() << endl;
    cout << "Perimetro: " << circle1.getPerimeter() << endl;

// Instanciando circle2 y aplicando operaciones
    cout << "Circulo 2: " << endl;
    Circle circle2(circle1);
    cout << "Radio: " << circle2.getRadius() << endl;
    cout << "Area: " << circle2.getArea() << endl;
    cout << "Perimetro: " << circle2.getPerimeter()<<endl;

// Instanciando circle3 y aplicando operaciones
    cout << "Circulo 3: " << endl;
    Circle circle3;
    cout << "Radio: " << circle3.getRadius() << endl;
    cout << "Area: " << circle3.getArea() << endl;
    cout << "Perimetro: " << circle3.getPerimeter()<<endl;

//Aquí se llama a los destructores
//(los objetos se destruye en orden inverso al cual fueron construidas)

    return 0;
}