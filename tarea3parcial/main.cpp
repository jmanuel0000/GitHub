#include <iostream>

using namespace std;

const int lin=6;
const int col=3;

int num[lin][col];

void ingreso(int num[lin][col])
{
    for( int l=0; l<lin-1; l++ )
    {
        for (int c=0; c<col; c++)
        {
            cout<<"ingresar los datos["<<l<<","<<c<<"]..";
            cin>> num[l][c];

        }
    }       cout<<"\n";

}


void promColumnas(int num[lin][col])
{
    for (int c=0; c<col; c++)
    {
        num[lin-1][c]=0;

        for( int l=0; l<lin-1; l++ )
        {
            num[lin-1][c]+= num[l][c];

        }
            num[lin-1][c]= num[lin-1][c]/(lin-1);
    }
}

void presentar(int num[lin][col])
{
     for( int l=0; l<lin; l++ )
    {
        for (int c=0; c<col; c++)
        {
            cout<< num[l][c] << " ";
        }
            cout<<"\n";
    }


}
int main()
{
        ingreso(num);
        promColumnas(num);
        presentar(num);

    return 0;
}
