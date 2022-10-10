#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int a = 1;
    int b = 10;

    cout << "Con for:" << endl;

    cout << "ASCENDENTE" << endl;

    for (int i = 0; i <= 10; i++)
    {
        int r = n * i;
        cout << n << " X " << i << " = " << r << endl;
    }
    cout << endl;

    cout << "DESCENDENTE" << endl;

    for (int i = 10; i >= 1; i--)
    {
        int r = n * i;
        cout << n << " X " << i << " = " << r << endl;
    }
    cout << "Ahora con while:", cout << endl;

    cout << "ASCENDENTE" << endl;

    while (a <= 10)
    {
        cout << n << " X " << a << " = " << n * a++ << endl;
    }
    cout << endl;

    cout << "DESCENDENTE" << endl;

    while (b <= 10 and b >= 1)
    {
        cout << n << " X " << b << " = " << n * b-- << endl;
    }
    cout << endl;
    cout << "Ahora con do while" << endl;
    cout << "ASCENDENTE" << endl;
    a=0;
    n=5;
    do
    {
        cout << n << " X " << a << " = " << n * a++ << endl; 
    } while (a <= 10 and a >= 1);
    cout << endl;
    cout << "DESCENDENTE" << endl;
    n=5;
    b=10;
      do
    {
        cout << n << " X " << b << " = " << n * b-- << endl; 
    } while (b <= 10 and b >= 1);
    

    return 0;
   
    
}