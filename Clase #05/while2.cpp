#include <iostream>
using namespace std;
/// Se ingresa una lista de numero que finaliza cunado se ingresa un numero que no es positivo
/// informar la suma de todos

int main(){
    
    int n=1;
    int suma = 0;
    
    while(n > 0){
        
        cout << "Ingrese numero: ";
        cin >> n;    
        
        suma += n;
    }
    
    cout << "Suma: " << suma << endl;

    return 0; 
}
