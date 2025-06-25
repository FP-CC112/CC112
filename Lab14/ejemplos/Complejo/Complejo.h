#ifndef COMPLEJO_H
#define COMPLEJO_H
#include <iostream>
using namespace std;

class Complejo {
private: 
    double real;
    double imag;

public:
    Complejo(double re = 0, double im = 0); //constructor con parámetros por defecto
    
    double modulo() const;

    
    Complejo operator+(const Complejo& otro) const;
    Complejo operator-(const Complejo& otro) const;
    Complejo operator*(const Complejo& otro) const;
    Complejo operator/(const Complejo& otro) const;


    friend ostream& operator<<(ostream& os, const Complejo& c);
    
};
#endif