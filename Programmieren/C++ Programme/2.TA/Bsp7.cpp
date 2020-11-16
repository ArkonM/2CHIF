//Schneider Armin
//18.12.2019

#include <iostream>
using namespace std;


enum FARBEN1{blue, green, red};

enum class FARBEN2{red, blue, green};


int main(){
    cout << "FARBEN1{blue, green, red}" << endl;
    cout << "FARBEN2{red, blue, green}" << endl;
    string inp{};
    cin >> inp;
    FARBEN1 farbe{};
    FARBEN2 farbe2{};
    int i{};
    if(inp=="blue"){
        farbe = blue;
        i = farbe;
        cout << i << endl;
    }else if(inp=="green"){
        farbe = green;
        i = farbe;
        cout << i << endl;
    }else if(inp=="red"){
        farbe = red;
        i = farbe;
        cout << i << endl;
    }else if(inp=="blue2"){
        farbe2 = FARBEN2::blue;
        i = (int)farbe2;
        cout << i << endl;
    }else if(inp=="red2"){
        farbe2 = FARBEN2::red;
        i = (int)farbe2;
        cout << i << endl;
    }else if(inp=="green2"){
        farbe2 = FARBEN2::green;
        i = (int)farbe2;
        cout << i << endl;
    }else
        cout << "Diese Eingabe ist ungültig!" << endl;
}