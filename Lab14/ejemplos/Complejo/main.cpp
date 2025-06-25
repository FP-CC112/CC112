#include "NumeroComplejo.h"
#include "ComplejoCartesiano.h"
#include <iostream>
using namespace std;

int main() {
    // Arreglo de punteros a la clase base (polimorfismo)
    const int N = 3;
    NumeroComplejo* numeros[N];

    // Asignamos objetos de la clase derivada a punteros base
    numeros[0] = new ComplejoCartesiano(3, 4);
    numeros[1] = new ComplejoCartesiano(1, 2);
    numeros[2] = new ComplejoCartesiano(-2, -3);

    // Llamamos a métodos virtuales: se ejecuta la versión de la clase derivada
    for (int i = 0; i < N; ++i) {
        cout << "Número " << i + 1 << ": ";
        numeros[i]->imprimir();  // Comportamiento dinámico
        cout << "Módulo: " << numeros[i]->modulo() << "\n";
        cout << endl;
    }

    // Liberamos la memoria (ya que usamos new)
    for (int i = 0; i < N; ++i) {
        delete numeros[i];
    }

    return 0;
}

// RESUMEN de conceptos
// Qué es una clase base abstracta (= 0)
// Cómo la herencia + funciones virtuales + punteros a clase base -> polimorfismo
// Cómo copiar, mover y asignar objetos correctamente
// Cómo liberar memoria manualmente (puede fallar, memory leak, double free, dangling pounters)


//TAREA ADICIONAL

// 1. Reescribir main.cpp usando std::unique_ptr<NumeroComplejo>
//    Hint: Primero incluya #include <memory> en el encabezado
//          std::unique_ptr<NumeroComplejo> ptr = std::make_unique<ComplejoCartesiano>(1, 2);
//    Esto elimina el uso de new/delete y hace el código más seguro y moderno


// 2. Crear una nueva clase ComplejoPolar derivada

// 3. Añadir operadores sobrecargados ==, !=

// 4. Hacer una clase CalculadoraComplejos con menú interactivo

// 5. Guardar en archivos usando ofstream / ifstream

// 6. Usar Make, CMake para organizar como proyecto profesional