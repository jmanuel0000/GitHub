#include <iostream>

using namespace std;
/* Ingresar un numero y presentar la suma de cada uno de ellos. Primero ingresamos el numero en el ciclo while,
despues el numero lo dividimos entre 100(primer resultado), luego el residuo de este resultado lo dividimos entre 10
(segundo resutado) y al final se suma este residuo con los otros dos resultados.
*/
int main()
{   int contador, suma, numero;
    contador=0;
    suma=0;
    numero=0;

    cout << "Ingresar un numero...>" ;
    cin>>numero;

     while(numero!=0)

        {
	    	suma = suma + (numero%10);
	    	numero = numero/10;
            contador++;

        }

        cout<<"La suma de los digitos es...>"<<suma<<"\n";

    return 0;
}
