#include "Complejo.h"


Complejo::Complejo(double re, double im): real(re), imag(im) {}


//Ejercicio
//double Complejo::modulo() const {}


Complejo Complejo::operator+(const Complejo& otro) const {
    return Complejo(real + otro.real, imag + otro.imag);
}

//Ejercicio
//Complejo Complejo::operator-(const Complejo& otro) const {}

Complejo Complejo::operator*(const Complejo& otro) const {
    double r = real * otro.real - imag * otro.imag;
    double i = real * otro.imag + imag * otro.real;
    return Complejo(r, i);
}

//Ejercicio
//Complejo Complejo::operator/(const Complejo& otro) const {}



std::ostream& operator<<(std::ostream& os, const Complejo& c) {
    os << c.real << " + " << c.imag << "i";
    return os;
}






