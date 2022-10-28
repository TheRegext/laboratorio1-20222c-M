#include <iostream>
#include "rlutil.h"
#include "gui.h"
using namespace std;

int main()
{
    rlutil::setConsoleTitle("Mi Sistemita");
    rlutil::hidecursor();
    rlutil::setColor(15);
    rlutil::setBackgroundColor(7);
    rlutil::cls();
    

    rlutil::anykey();
    
    dibujarRecuadro(5,3,40,10);
    rlutil::locate(7, 4);
    cout << "Esto es un texto";
    
    dibujarVentana(50,3,40,10, "MENU PRINCIPAL");
    
    
    rlutil::anykey();
    
    /*
    int numero;
    
    
    
    cout << "Numero: " <<endl;
    cout << "Edad: ";
    
    rlutil::locate(9, 1);
    rlutil::setBackgroundColor(8);
    rlutil::setColor(15);
    cout << "         ";
    
    
    rlutil::locate(9, 1);
    cin >> numero;
    
    rlutil::locate(7, 2);
    cin >> numero;
    
    rlutil::setBackgroundColor(0);
    
    rlutil::locate(2, 29);
    cout << "Gracias por elegir nuestro sistemita." << endl;
    
    rlutil::anykey();
    rlutil::cls();
    
    for(int i=0; i<3; i++){
        rlutil::locate(2, 30);
        cout << "Pensado.  ";
        rlutil::msleep(1000);
        rlutil::locate(2, 30);
        cout << "Pensado.. ";
        rlutil::msleep(1000);
        rlutil::locate(2, 30);
        cout << "Pensado...";    
        rlutil::msleep(1000);
    }
    
    rlutil::cls();
    cout << "Gracias por utilizar nuestras aplicaciones."<<endl;   
    rlutil::anykey();
    
    rlutil::cls();
    
    for(int i=0; i<=15;i++)
    {
        rlutil::setColor(i);
        cout << "A";
    }
    
    cout << endl;
    
    for(int i=1; i<=15;i++)
    {
        rlutil::setBackgroundColor(i);
        cout << "A";
    }
    
     cout << endl;
    */
    return 0;
}
