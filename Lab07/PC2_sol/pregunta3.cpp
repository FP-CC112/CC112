#include "pregunta3.hpp"
#include <iostream>
using namespace std;

//Idea base: Tarea: implemente una función imprima la mayor secuencia de unos en un arreglo


//Generalice a lo pedido en la pregunta 3
void maxSubsecuenciaImpares(int *arr, int n){
    int longMax = 0, indLongMax = -1;
    for (int i = 0; i < n; ++i) {
        int longActual = 0;
        if (arr[i] % 2 != 0) {
            int indMax = i;
            longActual = 1;
            
            while (indMax + 2 < n) {
                if (arr[indMax + 2] % 2 != 0) {
                    ++longActual;
                    indMax += 2;
                } else {
                    break;
                }
            }
            if(longActual > longMax) {
                longMax = longActual;
                indLongMax = i;
            }
        }
    }
    
    cout << "Longitud " << longMax <<endl;
    
    if (longMax > 0 ) {
        cout << "Subsecuencia: ";
        int indMax = indLongMax;
        for (int i = 0; i < longMax; ++i) {
            cout << arr[indMax] << " ";
            indMax +=2;
        }
        cout << endl;
    } else {
         cout << "No ha ysubsecuencia";
    }
}


void resolver_pregunta3() {
    cout << "\nPregunta 3: \n";
    int lista1[] = {0, 0, 0, 0, 0, 0, 0};
    int lista2[] = {0, 1, 1, 1, 1, 0, 1, 0, 0};
    int lista3[] = {1, 3, 0, 2, 7, 9, 11, 2, 0};
    maxSubsecuenciaImpares(lista3, 9);
    cout << "\n";
    
}