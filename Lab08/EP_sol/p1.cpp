#include <iostream>
using namespace std;
// Parte 1
void CreateVector(int* &vec, int size) {
    vec = new int[size];
}

void ReadArray(int *vec, int size, istream & input) {
    for (int i = 0; i < size; ++i) {
        input >> vec[i];
    }
}

void PrintArray(int *vec, int size, ostream & output) {
    for (int i = 0; i < size; ++i) {
        output << vec[i] << " ";
    }
    output << endl;
}

void DestroyVector(int *vec) {
    delete [] vec;
    vec = nullptr;
}

// Parte 2
void Intercambiar(T* &vec1, T* &vec2){
    int *temp = vec1;
    vec1 = vec2;
    vec2 = temp;
}


// Parte 3
bool ascendente(int a, int b){
    return a < b;
}

bool descendente(int a, int b){
    return a > b;
}

void BurbujaRecursivo(int* arr, int n, bool (*comparar)(int, int)) { 
    if (n <= 1) 
        return; 
    for (int j = 1; j < n; ++j) 
        if ( comparar(arr[j], arr[j-1])) 
            swap(arr[j], arr[j-1]); 
    BurbujaRecursivo(arr, n-1, comparar); 
} 
 
int main(){ 
    int *vec1 = nullptr, size = 10; 
    int *vec2 = nullptr; 
 
    CreateVector(vec1, size); // Crear la memoria para este puntero 
    ReadArray(vec1, size, cin); // Lee los datos desde el cin 
    BurbujaRecursivo(vec1, size, ascendente); // Funcion definida arriba 
    PrintArray(vec1, size, cout);   // Imprime los datos en el cout 
 
    CreateVector(vec2, size); // Crear la memoria para este puntero 
    ReadArray(vec2, size, cin); // Lee los datos desde el cin 
    BurbujaRecursivo(vec2, size, descendente);  // Funcion definida arriba 
    PrintArray(vec2, size, cout); 
 
          
         
       
    Intercambiar(vec1, vec2); // Parte 2 del ejercicio 
    PrintArray(vec1, size, cout); 
    PrintArray(vec2, size, cout); 
 
    DestroyVector(vec1);   // Destruye el vector y deja en nullptr vec1 
    DestroyVector(vec2);   // Destruye el vector y deja en nullptr vec2

}