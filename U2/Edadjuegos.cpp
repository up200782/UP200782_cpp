#include <iostream>
using namespace std;
int main()
{
    int e;
    cout << "Ingrese la edad" << endl;
    cin >> e;
    if (e >= 1)
    {
        if (e < 4)
        {
            cout << "La entrada es gratis";

        }
        else if (e >= 4 && e <= 18)
        {
            cout << "Debe pagar $5";
        }
        else if (e > 18)
        {
            cout << "Debe pagar $10";
        }
    }
    return 0;
}