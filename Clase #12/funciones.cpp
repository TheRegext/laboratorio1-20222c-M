#include <iostream>

using namespace std;

/// TIPO DE DATO DEL RETORNO; si no devuelve nada va void
/// NOMBRE => VERBO (ACCION)
/// Parametros (valores)
float sumar(float n1, float n2){
    float result;
    cout << "SUMAR CON FLOTANTES"<<endl;
    result = n1 + n2;
    
    return result;
}

/// sobrecarga de funciones
float sumar(float n1, float n2, float n3){
    return sumar(n1, n2) + n3;
}

float sumar(int n1, int n2){
    cout << "SUMAR CON ENTEROS"<<endl;
    return n1 + n2;
}


bool esPar(int n){
    return n%2 == 0;
}

int costoFabricacion(int x, int b=40){
    return 3 * x + b;
}

/// parametro por omision
float multiplicar(float n1, float n2 = 1){
    return n1 * n2;
}


int main(){
    int suma;
        
    suma = multiplicar(10, 5);
    
    cout << costoFabricacion(50) << endl;
    cout << costoFabricacion(50, 9) << endl;
    
    cout << suma << endl;
    
    /*
    int cantidad=0;
    int numero;
    
    for(int i=1; i<=5; i++){
        cout << "Ingrese numero: ";
        cin >> numero;
        
        if(!esPar(numero)){
            cantidad++;
        }
    }
    
    cout << costoFabricacion(30) << endl;
    cout << costoFabricacion(40) << endl;
    cout << costoFabricacion(50) << endl;
    
    cout << "La cantidad de pares son: "<< cantidad << endl;
    
    
    /// 3 + 5 + 9
    int suma;
    
    suma = sumar(sumar(3,5), 9);
    */
    return 0;
}

