#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Ingresar la base y el exponente usando un procedimiento. luego calcular la base y el exponente usando una funcion.
lyego preguntar si desea cntinuar usando una funcion para devolver respuesta s o n vaida.
*/


char respuesta()
{
    char resp;
    do
    {
        cout<<"Desea Continuar...:";
        cin.get(resp);
        _flushall();
    }while((resp!=='s') and (resp=='n'));
}


using namespace std;

int main()
{   char resp;
    int base,expo,potencia;
    do
    {
        ingreso(base,expo);
        poten=potencia(base,expo);
        cout<<"Potencia es"<<poten<<"\n";
        resp=respuesta();
    }while (resp!='n')

    return 0;
}
