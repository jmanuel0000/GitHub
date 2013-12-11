#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Ingresar la base y el exponente usando un procedimiento. luego calcular la base y el exponente usando una funcion.
lyego preguntar si desea cntinuar usando una funcion para devolver respuesta s o n vaida.
*/

using namespace std;
char respuesta()
{
    char resp;
    do
    {
        cout<<"Desea Continuar...:";
        cin.get(resp);
        _flushall();

    }while((resp!='s') and (resp!='n'));
    return resp;

}

void ingreso(int &base, int &expo)
{
    cout<<"Ingresar la base...:";
    cin>>base;
    cout<<"Ingresar exponente...:";
    cin>>expo;
}

int potencia (int base, int expo)
{
    int pot=1;
    for (int i=0;i<expo;i++)
    {
        pot*=base;
    }
    return pot;
}
int main()
{   char resp;
    int base,expo,poten;
    do
    {
        ingreso(base,expo);
        poten=potencia(base,expo);
        _flushall();
        cout<<"Potencia es..."<<poten<<"\n";
        resp=respuesta();

    }while (resp!='n');

    return 0;
}
