#include <iostream>

using namespace std;
/* Ingresar el dia mes y el a�o y determinar si la fecha esta correcta */
int main()
{   int ano, mes, dia;
    cout << "Ingresar el A�o...>";
    cin>>ano;

    cout << "Ingresar el Mes...>";
    cin>>mes;

    cout << "Ingresar el Dia...>";
    cin>>dia;

    if (ano>0)
    {
        cout<<" A�o es correcto"<<"\n";
    }

    else
    {
        cout<<" A�o es incorrecto"<<"\n";
        cout << "Ingresar el A�o...>";
        cin>>ano;
    }
    if (mes<=12)
    {
        cout<<"Mes es correcto"<<"\n";
    }

    else if(mes>12)
    {
        cout<<" Mes es incorrecto"<<"\n";
    }



    if ((mes==1 or mes==3 or mes==4 or mes==6 or mes==7 or mes==5 or mes==8 or mes==9 or mes==10 or mes==11 or mes==12) and (dia<31))
    {
        cout<<"Dia es correcto"<<"\n";
    }

    else
    {
        cout<<"Dia es incorrecto"<<"\n";
    }

    if((mes==2) and (dia<=29))
        {
            cout<<"Dia es incorrecto"<<"\n";
        }


    return 0;
}
