#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char nombre[30];
int turno,ventas,ihss,comision,total;

void ingreso(char nombre[],int &turno,int &ventas)
{
    cout<<"Ingresar el nombre del empleado...:";
    cin.getline(nombre,30);


   do
   {
    cout<<"Ingresar el turno 1,2,3...:";
    cin>>turno;

   }while((turno>1)and (turno<3));
   cout<<"Ingresar las ventas...:";
   cin>>ventas;
}

using namespace std;
/* ingresar el nombre del empleado,el turno y las ventas.
 validar que el turno solo sea 1,2,3.
 calcular usando un procedimiento, la comision ganada, el ihss, y el total a pagar.
 presentar los datos calculados usando un procedimiento
 */


int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
