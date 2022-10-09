#include <iostream>
#include <numeric>
using namespace std;
int main()
{
    int renta;
    float impuesto;
    cout << "Escribe la renta: " << endl;
    cin >> renta;
    if (renta >= 1)
    {
        if (renta < 10000)
        {
            impuesto = 0.5;
        }
        else if (renta >= 10000 && renta <= 20000)
        {
            impuesto = 0.15;
        }
        else if (renta > 20000 && renta <= 35000)
        {
            impuesto = 0.20;
        }
        else if (renta > 35000 && renta <= 60000)
        {
            impuesto = 0.30;
        }
        else if (renta > 60000)
        {
            impuesto = 0.45;
        }
    }
    cout << "El impuesto es de: " << impuesto << endl;
    cout << "El pago total es de: " << renta * impuesto + renta;
    return 0;
}