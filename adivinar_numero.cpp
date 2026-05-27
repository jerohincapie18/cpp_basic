#include <iostream>
#include <random>
using namespace std;

int main()
{
    int rango;
    int nUser;
    int nRandom;
    cout << "--- Adivinar numero ---" << endl;
    cout << "Elija un rango para adivinar 1 - ?: ";
    cin >> rango;
    // generar numero random. pero que esta pasando?
    random_device rd; //captura ruido del procesador para generar algo aleatorio
    mt19937 gen(rd()); //mt19937 es el estandar para el generador, toma el ruido y lo convierte
    uniform_int_distribution<> distr(1,rango); // aqui adapto lo que genero arriba simplemente de un numero del 1 al 100
    nRandom = distr(gen); //aqui le mando lo generado por el ruido con el estandar con el molde de 1 a 100
    //cout << "Numero random: " << nRandom << endl;
    cout << "Ingrese un numero: ";
    cin >> nUser;
    do
    {
        if(nUser != nRandom)
        {
            cout << "No adivinaste el numero :c. " << endl << "Ingresa un numero de nuevo: ";
            cin >> nUser;
        }
    } while (nUser != nRandom);
    cout << "Ganaste, advinaste el numero: " << nRandom << endl;
    
    return 0;
}