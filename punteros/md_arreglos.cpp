#include <iostream>

using namespace std;

int main()
{
    /* un flujo muy basico para llenar y mostrar datos de un arreglo
    int n = 2;
    string personas[n];

    //ingresar
    for(int i=0; i<n; i++)
    {
        cout << "Ingrese el nombre: ";
        cin >> personas[i];
    }
    //mostrar
    for(int j=0; j<n; j++)
    {
        cout << "Persona " << (j+1) << ": " << personas[j];
    } */
    
    //como seria con manejo dinamico
    int n;
    cout << "Ingrese cuantas personas son: ";
    cin >> n;
    string* personas = new string[n]; //el puntero personas reserva un espacio para una n cantidad de strings
    // lo miso que el anterior pero para guardar varios datos en un arreglo
    for(int i=0; i<n; i++)
    {
        cout << "Ingrese el nombre: ";
        cin >> personas[i]; // por que no va con *personas[i] ?
    }
    for(int j=0; j<n; j++)
    {
        cout << "Persona " << (j+1) << ": " << personas[j] << "\n";
    }

    delete[] personas; //el delete debe saber que esta borrando un arreglo
    personas = nullptr;

    /* que pasa si en el bucle de llenado le pongo un *? c++ primero traduce personas[i] a *(personas + i)
    por lo que ya obtengo la direccion de memoria. personas es la direccion de inicio, + i, le dice a c++ que 
    de i saltos hacia adelante en memoria para llegar al espacio correcto, finalmente, *, entra en esa direccion 
    para guardar el dato, entonces que ocurre si le pongo un *, arrojaria un error, porque personas[i] ya devuelve
    un objeto string (la caja donde voy a guardar el texto)*/

    return 0;
}