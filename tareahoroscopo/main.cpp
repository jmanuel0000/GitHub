#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

void fecha(int &dia,int &mes,int &ano)
{
    do
    {
    cout<<"Ingresar el dia...:";
    cin>>dia;
    }
    while(!(dia>=1 and  dia<=31));

    do
    {
    cout<<"Ingresar el mes....:";
    cin>>mes;
    }
    while(!(mes>=1 and  mes<=12));

    cout<<"Ingresar el año..:";
    cin>>ano;

}

void signo(int dia,int mes)
{
    cout<<"El signo es....:";

    if(mes==1 and dia>=21 and  dia<=31)
    {
        cout<<"acuario";
    }
    else if(mes==2 and  dia>=1 and dia<=18)
    {
        cout<<"acuario";
    }
    else if(mes==2 and  dia>=19 and  dia<=28)
    {
        cout<<"piscis";
    }
    else if(mes==3 and  dia>=1 and  dia<=20)
    {
        cout<<"piscis";
    }
     else if(mes==3 and  dia>=21 and  dia<=30)
    {
        cout<<"aries";
    }
     else if(mes==4 and  dia>=1 and  dia<=20)
    {
        cout<<"aries";
    }
       else if(mes==4 and  dia>=21 and  dia<=30)
    {
        cout<<"tauro";
    }
     else if(mes==5 and  dia>=1 and  dia<=21)
    {
        cout<<"tauro";
    }
      else if(mes==5 and  dia>=21 and  dia<=30)
    {
        cout<<"tauro";
    }
     else if(mes==6 and  dia>=1 and  dia<=21)
    {
        cout<<"tauro";
    }
     else if(mes==6 and  dia>=22 and  dia<=30)
    {
        cout<<"geminis";
    }
     else if(mes==7 and  dia>=1 and  dia<=21)
    {
        cout<<"geminis";
    }
       else if(mes==7 and  dia>=22 and  dia<=30)
    {
        cout<<"cancer";
    }
       else if(mes==8 and  dia>=1 and  dia<=22)
    {
        cout<<"cancer";
    }
      else if(mes==8 and  dia>=23 and  dia<=30)
    {
        cout<<"leo";
    }
      else if(mes==9 and  dia>=1 and  dia<=23)
    {
        cout<<"leo";
    }
        else if(mes==9 and  dia>=24 and  dia<=30)
    {
        cout<<"virgo";
    }
        else if(mes==10 and  dia>=1 and  dia<=23)
    {
        cout<<"virgo";
    }
       else if(mes==10 and  dia>=24 and  dia<=30)
    {
        cout<<"libra";
    }
       else if(mes==11 and  dia>=1 and  dia<=23)
    {
        cout<<"libra";
    }
     else if(mes==11 and  dia>=24 and  dia<=30)
    {
        cout<<"escorpion";
    }
    else if(mes==12 and  dia>=1 and  dia<=22)
    {
        cout<<"escorpion";
    }
     else if(mes==12 and  dia>=23 and  dia<=30)
    {
        cout<<"sagitario";
    }
    else if(mes==13 and  dia>=1 and  dia<=21)
    {
        cout<<"sagitario";
    }
    else if(mes==13 and  dia>=23 and  dia<=30)
    {
        cout<<"sagitario";
    }
     else if(mes==14 and  dia>=22 and  dia<=30)
    {
        cout<<"capricornio";
    }

}





void validar(char &resp)
{
    do
    {
        cout<<"Desea ingresar otra Fecha (s/n): ";
        _flushall();
        cin.get(resp);
    }
    while (!(resp=='s' or resp=='n'));
}
int main()
{
    int dia,mes,ano,i,f=1;
    char resp;

    for(i=1;i<=f;i++)
    {
        fecha(dia,mes,ano);
        signo(dia,mes);


        validar(resp);


        if(resp=='s')
        {
            f+=1;
        }
    }
    return 0;
}
