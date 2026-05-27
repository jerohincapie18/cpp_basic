#include <iostream>

using namespace std;

//declarar las funciones. esto se puede enviar en un .h y luego llamar un include aca mismo
int gcd(int a, int b);

int main()
{
    int n1, n2;
    cout << "--- Greatest common divisor ---" << endl;
    cout << "Ingrese el numero 1: " << endl;
    cin >> n1;
    cout << "Ingrese el numero 2: " << endl;
    cin >> n2;
    //n1 = -4;
    //n2 = 14;
    cout << "El mayor comun divisor es: " <<gcd(n1,n2) << endl;
}

int gcd(int a, int b)
{
    //reviso que numero es mayor y declaro el gcd para retornarlo
    int my, result;
    //dos variables para manejar los resultados
    int r1, r2;
    if(a > b)
    {
        my = a;
    }
    else
    {
        my = b;
    }

    while(my > 0)
    {
        r1 = a%my;
        r2 = b%my;
        if((r1==0) && (r2==0))
        {
            result = my;
            my = 0;
        }
        my--;
    }
    return result;
}