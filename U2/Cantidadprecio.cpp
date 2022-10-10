#include <iostream>
using namespace std;
int productos;
float precio;
float resultado;
int main()
{
    do
    {
        cout <<"Ingresa el numero del producto: " << endl;
        cin >> productos;
        if (productos >0)
        {
            cout << "Ahora el precio: " << endl;
            cin >> precio;
             resultado += precio;
        }
        
        
        
    } while (productos > 0);
     cout << "La suma total es de: " << resultado << endl;
    
    
}