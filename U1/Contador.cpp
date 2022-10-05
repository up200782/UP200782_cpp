#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n = 10, suma = 0, sumapar = 0, sumaimpar = 0;
    for (int i = 1; i <= n; i++)
    {
        printf("Contador: %d \n", i);
        suma += i;

        if (i % 2 == 0)
            sumapar = sumapar + i;

        if (i % 2 != 0)
            sumaimpar = sumaimpar + i;
    }

    printf("La suma de %d numeros es: %d \n", n, suma);
    printf("La suma de numeros pares es: %d \n", sumapar);
    printf("La suma de numeros impares es: %d \n", sumaimpar);
    return 0;
}
//Jorge Antonio Ruiz Esparza Galván, UP200782