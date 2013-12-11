#include <iostream>

using namespace std;
     /* Ingresar la cantidad de numeros que necesitamos pedir.
     luego ingresar el numero y determinar si es par o impar.
     al final presentar cuantso fueron pares e impares. */
int main()
{   int numero, cpar , cimpar, contador, nveces;

     contador=0;
     cimpar=0;
     cpar=0;
     cout<<"cuantos numero desea ingresar?";
     cin>>nveces;

     while(contador<nveces)
     {

contador++;

    cout << "Ingresar un numero>";
    cin>>numero;

    if ((numero % 2)==0)
    {
        cout<<" el numero es par"<<"\n";
        cpar++;

    }
     else
     {
         cout<<"el numero es impar"<<"\n";
         cimpar++;

     }

     }

       cout<<" numero de pares es" <<cpar<<"\n";
       cout<<" numero de impares es" <<cimpar<<"\n";

    return 0;
}
