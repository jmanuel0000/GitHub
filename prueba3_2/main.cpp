#include <iostream>

using namespace std;

int vnumero,vcifras;
int ingreso()


{   int numero;
    do
    {
        cout<<"Ingresar un numero par o divible entre 5....:";
        cin>>numero;
    }while(!(((numero % 2)==0) or ((numero % 5)==0)));
    return numero;
}

  int contarCifras(int numero)
{   int cifras;
    while(numero>0)
    {
        cifras++;
        numero=numero/10;
    }
    return cifras;
}

int main()
{   for(int i=0;i<5;i++)

   {
   vnumero=ingreso();
   vcifras=contarCifras(vnumero);

   cout<<vnumero<<" Tiene "<<vcifras<<" cifras "<<"\n";
   }
    return 0;
}
