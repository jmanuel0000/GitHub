#include <iostream>

using namespace std;
/* ingresar la base y el exponente y determinar la potencia usando el ciclo for */
int main()
{   int base, expo, poten;

    cin>>base;
    cin>>expo;
    poten=1;

    for(int i=0; i<expo;i++)
    {
        poten= poten * base;
    }
    cout << "Potencia es...>"<<poten<<"\n";
    return 0;
}
