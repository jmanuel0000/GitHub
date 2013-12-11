#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

using namespace std;

void inicio(int arr[3][3])
{
    for(int f=0; f < 3; f++)
{
        for(int c=0; c < 3; c++ )
        {
            arr[f][c]==-1;
        }
    }
}

void guardar(int arr[3][3])
{
    for(int f=0;f<3;f++)
        {
        for(int c=0; c < 3; c++ )
        {
            if( arr[f][c]==-1 )
            {
                cout << " | ";
            }
            else
                {

                if(arr[f][c]==1)
                {
                    cout << "x"  << " | ";
                }
                else if(arr[f][c]==0)
                {
                    cout << "o"  << " | ";
                }
            }
        }

    }
}

void estrangulo(int arr[3][3], int tipo){
    int cont;


    for(int f=0; f < 3; f++){
        cont = 0;
        for(int c=0; c < 3; c++){
            if(arr[f][c] == tipo){
                cont++;
            }
            else{
                break;
            }
        }
        if( cont == 3){

        }
    }


    for(int c=0; c < 3; c++){
        cont = 0;
        for(int f=0; f < 3; f++){
            if(arr[f][c] == tipo){
                cont++;
            }
            else{
                break;
            }
        }
        if( cont == 3){
            return true;
        }
    }


    if(arr[0][0] == tipo && arr[1][1] == tipo && arr[2][2] == tipo){
        return true;
    }
    else if(arr[0][2] == tipo && arr[1][1] == tipo && arr[2][0] == tipo){
        return true;
    }

    return false;
}

void disponible(int arr[3][3]){

    for(int f=0; f < 3; f++){
        for(int c=0; c < 3; c++){
            if( arr[f][c] == -1){
                return true;
            }
        }
    }
    return false;
}

void valido(int arr[3][3],int f,int c){
    if(f < 0 || f > 2 || c < 0 || c > 2){
        return false;
    }

    if( arr[f][c] != -1){
        return false;
    }

    return true;
}

void cambiarturno(int &turno){
    if(turno == 1){
        turno = 0;
    }
    else{
        turno = 1;
    }
}

int main()
{
    int tablero[3][3], turno = 1, op, fila, col,valido,ganador;
    char j1[30], j2[30];


          inicio(tablero);
          cout <<"Jugador 1:";
          cin>>j1;
           cout<<"Jugador 2:";
           cin >>j2;




                    do{
                        cout << "Ingrese coordenada Jugador " <<turno<< endl;
                        cout << "Fila(0-2):";
                        cin >> fila;
                        cout << "Columna(0-2):";
                        cin >> col;
                        valido = esvalido(tablero, fila, col);
                    }while(!valido);


                    tablero[fila][col] = turno;
                    guardar(tablero);
                    ganador = estrangulo(tablero,turno);
                    if(ganador)
                    {
                        if(turno == 1 )
                        {
                            cout <<j1<< " Vence a  "<<j2<< endl;
                        }
                        else
                        {
                            cout <<j2<< " Vence a " <<j1<< endl;
                        }

                    }






    return 0;
}

