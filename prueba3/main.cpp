#include <iostream>

using namespace std;

int numero,cifras;


void ingreso(int &numero)
{   do
    {
        cout<<"Ingresar un numero par o divible entre 5....:";
        cin>>numero;
    }while(!(((numero % 2)==0) or ((numero % 5)==0)));
}

void contarCifras(int numero,int &cifras)
{
    while(numero>0)
    {
        cifras++;
        numero=numero/10;
    }
}

int main()
{   for(int i=0;i<5;i++)

   {
   cifras=0;
   ingreso(numero);
   contarCifras(numero,cifras);

   cout<<numero<<"Tiene"<<cifras<<"cifras"<<"\n";
   }
    return 0;
}
