#include <iostream>
#include "rlutil.h"
#include "gui.h"
using namespace std;

void dibujarRecuadro(int x, int y, int ancho, int alto){

    for(int i=x; i<=x+ancho; i++){
        rlutil::locate(i, y);
        cout << (char)196;
        
        rlutil::locate(i, y+alto);
        cout << (char)196;
    }
    
    for(int i=y; i<=y+alto; i++){
        rlutil::locate(x, i);
        cout << char(179);
        
        rlutil::locate(x+ancho, i);
        cout << char(179);
    }
    
    rlutil::locate(x, y);
    cout << (char)218;
    
    rlutil::locate(x, y+alto);
    cout << (char)192;
    
    rlutil::locate(x+ancho, y);
    cout << (char)191;
    
    rlutil::locate(x+ancho, y+alto);
    cout << (char)217;
}



void dibujarRecuadroDoble(int x, int y, int ancho, int alto){

    for(int i=x; i<=x+ancho; i++){
        rlutil::msleep(10);
        rlutil::locate(i, y);
        cout << (char)205;
        
        rlutil::locate(i, y+alto);
        cout << (char)205;
    }
    
    for(int i=y; i<=y+alto; i++){
        rlutil::msleep(10);
        rlutil::locate(x, i);
        cout << char(186);
        
        rlutil::locate(x+ancho, i);
        cout << char(186);
    }
    
    rlutil::locate(x, y);
    cout << (char)201;
    
    rlutil::locate(x, y+alto);
    cout << (char)200;
    
    rlutil::locate(x+ancho, y);
    cout << (char)187;
    
    rlutil::locate(x+ancho, y+alto);
    cout << (char)188;
}


void dibujarVentana(int x, int y, int ancho, int alto, const char *titulo){
    
    rlutil::setColor(1);
    dibujarRecuadroDoble(x,y,ancho,alto);
    rlutil::setColor(15);
    rlutil::locate(x+2, y+1);
    cout << titulo;
    
    rlutil::setColor(1);    
    for(int i=x; i<=x+ancho; i++){
        rlutil::locate(i, y+2);
        cout << (char)205;
    }
    
     rlutil::locate(x, y+2);
    cout << (char)204;
    
    rlutil::locate(x+ancho, y+2);
    cout << (char)185;
    rlutil::setColor(15);
    

}
