#include <iostream>
#include <string>
using namespace std;
int main()
{
    int p;
    int a;
    cout << "Elige el tipo de pizza presionando su numero: " << endl;
    cout << "1. Vegetariana" << endl
         << "2. Carnivora" << endl;
    cin >> p;
    switch (p)
    {
    case 1:
        cout << "Elegiste pizza vegetariana. Ahora elige el ingrediente especial: " << endl;
        cout << "1. Pimiento" << endl
             << "2. Tofu" << endl;
        cin >> a;

        switch (a)
        {
        case 1:
            cout << "Tu pizza es vegetariana y lleva mozzarella, tomate y pimiento" << endl;

            break;
        case 2:
            cout << "Tu pizza es vegetariana y lleva mozzarella, tomate y tofu" << endl;
            break;
        default:
            cout << "No tenemos ese ingrediente" << endl;
        }

        break;

    case 2:
        cout << "Elegiste pizza carnivora. Ahora elige el ingrediente especial: " << endl;
        cout << "1. Peperoni" << endl
             << "2. Jamón" << endl
             << "3. Salmón" << endl;
        cin >> a;
        switch (a)
        {
        case 1:
            cout << "Tu pizza es carnivora y lleva mozzarella, tomate y Peperoni << endl";

            break;
        case 2:
            cout << "Tu pizza es carnivora y lleva mozzarella, tomate y Jamón" << endl;
            break;
        case 3:
            cout << "Tu pizza es carnivora y lleva mozzarella, tomate y Salmón" << endl;
            break;
        default:
            cout << "No tenemos ese ingrediente" << endl;
        }
        break;

    default:
        cout << "No tenemos ese tipo de pizza" << endl;
    }
    return 0;
}
