// Una bacteria se divide en dos cada hora. Implementa una función recursiva que calcule
// la cantidad de bacterias después de N horas

#include <iostream>
using namespace std;

int totalBacterias(int horas){

    if(horas==0){

        return 1;
    }

    return 2* totalBacterias(horas-1);
}


int main(){

    int horas;

    cout<<"Digite cuantas horas ha pasado: "<<endl;
    cin>>horas;

    cout<<totalBacterias(horas);

    return 0; 
}