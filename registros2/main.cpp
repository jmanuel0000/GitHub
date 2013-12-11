#include <iostream>

using namespace std;

/* elaborar un programa donde se declare la siguiente estructura, Nombre, Horas, hm,he,pn,pe,pb,ihss y tp.
se tiene que elaborar un procedimiento para ingresar los datos al reguistro, luego debemos calcular en un procedimiento.
se tiene que elaborar una funcion para determinar si el seguro solcial donde solo se ingrese el pago buto que es parte de la estructura y nos va devuelva el ihssm

luego presentar datos usando un procediminento */

int seguro(int pb)
{
    if (pb>7000)
        return 245;
    else
        return 0.035*pb;
}
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
