 #include<iostream>
using namespace std;


 // EJEMPLO TIPOS DE RECURSION
int fact(int n){
    if(n==0) return 1;

    return n*fact(n-1);
}
//***************************
unsigned factTR(unsigned int n, unsigned int a) {
    if (n <= 1)
        return a;

    return factTR(n - 1, n * a);
}

//interesante
//void tailRecursion(int n, int acumulador = 1) {
//***************************** */
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


//EJEMPLOS OPTIMIZACION DE RECURSION
//****************************** */
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




//Fibonacci recursivo + memoizacion
const int NMAX = 100; //diff
long long memo[NMAX]{0}; //diff
long long fibonacci(int n){
    if (n <= 1)
        return n;

    if (memo[n] != 0) //si ya fue calculado //diff
        return memo[n];

    return memo[n] = fibonacci(n-1) + fibonacci(n-2);
}


//g++ -O2 -o programa programa.cpp
//g++ -O2 -S programa.cpp -o programa.s
//g++ -O2 -S -fverbose-asm programa.cpp -o programa.s

//GCC clang


int main() {
	    
	int resultado = factTR(4,1);
	    
	cout << resultado <<endl;
	return 0;
}


