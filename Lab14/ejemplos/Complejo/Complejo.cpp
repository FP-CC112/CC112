#include "Complejo.h"
#include <iostream>
using namespace std;


Complejo::Complejo(double re, double im): real(re), imag(im) {}


Complejo Complejo::sumar(const Complejo& otro) const {
    return Complejo(real + otro.real, imag + otro.imag);
}

//Ejercicio
//Complejo Complejo::restar(const Complejo& otro) const{}

Complejo Complejo::multiplicar(const Complejo& otro) const {
    return Complejo(real * otro.real - imag * otro.imag, real * otro.imag + imag * otro.real);
}

//Ejercicio
//Complejo Complejo::dividir(const Complejo& otro) const {}

void Complejo::mostrar() const {
    cout << real << " + " << imag << "i" << endl; 
}





