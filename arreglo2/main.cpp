#include <iostream>
/* Ingresar 5 numeros a un arreglos. los numeros deberan estar entre 50-100.
usando una funcion debera de obtener la suma de los numeros divisibles entre 5.
crear una funcion para determinar el promedio de los numeros pares

crear un procedimiento para modificar el arreglo y colocar 0 a todos los numeros que son pares.
crear un procedimiento para presentar el arreglo.
*/
using namespace std;
const int tam=4;
int arrego[4];
int sumaA, promedioP;

void ingreso(int arreglo[])
{
    for (int i=0;i<=tam;i++)
    {
    do
    {
        cout<<"Ingresar numero....:";
        cin>>arreglo[i];
    }while(!(arreglo[i]>=50)and (arreglo[i]<=100));
    }
}

int numerodivisible5(int arreglo[])
{
  int contador=0;
  for (int i=0;i<=tam;i++)
  {
      if (arreglo[i] % 5==0)
        sumaA+= arreglo [i];
  }
  return sumaA;
}


int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
