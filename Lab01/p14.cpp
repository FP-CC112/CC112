#include <iostream>
using namespace std;

int padovan(int);

int main(){
    int n;
    cout << "n = "; cin >> n;
    cout << "padovan(n) = "<< padovan(n);
    return 0; 
}

int padovan(int n){
    if(n==1||n==2||n==3){
        return 1;
    }else{
        return padovan(n-2)+padovan(n-3);
    }
}