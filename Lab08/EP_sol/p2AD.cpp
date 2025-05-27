

#include <iostream>
#include <cmath>
using namespace std;

//const int MAX = 10;

void Menor(double (*M)[MAX], double (*A)[MAX], int n , int filEliminar, int colEliminar){
    int filM = 0;
    for (int i = 0; i < n; ++i) {
        if ( i != filEliminar) {
            int colM = 0;
            for (int j = 0; j < n; ++j) {
                if (j != colEliminar){
                    M[filM][colM] = A[i][j];
                    ++colM;
                }
                
            }
            ++filM;
        }
        
    }
}

double determinante(double (*A)[MAX],  int n) {
    //caso base
    if (n == 1) 
        return **A;
    
    double M[MAX][MAX];

    //por ahora i = 0;

    

    double det = 0;
    for (int j = 0; j < n; ++j) {
        Menor(M, A, n, 0, j);
        det += pow(-1, 0 + j) * A[0][j]*determinante(M, n-1); 
    }
    return det;
}

int main(){
    int n = 2;
    double A[MAX][MAX] = {{1,0},{0,1}};

    double resultado = determinante(A,n);

    cout << resultado;

    return 0; 
}