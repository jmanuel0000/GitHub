#include <iostream>

using namespace std;

int main()
{   char nombre[30];
    int nota;

    cout<<"Nombre del Alumno...>";
    cin.getline(nombre,30);

    cout<<"Nota del Alumno...>";
    cin>>nota;

    if (nota<60)
    {
        cout<<"Reprobado";
    }

   else if ((nota>=60) and (nota<=80))
    {
        cout<<"Bueno" ;

    }
   else if ((nota>=81) and (nota<=90))
    {
        cout<<"Muy Bueno";

    }
  else  if ((nota>=91)and (nota<=100))
    {
        cout<<"Sobresaliente" ;
    }
    return 0;
}
