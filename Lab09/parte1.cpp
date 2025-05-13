#include <iostream>
using namespace std;

/*Escribe un programa que cree dinámicamente una variable entera, 
le asigne el valor 10 y
luego imprima su valor. Asegúrate de liberar la memoria al final*/
// MEMORIA :   STACK       .......  HEAP
void solucion1() {
    int* ptr = new int;  //crea dinamicamente una variable de tipo int
    *ptr = 10; //asigna el valor 10
    cout << "Valor de la varible (en el HEAP): " << *ptr <<endl;
    delete ptr;
    ptr = nullptr;
}

/*Escribe un programa que pida al usuario la cantidad de números
 que desea ingresar, cree
un arreglo dinámico para almacenarlos, los lea desde teclado
 y luego imprima su suma.*/
int* leerNumero(int n) {
     int* arr = new int[n];

     for (int i = 0; i < n; ++i) {
        cout << "Ingrese el elemento " << i +1 << ": ";
        cin >> arr[i];
     }
     return arr;
}

int suma (int* arr, int n) {
    int suma = 0;
    for (int i= 0; i < n ; ++i) {
        suma +=arr[i];
    }
    return suma;
}

void solucion2() {
    int n;
    cout << "Ingrese la cantidad de numeros: ";
    cin >>n;
    int* arr = leerNumero(n);
    cout << "Suma: " << suma(arr,n) <<endl;

    delete[] arr;
    arr = nullptr;
    
}


/*
Escribe un programa que reserve memoria dinámicamente para un arreglo de n números
reales, donde n es ingresado por el usuario. Llena el arreglo con valores introducidos por
el usuario y luego imprime el promedio.
*/

float promedio(int n){
    int *arr = new int[n];
    int suma=0;
    for(int i=0; i<n ;++i){
        cout<<"Ingrese el "<<i+1<<" elemento: "; cin>> *(arr+i);
        suma += *(arr+i);
    }
    float promedio = suma/n;
    delete[] arr; //Libera memoria
    arr = nullptr;
    return promedio;
}

void solucion3(){
    int n;
    cout<<"Ingrese el numero n: "; cin>>n;

    float prom = promedio(n);
    cout<<"El promedio es "<<prom<<endl;
    
}


/*Escribe un programa que cree dos arreglos dinámicos de enteros del mismo tamaño (in-
gresado por el usuario), los llene con valores ingresados por teclado y calcule la suma
elemento a elemento en un tercer arreglo dinámico*/



/*Escribe un programa que permita al usuario reservar dinámicamente memoria para una
matriz de tamaño n × m, llenar la matriz con valores introducidos por el usuario e imprimirla
en forma de tabla*/
int** crearMatriz(int n, int m) {
    int** matriz  = new int*[n];  // int* matriz = new int[n*m];
    for (int i = 0; i < n; ++i) {
        matriz[i] = new int[m];
    }
    return matriz;
}

void leerMatriz(int**matriz, int n, int m);

void imprimirMatriz(int**matriz, int n, int m); 

void liberarMatriz(int** mat, int n) {
    for (int i = 0; i < n; ++i ) {
        delete[] mat[i];
    }
    delete[] mat;
}


void solucion9() {
    int n, m;
    cout << "Ingrese el numero de filas: "; cin >> n;
    cout << "Ingrese el numero de columnas: "; cin >> m;
    int** mat = crearMatriz(n,m);
    // leerMatriz(mat,n,m);
    // imprimirMatriz(mat,n,m);
    liberarMatriz(mat,n);

}







int main(){
    solucion1();
    solucion2();
    solucion3();
    solucion9();

    return 0; 
}