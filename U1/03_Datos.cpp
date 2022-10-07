// manejo de entradas y salidas
#include <iostream>
// printf y sanf
#include <stdio.h>

// para usar el espacio de nombres std
using namespace std;

// funcion principal

int main(int argc, char const *argv[])
{
    int entero = 20;
    float flotante = 20.8;
    double doble = 20.47893;
    char caracter = 'z';

    cout << "este programa muestra los tipos de datos en c++" << endl;
    cout << "El numero entero es: " << entero << endl;
    cout << "El tamaño del entero es : " << sizeof(entero) << " bytes" << endl;

    return 0;
}
//Jorge Antonio Ruiz Esparza Galván, UP200782