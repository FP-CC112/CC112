#include <iostream>
using namespace std;

//Fibonacci + memoizacion
const int NMAX = 100;
long long memo[NMAX]{0};


long long  fiboIterativo(int n){
    if (n <= 1)
        return n;
    
    long long a = 0, b = 1, c;

    for (int i = 2; i <=n; ++i){
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}





long long fibonacci(int n){
    if (n <= 1)
        return n;

    if (memo[n] != 0) //si ya fue calculado
        return memo[n];

    return memo[n] = fibonacci(n-1) + fibonacci(n-2);
}


//Tipos de recursión 



long long factorialTR(int n , long long acum){
    if(n <= 1)
        return 1;
    
    return factorialTR(n-1,n*acum);
}



int fa(int); 
int fb(int); 

int fa(int n){
    if(n==0) 
        return 1; 
    else 
        return n*fb(n-1); 
} 
int fb(int n){ 
    if(n==0)
        return 1;
    else 
        return n*fa(n-1);
}





int main(){

    int n;
    cout << "Ingrese el valor de n: ";
    cin >> n;

    // cout << fibonacci(n) <<endl;
    cout << fa(n) <<endl;
    cout << fb(n) <<endl;

    return 0; 
}