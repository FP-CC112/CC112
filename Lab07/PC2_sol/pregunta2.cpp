#include "pregunta2.hpp"
#include <iostream>
using namespace std;

//Idea base: implementar una función que calcule la potencia de un numero entero: 

void potenciaEntera(int base, int exponente, int &resultado) {
    for (int i = 0; i < exponente; ++i) {
        resultado = resultado*base;
    }
}

// Generalizemos la idea a potencia de matrices
// primero usando solo matrices, 
//luego cambiamos a notacion de punteros

void potenciaMatriz(int **A, int exponente, long long **R) {
    long long temp[2][2]{};
    for (int i = 0; i < exponente; ++i) {
        //R = R*A;??
        //primer paso: almacenar en una matriz temp el resultado de R*A;
        for(int i = 0; i < 2; ++i) 
            for(int j = 0; j < 2; ++j) {
                temp[i][j] = 0;
                for(int k = 0; k < 2; ++k) 
                    temp[i][j] = temp[i][j] + R[i][k]*A[k][j];
            }

        //segundo paso: copiar temp a R;
        for(int i = 0; i < 2; ++i) 
            for(int j = 0; j < 2; ++j) 
                R[i][j] = temp[i][j];
    }
}

void resolver_pregunta2() {
    cout << "\nPregunta 2: \n";
    // int base = 2;
    // int exponente = 4;
    // int resultado = 1; 

    // potenciaEntera(base, exponente, resultado);
    // cout << "La potencia es: " << resultado;

    //caso pontencia de matrices
    int base[2][2] = {2,3,4,5};
    int exponente = 20;
    long long resultado[2][2] = {1,0,0,1}; 

    //para poder usar punteros doble
    // definimos los siguientes arreglos de punteros
    int *A[2];
    long long *R[2];
    //y hacemos que apunte a cada fila de base y resultado respectivamente
    //NO ES NECESARIO USAR ASIGNACIÓN DINÁMICA
    for (int i = 0; i < 2; ++i) {
        A[i] = base[i];
        R[i] = resultado[i];
    }
    potenciaMatriz(A,exponente,R);
    //potenciaMatriz(base,exponente,resultado);
    cout << "La potencia de la matriz es:\n";
    for(int i = 0; i < 2; ++i)
        cout << resultado[i][0] << " " <<resultado[i][1] << endl;


}

//Ejercicio: Cambiar notacion [] por notacion de punteros