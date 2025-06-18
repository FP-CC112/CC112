/***********************
* Uso de clases en POO *
************************/

/* Ejercicio: Separar la implementación en 3 archivos: ejemplo1.hpp ejemplo1.cpp  aplicacion.cpp*/

#include <iostream>
using namespace std;
/**************************************
*1. Definición de la clase: declaramos*
*   los datos y las funciones miembro *
***************************************/
class Circle {
private:
    double radius; //declaración de miembros de datos(variables)
public:
    double getRadius () const; //declaración de funciones miembro
    double getArea () const;   //const , significa que la  función no modifica el objeto (this) 
    double getPerimeter () const;
    void setRadius (double value);
};

/****************************************
*2. Definición de las funciones miembro *
*****************************************/
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
//Definición de la función miembro setRadius
void Circle :: setRadius (double value) {
    radius = value;
}

/************************************************************
* 3. Aplicación: instanciamos  objetos. Los objetos utilizan*
* funciones miembro para obtener o establecer sus atributos *
*************************************************************/
int main ( ) {
// Creando el primer círculo y aplicando funciones miembro
    cout << "Circulo 1: " << endl;
    Circle circle1;
    //circle1.setRadius (10.0); //si no reinicializamos constructores?
    cout << "Radio: " << circle1.getRadius() << endl;
    cout << "Area: " << circle1.getArea() << endl;
    cout << "Perimetro: " << circle1.getPerimeter() << endl << endl;

// Creando el segundo círculo y aplicando funciones miembro
    cout << "Circulo 2: " << endl;
    Circle circle2;
    circle2.setRadius (20.0);
    cout << "Radio: " << circle2.getRadius() << endl;
    cout << "Area: " << circle2.getArea() << endl;
    cout << "Perimetro: " << circle2.getPerimeter();
    return 0;
}