// #include <iostream>
// using namespace std;

// int main(){

//     int* ptr = new int{1};

//     cout << "dirección apuntada por ptr= " << ptr <<endl;
//     delete ptr; //dangling pointer
//     ptr = nullptr;
//     cout << "dirección apuntada por ptr luego delete= " << ptr <<endl;
    
//   return 0; 
// }


#include <iostream>
#include <cstring>
using namespace std;

int main(){
double* d = new (nothrow) double[10000000000];

if(d == nullptr) {
    cout << "No se pudo reservar memoria" <<endl;
}

char* s1 = new char [20];
char* s2 = new char[40];
strcpy(s1, "Memory leak");
s2 = s1; //40 bytes no se pueden liberar​
delete [] s2;
delete[] s1; //posible error de violación de acceso en caso que  s2 = s1;

  return 0; 
}
