#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


using namespace std;
struct alumno
{
    char nombre[30];
    int na,ne,nf;
    char obs[15];
};
alumno alumnx;
void ingreso(alumno &alumnx)
{
    cout<<"Ingresar nombre del alumno...:";
    cin.getline(alumnx.nombre,30);
    cout<<"Nota acumulada....:";
    cin>>alumnx.na;
    cout<<"Nota Examen...:";
    cin>>alumnx.ne;
}

void calcular(alumno &alumnx)
{
    alumnx.nf=alumnx.na + alumnx.ne;
    if (alumnx.nf>=60)
    {
      strcpy(alumnx.obs,"Aprobado");
    }
    else
    {
        strcpy(alumnx.obs,"Reprobado");
    }
}
void presentar (alumno alumnx)
{
    cout<<"El Alumno  "<<alumnx.nombre<<"  tiene un promedio de "<<alumnx.nf<<"  y esta  "<<alumnx.obs<<"\n";
}
int main()
{
    ingreso(alumnx);
    calcular(alumnx);
    presentar(alumnx);
    return 0;
}
