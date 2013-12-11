#include <iostream>

using namespace std;
/* Ingresar el nombre del alumno, nota acumulado y examen. determinar la nota final y ajustarla a 60 si esta entre 57 y 60 */
int main()
{ char nombre [30];
   int na, ne, nf;
   cout <<"Nombre del Alumno...>" ;
   cin.getline(nombre,30);

   cout<<" Nota Acumulada...>" ;
   cin>> na;

   cout<<" Nota examen...>" ;
   cin>>ne;

   nf=na + ne;
   if((nf>57) and (nf<60))
   {
       nf=60;
   }
   cout<<"Nota final es...>"<<nf<<"\n";

    return 0;
}
