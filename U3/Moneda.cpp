#include<iostream>
using namespace std;
int main(){
    int dinero, i=0;
    int cambio[10]={1000,500,200,100,50,20,10,5,2,1};
    cout << "Escribe la cantidad de dinero: " << endl;
    cin >> dinero;
    while (dinero>0)
    {
        if (dinero>=cambio[i])
        {
            cout<<dinero/cambio[i]<< " billetes de  " <<cambio[i]<<endl;
            dinero=dinero%cambio[i];
        }
        i++;
    }
    return 0;
} 
