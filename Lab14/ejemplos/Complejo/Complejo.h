class Complejo {
private: 
    double real;
    double imag;

public:
    Complejo(double re = 0, double im = 0); //constructor con parámetros por defecto
    
    // Métodos de operaciones básicas
    Complejo sumar(const Complejo& otro) const;
    Complejo restar(const Complejo& otro) const;
    Complejo multiplicar(const Complejo& otro) const;
    Complejo dividir(const Complejo& otro) const;
    void mostrar() const;
};
