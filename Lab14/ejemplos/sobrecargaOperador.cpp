#include <iostream>
#include <cstring>
using namespace std;

// class Persona {
// public:
//     char* nombre;

//     // 
//     Persona(const char* nom);
//     //
//     ~Persona(); 
// };

// Persona::Persona(const char* nom) {
//     nombre = new char[strlen(nom) + 1];
//     strcpy(nombre, nom);
// }

// Persona::~Persona() {
//     delete[] nombre;
// }

// int main() {
//     Persona p1("Jhon");
//     Persona p2("Luz");

//     p2 = p1;  // asigna direcciones es decir tenemos una copia superficial (shallow copy)

//     // Cambiamos el nombre de p1
//     strcpy(p1.nombre, "Luis");

//     cout << "p1: " << p1.nombre << endl;
//     cout << "p2: " << p2.nombre << endl;  // ?

//     return 0;
// }

// Problemas
// Cambiar uno, afecta al otro (doble delete, fuga de momoria, puntero colgante)

// Solución: Sobrecargar operator=
class Persona {
public:
    char* nombre;
    
    Persona(const char* nom) {
        nombre = new char[strlen(nom) + 1];
        strcpy(nombre, nom);
    }

    ~Persona() {
        delete[] nombre;
    }

    // Copia profunda (deep copy)
    Persona& operator=(const Persona& other) {
        if (this != &other) { // Evitar autoasignación
            delete[] nombre;  // Liberar memoria actual

            nombre = new char[strlen(other.nombre) + 1];
            strcpy(nombre, other.nombre);
        }
        return *this;
    }
};

int main() {
    Persona p1("Jhon");
    Persona p2("Luz");

    p2 = p1;  // copia profunda

    strcpy(p1.nombre, "Luis");  // Cambia solo p1

    cout << "p1: " << p1.nombre << endl;  // Luis
    cout << "p2: " << p2.nombre << endl;  // Jhon

    return 0;
}

// CONCLUSIÓN
// Para evitar errores graves usando punteros o  recursos dinámicos (new/delete):
// 1. Siempre debes sobrecargar el operador de asignación (obj1=obj2 correctamente)
// 2. También se debe definir el constructor de copia (crea deep copy) y
// 3. el  destructor (libera recursos cuando el objeto se destruye)
// REGLA DE LOS TRES
// si no los defines, el compilador genera copias superficiales 



//REGLA DE LOS CINCO (desde C++11) 
//agrega dos funciones que debe definirse si estamos trabajando con recursos dinámicos
// 4. Constructor de movimiento	(Persona(Persona&&) mueve los recursos de un objeto a otro sin copiar)
// 5. Operador de asignación por movimiento (obj1 = std::move(obj2))

class Persona {
private:
    char* nombre;

public:
    Persona(const char* nom) {
        nombre = new char[strlen(nom) + 1];
        strcpy(nombre, nom);
    }

    ~Persona() {
        delete[] nombre;
    }

    Persona(const Persona& other) {
        nombre = new char[strlen(other.nombre) + 1];
        strcpy(nombre, other.nombre);
    }

    Persona& operator=(const Persona& other) {
        if (this != &other) {
            delete[] nombre;
            nombre = new char[strlen(other.nombre) + 1];
            strcpy(nombre, other.nombre);
        }
        return *this;
    }

    //4. Constructor de movimiento
    Persona(Persona&& other) noexcept {
        nombre = other.nombre;
        other.nombre = nullptr;
    }

    // Operador de asignación por movimiento
    Persona& operator=(Persona&& other) noexcept {
        if (this != &other) {
            delete[] nombre;
            nombre = other.nombre;
            other.nombre = nullptr;
        }
        return *this;
    }
};

