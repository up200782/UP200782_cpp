#include <iostream>
using namespace std;
int main ()
{
    int a , b;

for ( a = 1; a <= 10; a++)
{
    for (b = 1; b <= 10; b++)
    {
        cout << a << " X " << b << " = " << a*b << endl;
    }
    cout << endl;
    
}


return 0;
}