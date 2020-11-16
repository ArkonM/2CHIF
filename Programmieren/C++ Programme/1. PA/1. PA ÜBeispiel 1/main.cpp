//Schneider Armin
//Das Main und die Eingabe des Programmes

#include <iostream>
#include "summe.h"
using namespace std;

unsigned int eingabe(){
     int eing {};
    cout << "Bitte geben Sie hier die Zahl ein: ";
    cin >> eing;
    return eing;
}

int main(){
    int zahl {};
    zahl = eingabe();
    cout << "Das Ergebnis von " << zahl << " lautet: " << sum(zahl) << endl;
    return 0;
}