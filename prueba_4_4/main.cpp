#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<stdio.h>


using namespace std;

int arreglo[5];
void descendente(int arreglo[])

	{
	    for(int conta1=1;conta1<5;conta1++)
	{
		for(int conta2=0;conta2<5;conta2++)
            {
			if(arreglo[conta1]>arreglo[conta2])
			{
				int temp=arreglo[conta2];
				arreglo[conta2]=arreglo[conta1];
				arreglo[conta1]=temp;
			}
		}
	}
}
void ascendente(int arreglo[])
{
	for(int conta1=1;conta1<5;conta1++)
        {
		for(int conta2=0;conta2<5;conta2++)
		{
			if(arreglo[conta1]<arreglo[conta2])
			{
				int temp=arreglo[conta2];
				arreglo[conta2]=arreglo[conta1];
				arreglo[conta1]=temp;
			}
		}
	}
}
void pares(int arreglo[])
{
		for(int conta=0;conta<5;conta++)
            {
			if(arreglo[conta]%2==0)
			{
				arreglo[conta]=0;
			}
		}
}
void ingresar(int arreglo[])
{
	for(int conta=0;conta<5;conta++)
    {
		cout<<endl<<conta+1<<" Ingresar un numero...:";
		cin>>arreglo[conta];
	}
}
void presentar(int arreglo[])
{
	for(int conta=0;conta<5;conta++)
    {
		cout<<" "<<arreglo[conta];
	}
	cout<<endl;
}
int main()

	{
    ingresar(arreglo);
	ascendente(arreglo);
	cout<<"Orden Ascendente"<<endl;
	presentar(arreglo);
	descendente(arreglo);
	cout<<"Orden Descendente"<<endl;
	presentar(arreglo);
	pares(arreglo);
	cout<<"Substituir numeros pares por 0"<<endl;
	presentar(arreglo);
        return 0;
}
