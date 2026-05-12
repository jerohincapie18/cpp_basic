#include <iostream>

using namespace std;

int main()
{
    //la memoria dinamica lo que me permite es basicamente, manipular su espacio: reservo una cantidad de memoria
    // en ejecucion, lo uso, y luego la libero
    int* x = new int; //defino el puntero, y no le mando ninguna variable porque aun no existe, sino la definicion
    // de que tipo de dato apuntara, se puede leer como: el puntero x reserva espacio para un solo entero
    *x = 10; //guardo informacion en el valor del puntero
    cout << "El valor de la variable es: " << *x << "\n";
    cout << "El puntero es: " << x << "\n";
    delete x; //finalmente, libero el puntero
    /* aqui hay algo interesante, al darle delete x, le estoy diciendo al programa que ya no necesito ese
    puntero, y el programa toma eso, y guarda cualquier valor, si le pido que me lo muestre, y si la pido asi
    como aparece, (solo x) el puntero se quedo colgando, un Dangling pointer sobre una direccion que ya no me pertenece
    entonces se le manda un nullpointer justo despues del delete*/
    x = nullptr; // <--- MUY IMPORTANTE: Anulamos el puntero
    // Si ahora intentas hacer cout << *x; el programa se cerrará (crash) 
    // protegiéndote de corromper la memoria del sistema.
    // como accedo de nuevo entonces? simplemente le pido al sistema nueva memoria
    // pongo x = new int, no hace falta el int del inicio, y la misma dinamica, guardar, usar, borrar
    // tambien, le puedo guardar un nuevo valor de alguna variable, x = &nuevoValor
    return 0;
}