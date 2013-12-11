#include <iostream>

using namespace std;

int main()
{   int numero,nmayor, nmenor;
    char respuesta[2];
    nmayor=999;
    nmenor=0;
    do{
    do
    {
    cout << "Ingresar un numero par entre 50-150...>";
    cin>>numero;
    if ((numero%2)==0)

        if (numero>=nmayor)
        {
            nmayor=numero;
        }
       if (numero<=nmenor)
        {
            nmenor=numero;
        }

    }while(numero<50 or numero>150 or numero%2!=0);

    do{

                cout<<"Desea continuar?(S/N): ";
                cin>>respuesta;

            } while(respuesta!= 'S' and respuesta!='N');

            if(respuesta=='N')
            {
                cout<<"Numero Mayor es....>"<<nmayor<<"\n";
                cout<<"Numero Menor es....>"<<nmenor<<"\n";
            }

            }while(respuesta=='S');



    return 0;
}
