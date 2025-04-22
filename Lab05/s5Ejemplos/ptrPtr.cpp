#include <iostream>
using namespace std;

int main(){

    int arr[3];  //arreglo de 3 enteros
    int *ptr,**pptr; //declaramos de 2 punteros !
    arr[0] = 10; //asignamos 10 al primer elemento

    ptr = arr;// asignamos a  ptr  &arr[0]​

    pptr = &ptr;// asignamos la direccion de ptr

    cout << &arr[0] <<endl;// imprime dirección de arr[0]​
    cout << *&ptr <<endl; // imprime dirección de arr[0]​
    cout << *pptr <<endl; // imprime la direccion de arr[0]​
                          // *pptr == *&ptr == ptr
    
    cout << **pptr <<endl; //imprime 10​
                          //**pptr == *(*pptr) == *(ptr) == arr[0] == 10​
 
    cout << arr <<endl; // imprime la dirección de arr[0]
    cout << &arr <<endl; // imprime dirección de  a​rr
   
    

   