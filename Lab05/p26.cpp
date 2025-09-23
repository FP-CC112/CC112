#include <iostream>
using namespace std;

int main() {
    // Variables de distintos tipos
    int varInt = 42;
    char varChar = 'A';
    float varFloat = 3.14f;

    // Punteros a cada tipo
    int* ptrInt = &varInt;
    char* ptrChar = &varChar;
    float* ptrFloat = &varFloat;

    // Mostrar información para cada puntero
    cout << "Puntero a int:" << endl;
    cout << "  Dirección apuntada: " << ptrInt << endl;
    cout << "  Contenido apuntado: " << *ptrInt << endl;
    cout << "  Tamaño del dato apuntado (sizeof(*ptrInt)): " << sizeof(*ptrInt) << " bytes" << endl;
    cout << "  Tamaño del puntero (sizeof(ptrInt)): " << sizeof(ptrInt) << " bytes" << endl << endl;

    cout << "Puntero a char:" << endl;
    cout << "  Dirección apuntada: " << static_cast<void*>(ptrChar) << endl; // para evitar interpretar como string
    cout << "  Contenido apuntado: " << *ptrChar << endl;
    cout << "  Tamaño del dato apuntado (sizeof(*ptrChar)): " << sizeof(*ptrChar) << " bytes" << endl;
    cout << "  Tamaño del puntero (sizeof(ptrChar)): " << sizeof(ptrChar) << " bytes" << endl << endl;

    cout << "Puntero a float:" << endl;
    cout << "  Dirección apuntada: " << ptrFloat << endl;
    cout << "  Contenido apuntado: " << *ptrFloat << endl;
    cout << "  Tamaño del dato apuntado (sizeof(*ptrFloat)): " << sizeof(*ptrFloat) << " bytes" << endl;
    cout << "  Tamaño del puntero (sizeof(ptrFloat)): " << sizeof(ptrFloat) << " bytes" << endl << endl;

    return 0;
}
