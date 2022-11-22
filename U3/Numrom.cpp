#include <iostream>
using namespace std;

int main(){
    int n;
    int v;
    int romanos[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
    string NR[]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
    string numero="";
    int i=0;
    cout << "Escribe el numero a convertir: " << endl;
    cin >> n;
    while(n>0)
    {
        if (n>=romanos[i])
        {
            v=n/romanos[i];
            n=n%romanos[i];
            for (int j = 0; j < v; j++)
            {
                numero=numero+NR[i];
            }
        }
        i++;
    }
    cout<<numero;
    return 0;
}