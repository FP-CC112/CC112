#ifndef COMPLEJOCARTESIANO_H
#define COMPLEJOCARTESIANO_H

#include "NumeroComplejo.h"
#include <cmath>  // Para usar sqrt()

// Clase derivada que representa un número complejo en forma cartesiana
class ComplejoCartesiano : public NumeroComplejo {
private:
    double real;  // Parte real
    double imag;  // Parte imaginaria

public:
    // Constructor de paramétros
    ComplejoCartesiano(double r = 0.0, double i = 0.0);

    // Constructor de copia
    ComplejoCartesiano(const ComplejoCartesiano& otro);

    // Operador de asignación por copia
    ComplejoCartesiano& operator=(const ComplejoCartesiano& otro);

    // Constructor de movimiento
    ComplejoCartesiano(ComplejoCartesiano&& otro) noexcept;

    // Operador de asignación por movimiento
    ComplejoCartesiano& operator=(ComplejoCartesiano&& otro) noexcept;

    // Implementaciones de los métodos virtuales de la clase base
    void imprimir() const override;       // Imprimir el número complejo
    double modulo() const override;       // Calcular el módulo

    // Devuelve una copia del objeto actual (necesario para copiar usando punteros a la clase base)
    NumeroComplejo* clonar() const override;
};

#endif
