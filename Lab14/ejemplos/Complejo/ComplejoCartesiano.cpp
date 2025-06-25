#include "ComplejoCartesiano.h"
#include <iostream>
using namespace std;

// Constructor que inicializa las partes real e imaginaria
ComplejoCartesiano::ComplejoCartesiano(double r, double i) : real(r), imag(i) {}

// Constructor de copia
ComplejoCartesiano::ComplejoCartesiano(const ComplejoCartesiano& otro) : real(otro.real), imag(otro.imag) {}

// Operador de asignación por copia
ComplejoCartesiano& ComplejoCartesiano::operator=(const ComplejoCartesiano& otro) {
    if (this != &otro) {  // Evita autoasignación
        real = otro.real;
        imag = otro.imag;
    }
    return *this;
}

// Constructor de movimiento
ComplejoCartesiano::ComplejoCartesiano(ComplejoCartesiano&& otro) noexcept
    : real(otro.real), imag(otro.imag) {
    // Dejar el objeto original en estado válido
    otro.real = 0;
    otro.imag = 0;
}

// Operador de asignación por movimiento
ComplejoCartesiano& ComplejoCartesiano::operator=(ComplejoCartesiano&& otro) noexcept {
    if (this != &otro) {
        real = otro.real;
        imag = otro.imag;
        otro.real = 0;
        otro.imag = 0;
    }
    return *this;
}


void ComplejoCartesiano::imprimir() const {
    cout << real << " + " << imag << "i\n";
}


double ComplejoCartesiano::modulo() const {
    return sqrt(real * real + imag * imag);
}

// Método que clona el objeto actual (devuelve puntero nuevo)
NumeroComplejo* ComplejoCartesiano::clonar() const {
    return new ComplejoCartesiano(*this);
}

