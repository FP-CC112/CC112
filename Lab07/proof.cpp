#include <iostream>
using namespace std;

int main(){
    int n;

    cout << "----MENU----" << endl;
    cout << "1..Buscar articulos de oficina"<< endl;
    cout << "2..Buscar tecnologia" << endl;
    cout << "3..Salir" << endl;
    cin >> n;

    switch (n){
        case 1:
            char o;
            float w;
            int z = 1;
            w = 1 + 3;
            cout << "Tenemos los siguientes articulos de oficina: " << endl;
            cout << "a. Lapiceros" << endl;
            cout << "b. Papel Bond" << endl;
            cin >> o;

            switch (o){
                case 'a':
                    cout << "Articulo escogido: Lapiceros" << endl;
                    cout << "Marcas disponibles: BIC y Faber Castel" << endl;
                break;
                case 'b':
                    cout << "Articulo escogido: Papel Bond" << endl;
                    cout << "Marcas disponibles: INKA y KERO" << endl;
                break;
                default:
                    cout << "COMANDO NO VALIDO" <<endl;
                break;   
            }
        break;

        case 2:
        char t;
        cout << "Tenemos los siguientes articulos de oficina: " << endl;
        cout << "c. Memorias USB" << endl;
        cout << "d. Discos SSD" << endl;
        cout << "e. Cargadores" << endl;
        cin >> t;

        switch (t){
            case 'c':
                cout << "Articulo escogido: Memorias USB" << endl;
                cout << "Marcas disponibles: SONY Y CASIO" << endl;
            break;

            case 'd':
                cout << "Articulo escogido: Discos SSD" << endl;
                cout << "Marcas disponibles: MAXWELL y HITACHI" << endl;
            break;

            case 'e':
            cout << "Articulo escogido: Cargadores" << endl;
            cout << "Marcas disponibles: LENOVO y HP" << endl;
            break;

            default:
                cout << "Comando no valido" <<endl;
            break;   
        }
        break;

        case 3:
            cout << "Gracias por visitarnos" << endl;
        break;

        default:
            cout << "Comando no valido" << endl;
        break;        
    }

    return 0;
}