//input output stream, para poder captuurar entradas y salidas
#include <iostream>

using namespace std; //para no tener que acceder a todas las propiedades de std con std::propiedad

int main()
{
    //para meter los compilados en el gitignore, les puedo dar la extension .o
    int n = 5;
    //el & devuelve esa direccion, y si quiero guardarla como puntero la llamo con *
    int* dirN = &n; //el tipo del puntero obviamente debe ser igual al de la variable
    cout << "Direccion de memoria de la variable: " << &n << "\n";
    //poner * antes del puntero, devuelve el valor al que apunta, si no le mando nada, simplemente da la direccion
    cout << "Valor de la variable segun el puntero (guardada en otra var): " << *dirN << "\n";
    //modificar el valor de la variable a la que apunta el puntero
    *dirN = 10;
    cout << n;
    return 0;
}