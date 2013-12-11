#include <iostream>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

using namespace std;

int main()
{   int numero, suma, nmayor, promedio,contador;
    char respuesta;
    suma=0;
    promedio=0;
    contador=0;





  do
  {



    do
    {
        while(!(numero>1) and (numero<200) and ((numero%2)==0))
        {
            cout<<"Ingresar numeros entre 1-100 que sean pares...:";
            cin>>numero;
            _flushall();
        }

        while(numero!=0)
        {
             suma = suma + (numero%10);
	    	numero = numero/10;
            contador++;
        }
        do
        {
            cout<<"Desea Continuar:";
            cin.get(respuesta);
            _flushall();
        } while((respuesta!='N') and (respuesta!='S'));
    }while (respuesta!='N');



    if  (nmayor<numero)
        {

            nmayor=numero;
        }


        promedio=suma/contador;

     cout<<"Numero mayor es....:"<<nmayor<<"\n";
     cout<<"Promedio de los numeros"<<promedio<<"\n";

    return 0;
  }


