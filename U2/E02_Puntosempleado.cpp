#include <iostream>
using namespace std;
int main()
{
    float pun;
    cout << "Escribe la puntuación: " << endl;
    cin >> pun;
    if (pun >= 0)
    {
        if (pun == 0.0)
        {
            cout << "Puntuacion inaceptable" << endl;
        }
        else if (pun == 0.4)
        {
            cout << "Puntuación aceptable" << endl;
        }
        else if (pun >= 0.6)
        {
            cout << "Tu puntuación es meritoria" << endl;
        }
        cout << "Tu bono será de: " << 2400*pun;
    }
    return 0;
}