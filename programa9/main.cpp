#include <iostream>

using namespace std;
/* estructuras de repeticion
ingresar 5 numero y presentar al final del ciclo la suma de los numeros ingresados. */

int main()
{   int numero, contador, suma;
    contador=0;
    suma=0;
    while(contador<5)
    {
        cout<<"ingresar un numero...>";
        cin>>numero;

        contador ++; //contador= contador +1

        suma+= numero; //suma = suma + numero;

    }

     cout<<"suma de los numeros es...>" <<suma<<"\n";

    return 0;
}
