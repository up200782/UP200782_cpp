#include <iostream>
using namespace std;

double factorial(int numero){
    if (numero == 1){
        return 1;
    }else{
        return numero*factorial(numero-1);
    }
}

int main(){
    int n = 6, f;
    f=factorial(n); 
    cout<<"El factorial de "<<n<<" es "<<f;
}