#include <iostream>
using namespace std;
/// Se ingresa una lista de numero que finaliza cunado se ingresa un numero que no es positivo
/// informar la suma de todos

int main(){
    
    int n;
    int suma = 0;
    
    cout << "Ingrese numero: ";
    cin >> n;
    
    while(n > 0){
        
        suma += n;
        
        cout << "Ingrese numero: ";
        cin >> n;    
    }
    
    
    cout << "Suma: " << suma << endl;

    return 0; 
}
