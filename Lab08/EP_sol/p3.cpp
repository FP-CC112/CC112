#include <iostream>
using namespace std;
const int MAX = 100;
int mapa[MAX][MAX];
bool visitado[MAX][MAX];
int filas, columnas;

void dfs(int i, int j) {
    if(i < 0 || i >= filas || j < 0 || j >=columnas)
        return;

    if (mapa[i][j] == 1 || visitado[i][j])
        return;
    visitado[i][j] = true;
    dfs(i, j-1);
    dfs(i, j+1);
    dfs(i-1, j);
    dfs(i+1, j);
    
}


int contRegionesConexas() {
    int contRegiones = 0;
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            if (mapa[i][j] == 0 && !visitado[i][j]) {
                dfs(i,j);
                ++contRegiones;
            }
        }
    }
    return contRegiones;
}

int main(){
    filas = 4;
    columnas = 5;
    int datos[4][5] = {
        {1, 0, 0, 1, 1},  
        {1, 0, 1, 1, 0},  
        {1, 1, 1, 0, 0},  
        {0, 1, 1, 1, 1} 
    };

    //copiar
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            mapa[i][j] = datos[i][j];
        }
    }

    cout << "Cantidad de regiones conexas:  " << contRegionesConexas() <<endl;


    return 0; 
}