#include <iostream>
using namespace std;

void HanoiRecursivo(string origen, string auxiliar, string destino, int n){
    if (n == 1){
        cout << "Mover disco de " << origen << " -> " << destino <<endl;
        return;
    }

    HanoiRecursivo(origen, destino, auxiliar, n-1);
    cout << "Mover disco de " << origen << " -> " << destino <<endl;
    HanoiRecursivo(auxiliar, origen, destino, n-1);
    
}

int main(){

    string origen = "A", auxiliar = "B", destino = "C";
    int n = 2;

    HanoiRecursivo(origen, auxiliar, destino, n);

    return 0; 
}


//Comparar con la implementación iterativa

// https://medium.com/ds-algo-for-novice/tower-of-hanoi-recursive-and-iterative-approach-4c562f571e25