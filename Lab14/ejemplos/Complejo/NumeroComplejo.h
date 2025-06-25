#ifndef NUMEROCOMPLEJO_H
#define NUMEROCOMPLEJO_H

#include <iostream>

// Clase base abstracta para representar un número complejo
class NumeroComplejo {
public:
    // Destructor virtual para asegurar destrucción correcta desde punteros base
    virtual ~NumeroComplejo() {}

    // Función virtual pura: obliga a las clases derivadas a implementar este método
    virtual void imprimir() const = 0;

    // Otra función virtual pura: calcular el módulo del número complejo
    virtual double modulo() const = 0;

    // Función virtual pura para clonar el objeto (importante para polimorfismo)
    virtual NumeroComplejo* clonar() const = 0;
};

#endif
