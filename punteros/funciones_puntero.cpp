#include <iostream>

using namespace std;

void duplicarValor(int* a) //void, no devuelve nada, si devolviera algun dato, se pone de ese tipo
{
    *a*=2; //el asterisco al inicio le dice que rescate el valor de donde apunta
}

int main()
{
    //recordar que, las funciones crean variables temporales de uso, y estas mueren cuando acaba la funcion
    // si se desea guardar la variable que se manipulo, se devuelve con return, pero usar puntero cambia el uso
    // a la funcion se le define que reciba un parameto puntero, y cuando se haga el llamado, como argumento
    // se le envia el puntero de la variable (si la var es a, se pone de arg &a)
    int n = 5;
    cout << "El valor de la variable es " << n << "\n";
    duplicarValor(&n);
    cout << "El valor de la variable, luego de duplicarlo es " << n;
    return 0;
}