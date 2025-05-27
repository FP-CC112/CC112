#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

//const int MAX = 10;

void Menor(double **M, double **A, int n , int filEliminar, int colEliminar){
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

void eliminarMatriz (double **M, int n){
    for (int i = 0 ; i < n; ++i) {
        delete[] M[i];
    }
    delete[] M;
}

double determinante(double **A,  int n) {
    //caso base
    if (n == 1) 
        return **A;
    

    
    //double M[MAX][MAX];
    // asignacion dinamica para M
    double **M  = new double*[n-1]; 

    for(int i = 0 ; i < n-1; ++i) {
        M[i] = new double[n-1];
    }

    //por ahora i = 0;

    

    double det = 0;
    for (int j = 0; j < n; ++j) {
        Menor(M, A, n, 0, j);
        det += pow(-1, 0 + j) * A[0][j]*determinante(M, n-1); 
    }
    eliminarMatriz(M, n-1);
    return det;
}

int main(){
    int n = 2;

    double **A  = new double*[n]; 

    for(int i = 0 ; i < n; ++i) {
        A[i] = new double[n];
    }

    srand(time(0));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            A[i][j] = rand() % 2;
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }





    double resultado = determinante(A,n);

    cout << resultado;

    eliminarMatriz(A,n);
    
    return 0; 
}