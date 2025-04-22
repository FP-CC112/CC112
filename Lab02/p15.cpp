// Considere que los códigos, precios y pesos de n productos (n≤100), se encuentran
// almacenados en arreglos CODIGO, PRECIO Y PESO respectivamente. Usted desea
// gastar como máximo una suma de 100 soles en la mayor cantidad de productos diferentes
// considerando que el peso total de los productos elegidos no puede superar los 50 kg.
// Muestre el listado con el máximo número de productos que puede comprar e indique el
// monto que no se gastó en la compra.
// Por ejemplo, si
// CODIGO = [ 12, 11, 16, 18, 20, 7]
// PRECIOS = [ 55, 20, 25, 45, 15, 30]
// PESO = [20, 10, 30, 40, 10, 15 ]
// La salida debe mostrar

#include <iostream>
using namespace std;

const int PRECIO_MAXIMO = 100;
const int PESO_MAXIMO = 50;

void intercambio(int &a, int &b){
    int x=a;
    a = b;
    b = x;
}


void ordBurbuja(int peso[], int precio[], int codigo[], int n){
    while(true){
        int contador=0;
        for(int j=0; j < n - 1; j++){
            
            if(precio[j]>precio[j+1]){
                swap(peso[j],peso[j+1]);
                swap(precio[j],precio[j+1]);
                swap(codigo[j],codigo[j+1]);

                contador++;
            }
        }
        if(contador==0){
            break;
        }
    }
}


int main(){
    int codigo[6] = {12, 11, 16, 18, 20, 7};
    int precio[6] = { 55, 20, 25, 45, 15, 30};
    int peso[6] = {20, 10, 30, 40, 10, 15};

    int n= sizeof(peso)/sizeof(peso[0]);

    ordBurbuja(peso,precio,codigo,n);

    cout<<"\nLista de productos en la compra:";
    cout<<"\ncodigo\tprecio (S/)\tpeso (kg)\n";

    int precioTotal = 0;
    int pesoTotal = 0;

    for(int i=0;i<n;i++){
        if((pesoTotal + peso[i] <= PESO_MAXIMO) && (precioTotal + precio[i] <= PRECIO_MAXIMO)){
            pesoTotal += peso[i];
            precioTotal += precio[i];
            cout<<"\t"<<codigo[i]<<"\t"<<precio[i]<<"\t"<<peso[i]<<endl;
        }else{
            break;
        } 
    }


    cout<<"Monto no gastado: " << PRECIO_MAXIMO - precioTotal;


    return 0; 
}
