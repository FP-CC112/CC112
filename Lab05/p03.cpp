/*Crea tres punteros: p1, p2, p3, todos apuntando a una misma variable. Cambia 
el valor desde p2 y muestra que el cambio es visible desde p1 y p3. Luego, 
apunta p2 a otra variable y analiza los efectos*/

#include <iostream>
using namespace std;

int main(){
    int x = 10, y = 2;
    int* p1 = &x, * p2 = &x, * p3 = &x;
    *p2 = 30;
    cout << *p1 <<endl;
    cout << *p3 << endl;
    p2 = &y;

    return 0; 
}