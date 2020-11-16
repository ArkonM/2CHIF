/*  author: BRENNER Alexander
    class: 2CHIF
    date: 29/10/2017
    description: Beispiel 5 Inverse String */

#include <iostream>
#include <string>
using namespace std;

string inverseString(string wort);
int main(){
    string input;
    cout << "Geben Sie ein Wort ein!" << endl;
    cout << ">>> ";
    cin >> input;
    if(!cin){return 0;}
    cout << inverseString(input) << endl;
}

string inverseString(string wort){
    char aktZeichen;
    int i{};
    int ordAktZeichen;
    string neuesWort;
    while(i < wort.size()){
        aktZeichen = wort[i];
        ordAktZeichen = int(aktZeichen);
        if(ordAktZeichen >= 65 and ordAktZeichen <= 90){
            ordAktZeichen += 32;
        }else if(ordAktZeichen >=92 and ordAktZeichen <= 122){
            ordAktZeichen -= 32;
        }
    aktZeichen = char(ordAktZeichen);
    neuesWort += aktZeichen;
    i += 1;
    }
    return neuesWort;
}
