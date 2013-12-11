#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Ingresar 5 cadenas tipo char a un arreglo usando un procedimiento, luego elaborar una funcion que cuente
cuantas consonantes tiene cada uno de los nombres.
eleborar un procedimiento para agregar al final de la cadena un *.
presentar la cadena modificada con el * y a la par el numero de consonantes que tiene. */
using namespace std;

const int n=5;
char cadena [n][30];

void ingreso (char cadena[n][30])
{
    for (int i=0;i<=n;i++)
    {
        cout <<"Ingesar la cadena:";
        cin.getline(cadena[i],30);
        _flushall();
    }
}

void cambiar (char cadena[n][30])
{
    int i;
    int fin;
    for (i=0;i<n;i++)
    {
        fin=strlen(cadena[i]);
        cadena[i][fin]='*';
    }
}
int consonantes(char cad[30])
{
    int fin=strlen(cad);
    int contador=0;
    for (int i=0;i<fin;i++)
    {
        char letra=cad[i];
        switch (letra)
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case '*':

            break;
            default:contador++;
            break;
        }
    }
    return contador;
}



void presentar (char cadena[n] [30])
{
    for (int i=0;i<=n;i++)
    {
        cout <<"La cadena y la cantidad de consonantes son:["<<i<<"]-->"<<cadena[i]<<"  "<<consonantes(cadena[i])<<endl;
    }
}

void presentarMayor (char cadena[n][30], int consonante[])
{
  int i,pos,mayor;
  mayor=0;
  for (i=0;i<n;i++)
  {
      if(mayor<consonante[i])
      {
          mayor=consonante[i];
          pos=i;
      }
  }
  cout<<"Mayor es "<<cadena[pos]<<" Con "<<mayor<<" \n";

}

int main()
{
    ingreso(cadena);
    cambiar(cadena);
    presentar(cadena);
    presentarMayor(cadena,consonantes);

    return 0;
}

