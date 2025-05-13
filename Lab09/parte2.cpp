#include <iostream>
using namespace std;




/*Crea una función que reciba un arreglo dinámico de enteros y su tamaño, y devuelva un
nuevo arreglo dinámico con los mismos elementos duplicados (cada elemento se repite dos
veces seguidas).
Ejemplo de entrada: [1, 2, 3]
Ejemplo de salida: [1, 1, 2, 2, 3, 3]*/

int* duplicarArreglo(int* a; int n; int & duplicarTamanio) {
    duplicarTamanio = 2*n;
    int* dobleArray = new int[duplicarTamanio];
    for (int i = 0, j = 0; i < n; ++i) {
        dobleArray[j] = a[i];
        j++;
        dobleArray[j] = a[i];
        j++;
    }
    return dobleArray; 
}

void solucion11(){
    int a[] = {1,2,3};
    int duplicarTamanio;
    int *res = duplicarArreglo( a; 3;duplicarTamanio);
    //......
    delete[] res;
}






/*rea una estructura llamada Libro con los campos titulo, autor y anio. Permite al
usuario ingresar dinámicamente una cantidad de libros, almacenarlos y luego imprimir una
lista de los libros publicados después del año 2000.
*/
struct Libro { //Defino mi tipo de dato Libro
   string titulo;
   string autor;
   int year;
};





//OBSERVACION
//combinacion que causa problemas de lectura: cin, getline()

void solucion12() {
    int n;
    cout << "Ingrese la cantidad de libros a registrar: ";
    cin >> n; // --> buffer |'\n'|
    cin.ignore();//limpiamos el buffer  | |

    Libro* libros = new Libro[n];

    for (int i = 0; i < n; ++i) {
        cout << "Titulo: "; 
        getline(cin,libros[i].titulo); // buffer |'\n'cien años|
        cout << "Autor: "; 
        getline(cin,libros[i].autor);
        cout << "Año: "; 
        cin >> libros[i].year;
        cin.ignore();
    }

    delete[] libros;
}

int main(){
    solucion12();

  return 0; 
}