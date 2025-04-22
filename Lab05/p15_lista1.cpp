#include <iostream>
using namespace std;

float mediaArray(int* p, int n){
    float suma = 0.0;
    for(int i = 0; i < n; ++i){
        suma +=i[p]; //<> p[i] == *(p + i) == *(i + p) == i[p];
    }
    return (suma/n);
}

int main(){
    const int N = 40;
    float x[N], y[N];
    float* px, *py, mx, my;

    int i;
    for(i = 0, px = x, py = y;  i < N; i++, px++, py++){
        *px = rand()%50+1; // genera xi 
        *py = 3 * *px + 2 + (rand()%1000+1)/2000-0.025; // genera yi: a y b serán ≈ 3 y 2 mx = ... // suma de los xi 
    }

    mx = mediaArray(x, N);
    my = mediaArray(y, N);

    float numerador = 0.0;
    float denominador = 0.0;
    for(px = x, py = y, i < N;i++, px++, py++){
        numerador += (*px - mx)(*py - my);
        denominador += (*px - mx)*(*px - mx);
    }

    a = numerador/denominador;


    //COMPLETAR

   

        
    

    


    return 0; 
}