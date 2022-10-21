#include <iostream>
#include <ctime>
#include "funciones.h"

using namespace std;

int main()
{
    srand(time(0));

    int vNumeros[10];
    int cantidad;
    
    // pedimos los 10 numeros
    cargarNumeros(vNumeros, 10);

    // contar primos
    cantidad = contarPrimos(vNumeros, 10);

    // mostrar cantidad de primos
    cout << "La cantidad de primos son: " << cantidad << endl;
    
    system("pause");
    
    return 0;
}
