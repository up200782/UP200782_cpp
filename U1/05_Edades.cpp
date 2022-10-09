#include <iostream>
using namespace std;
int main()
{
    int edad;
    cout << "Escribe la edad: ";
    cin >> edad;
    if (edad >= 0 or edad <= 5000)
    {
        if (edad <= 30 && edad >= 1)
        {
            cout << "Primera edad";
        }
        else if (edad >= 31 && edad <= 60)
        {
            cout << "Segunda edad";
        }
        else if (edad >= 61 && edad <= 90)
        {
            cout << "Tercera edad";
        }
        else if (edad >= 91 && edad <= 150)
        {
            cout << "Horas extras";
        }
        else if (edad < 1 or edad > 150)
        {
            cout << "Invalido";
        }
    }
    return 0;
}
