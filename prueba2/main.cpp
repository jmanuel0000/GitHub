#include <iostream>

using namespace std;
/* Ingresar 10 numeros, al final presentar cuantos numeros fueron divisbles entre 5, el promedio, de los divisibles entre 5
y el numero mayor de todos los numeros.*/
int main()
{   int numero, nmayor,div5, suma;
    double promedio;
    nmayor=0;
    div5=0;
    promedio=0;
    suma=0;


    for(int i=0;i<10;i++)
    {
       cout << "Ingresar 10 Numeros....>";
       cin>>numero;

       if ((numero%5)==0)
       {
           div5++;
           suma+=numero;

    }
    if (numero>nmayor)
        {
            nmayor=numero;
        }
    }

    if (div5>0)
    {
        promedio=suma/div5;
    }

     else
     {
         promedio=0;
     }


    cout<<"Promedio de los numeros divisibles entre 5 es...>"<<promedio<<"\n";
    cout << "Contador de divisibles entre 5 es...:"<<div5<<"\n" ;
    cout << "El numero mayor es...:"<<nmayor<<"\n" ;


    return 0;
}
