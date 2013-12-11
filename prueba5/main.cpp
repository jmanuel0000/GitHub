#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


using namespace std;
struct empleado
{   char nombre[30];
    int turno;
    double ventas,comision,tb,ihss,totalp,porcomision;
};
empleado emple;

void ingreso(empleado &emple)
{
    cout<<"Ingresar el Nombre del Empleado:";
    cin.getline(emple.nombre,30);
    cout<<"Ingrese las ventas:";
    cin>>emple.ventas;

    do
    {
        cout<<"Ingresar Turno 1,2,3:";
        cin>>emple.turno;

    }while(!((emple.turno>=1) and (emple.turno<=3)));
}

int seguro(double ventas)
 {
     if (ventas>=7000)
{
    return 245;
}
else
 {
     return 0.035 * ventas;

 }

 }

double  pc(int turno)
{
    switch (turno)
    {
        case 1:
            return 0.03;
            break;
        case 2:
            return 0.05;
            break;
        default:
            return 0.06;
            break;
    }
}

void calculo (empleado&emple)
{   emple.porcomision= pc(emple.turno);
    emple.comision=emple.porcomision*emple.ventas;
    emple.ihss=seguro(emple.ventas)-emple.tb;
    emple.tb= emple.ventas+emple.comision;
    emple.totalp=emple.tb-emple.ihss;
}

void presentar (empleado emple)
{
    cout<<"Nombre del Empleado:"<<emple.nombre<<"\n";
    cout<<"% de comision:"<<emple.porcomision<<"\n";
    cout<<"Pago por Comision:"<<emple.comision<<"\n";
    cout<<"Ihss:"<<emple.ihss<<"\n";
    cout<<"Total Pago Bruto:"<<emple.tb<<"\n";
    cout<<"Total a Pagar:"<<emple.totalp<<"\n";

}


int main()
{
       ingreso(emple);
       calculo(emple);
       presentar(emple);

        return 0;
}
