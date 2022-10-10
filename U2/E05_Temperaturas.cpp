#include <iostream>
using namespace std;

float numeros[6];
float menor;
float mayor;
float suma;

int main() {

  for (int i = 0 ; i<= 5 ; i++)
    {
      cout << "Escribe un numero: " << endl;
      cin >> numeros[i];
    }
  mayor = numeros[0];
  menor = numeros[0];  
  for (int i = 0 ; i<= 5 ; i++)
    {      
      if (mayor > numeros [i]) 
      {
        mayor = numeros[i];
      }
      if(menor < numeros [i])
      {
        menor = numeros[i];
      }
    }
    for (int i = 0 ; i<= 5 ; i++)
    {
        suma = numeros[i] + suma;
    }
  cout << "La temperatura menor es de: " <<mayor<< endl;
  cout << "El numero mayor es de: " <<menor<< endl; 
  cout << "El promedio es: " << suma/6 << "grados" << endl; 
  return 0;
}