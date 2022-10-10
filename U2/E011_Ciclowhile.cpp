#include<iostream>
using namespace std;
int main(){
    int a,i;
    char opcion='s';
    while (opcion=='s')
    {
    cout<<"Ingresa un numero: ";
    cin>>a;  
    i=1;
    do
    {
        cout<<a<<" x "<<i<<" = "<<a*i<<endl;
        i++;
    } while (i<=10);
    cout<<"Deseas otro <s/n>";
    cin>>opcion;  
    }
    cout<<"... Hecho";
    return 0;
}