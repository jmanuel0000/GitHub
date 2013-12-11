#include <iostream>

using namespace std;
/* ingresar 5 numeros y determinar el promedio de pares y promedio de los impares. al final presentar el numero mayor */
int main()
{   int numero, cpar, cimpar , contador, mayor, menor;
    double prompares, proimpares;
     int sumap, sumai;
    contador=0;
    cpar=0;
    cimpar=0;
    mayor=0;
    sumai=0;
    sumap=0;
    menor=1000;


    while(contador<5)
    {
        cout<<" Ingresar un numero...>";
        cin>>numero;

        if ((numero%2)==0)
        {
            sumap+=numero; //sumap=sumap+numero
            cpar++;
        }


        else
        {
            sumai+=numero;
            cimpar++;
        }
        contador ++;
        if (numero>mayor)
        {
            mayor=numero;
        }
        if (numero<menor)
        {
            menor=numero;
        }


    }
       cout<<"Numero Mayor es...:"<<mayor<<"\n";
       cout<<"Numero Menor es...:"<<menor<<"\n";
     if (sumap!=0)
     {
         prompares=sumap/cpar;
     }
     else
     {
         prompares=0;
     }
     if (sumai!=0)
     {
         proimpares=sumai/cimpar;
     }
     else
     {
         proimpares=0;
     }

     cout<<" Promedio de los pares"<<prompares<<"\n";
     cout<<" Promedio de los impares"<<proimpares<<"\n";
    return 0;
}
