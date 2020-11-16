//Schneider Armin
//Zweite PA, zweites Beispiel
//16.12.2019

#include <connect.h>
#include <iostream>
#include <fstream>

using namespace std;


int main(){
    fstream f;
    string s {};
    int ar[4];
    int *pa = ar;
    string txt {};
    try{
        if(f.isopen){
    f.open("/home/armin/Desktop/2CHIF/Programmieren/C++ Programme/2. PA/2.PA_Beispiel-2/Text.txt", ios::in);
    while(!f.eof()){
        getline(f, s);
        txt += s;
    }
    }
    countFile(txt, pa);
    cout << "Der eingegebene Text enthält: " << ar[0] << " Buchstaben" << endl;
    cout << "Der eingegebene Text enthält: " << ar[1] << " Zahlen" << endl;
    cout << "Der eingegebene Text enthält: " << ar[2] << " Operationen" << endl;
    cout << "Der eingegebene Text enthält: " << ar[3] << " Andere" << endl;
}