#include <iostream>
#include "funciones.h"
#include "dados.h"
using namespace std;

// defino las funciones
int contarPrimos(int vec[], int tam)
{
    int cantidad = 0;

    for(int i=0; i<=tam-1; i++){
        if(esPrimo(vec[i])){
            cantidad++;
        }
    }

    return cantidad;
}


bool esPrimo(int n){
    int primo=0;
    for(int i=1; i<=n; i++){
        if(n%i == 0){
            primo++;
        }
    }
    
    if (primo==2){
        return true;
    }
    
    return false;
}



void cargarNumeros(int vec[], int tam)
{
    for(int i=0; i<=tam-1; i++)
    {
       // cin >> vec[i];
       vec[i] = tirarDado();
    }
}

void mostrarNumeros(int vec[], int tam)
{
    for(int i=0; i<=tam-1; i++)
    {
        cout << vec[i] << endl;
    }
}

// 0 1 2 3 4 5 6 7 8 9


