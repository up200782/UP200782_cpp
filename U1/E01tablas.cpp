#include <iostream>
using namespace std;
int main();
{
    int n = 5;
    int a = 1;
    cout << "Con for:" , cout << endl;

    for (int i = 0; i <= 10; i++)
    {
        int r = n * i;
        cout << n << " X " << i << " = " << r << endl;
    }
    cout << endl;
    cout << "Ahora con while:", cout << endl;

    while (a <= 10)
    {
        cout << n << " X " << a << " = " << n * a++ << endl;
    }

    return 0;
}