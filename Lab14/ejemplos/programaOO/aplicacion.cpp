#include "circulo.hpp"

int main ( ) {
Circle circle1 (5.2);
cout << "Radius: " << circle1.getRadius() << endl;
cout << "Area: " << circle1.getArea() << endl;
cout << "Perimeter: " << circle1.getPerimeter() << endl;
cout << endl;


Circle circle2 (circle1);
cout << "Radius: " << circle2.getRadius() << endl;
cout << "Area: " << circle2.getArea() << endl;
cout << "Perimeter: " << circle2.getPerimeter() << endl;
cout << endl;


Circle circle3;
cout << "Radius: " << circle3.getRadius() << endl;
cout << "Area: " << circle3.getArea() << endl;
cout << "Perimeter: " << circle3.getPerimeter() << endl;
cout << endl;
return 0;
}


// Proceso de compilación, enlace y ejecución
// c++ -c circulo.cpp                 // compilación del archivo implementacion
// c++ -c aplicacion.cpp              // compilación del archivo aplicación  
// c++ -o main circulo.o aplicacion.o // enlace de los 2 archivos objetos compilados
// ./main                             // ejecución del archivo ejecutable
