#include <iostream>

using namespace std;
/* Ingresar 5 numeros y determinar cuantos son divisibles entre 3 */
int main()
{  int numero, cdivi3, suma,prom;
    cdivi3=0;
    suma=0;
    for(int i=0;i<5;i++)
    {
        cout<<"Ingresar un numero entero...>";
        cin>>numero;
        if((numero%3)==0)
        {
            cdivi3++;
            suma+=numero;
        }
    }
    if(cdivi3>0)
    {
         prom=suma/cdivi3;
    }
    else
    {
        prom=0;
    }
    cout<<"Promedio de los numeros divisibles entre 3 es...>"<<prom<<"\n";
    cout << "Contador de divisibles entre 3 es...:"<<cdivi3<<"\n" ;
    return 0;
}
