//Schneider Armin
//Bitoperatoren: &-and, |-or, ~-not, ^ -xor

#include <iostream>
#include <string>

using namespace std;

char eingabe(){
    char eing {};
    cout << "Bitte geben Sie den Buchtsaben ein: " << endl;
    cin >> eing;
    return eing;
}


string char2hex(char chr){
    string erg {};
    int number  = 240;
    int temp {};
    for(int i = 0;i < 2; ++i){
        temp = ((chr & number) >> (4 * (1-i)));
        
        switch(temp){
            case 10: erg+='A'; break;
            case 11: erg+='B'; break;
            case 12: erg+='C'; break;
            case 13: erg+='D'; break;
            case 14: erg+='E'; break;
            case 15: erg+='F'; break;
            default: erg+=temp; break;
        }
        number = number >> 4;
    }
    return erg;
}


int main(){
    char eing {};
    string erg {};
    eing = eingabe();
    erg = char2hex(eing);
    cout << "Das ergebniss lautet" << erg << endl;
}