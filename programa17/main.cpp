#include <iostream>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

using namespace std;
/* ingresar el nombre del alumno, luego debemos de pedir las tres notas parciales usando un ciclo, presentar el promedio,
la nota mayor de los tres parciales.
preguntar si desea continuar, al final presentar el nombre del alumno con la mejor nota.*/
int main()
{   int nota, promedio, nmayor, alumnomax, notamayor,suma;
    char nombre[30], respuesta;
    char nombremayor[30];
    char estado[15];

    alumnomax=0;


    do
    {
        cout<<"Nombre del alumno:";
        cin.getline(nombre,30);
        suma=0;
        notamayor=0;
        for(int i=1; i<=3;i++)
        {
            cout<<"Ingresar el parcial...:"<<i<<"..:";
            cin>>nota;
            suma+=nota;
            if  (notamayor<nota)
        {

            notamayor=nota;
        }

        }
        promedio=suma/3;

        if (promedio>=60)
        {
            strcpy(estado,"Aprobado");
        }
        else
        {
            strcpy(estado,"Reprobado");
        }
        cout<<"Promedio del alumno:"<<promedio<<"\n";
        cout<<"Nota mayor es:"<<notamayor<<"\n";
           _flushall();
         if (alumnomax<promedio)
    {
        alumnomax=promedio;
        strcpy(nombremayor,nombre);
    }






        do
        {
            cout<<"Desea Continuar:";
            cin.get(respuesta);
            _flushall();
        } while((respuesta!='N')and (respuesta!='S'));
    }while (respuesta!='N');

    cout<<"Nombre del alumno con mejor nota:"<<nombremayor<<"\n";
    cout<<"Con la nota:"<<notamayor<<"\n";

    return 0;
}
