#include <iostream>

using namespace std;

int main()
{   int num,cifra,suma,maxi,mini,contador,par,impar;
    double promedio;

    cout << "ingresar un numero entero....>";
    cin>>num;
    suma=0;
    cout<<"numero al revez...>";
    maxi=0;
    mini=9;
    contador=0;
    while(num>0)
    {
        cifra= num%10;
        cout<<cifra;
        num= num/10;
        suma+=cifra;
        contador++;

        if((cifra%2)==0)
            par++;
        else
            impar++;

        if (cifra>maxi)
            maxi=cifra;

        if (cifra<mini)
            mini=cifra;
    }
    promedio=suma/contador;
    cout<<"\n";
    cout<<"suma de las cifras....>"<<suma<<"\n";
    cout<<"Cifra Mayor....>"<<maxi<<"\n";
    cout<<"cifra menor...>"<<mini<<"\n";
    cout<<"El promedio de las cifras es....>"<<promedio<<"\n";
    cout<<"numero par....>"<<par<<"\n";
    cout<<"numero impar....>"<<impar<<"\n";


    return 0;
}
