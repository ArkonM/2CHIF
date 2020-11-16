// Marlene Reiterer
// 10_12_2019
// 2_PA Beispiel_3: Kommandozeilenparameter sollen rückwärts ausgegeben werden

#include <iostream>

using namespace std;

// Gibt die Kommandozeilenparameter rückwärts(umgedreht)  aus
void printCLA(int anz, char** par){
        int i = 1;			// i beginnt bei 1 damit "./BEFEHL" weggelassen wird
        string s = "";				
        while( i < anz){		// Die Kommandozeilenparameter werden zu einem String, damit man leicher mit ihnen arbeiten kann	
                s += par[i];
                if( i != (anz -1)){		// Damit kein Leerzeichen zu viel am Ende ist
                        s += " ";
                }
                i++;
        }
        cout << s << endl;
        string erg = "";
        i = (s.length() -1);
        while( i >= 0){			// Der String wird umgedreht
                erg  += s[i];
                i--;
        }
        cout << erg << endl;
}

// Hauptprogramm
int main(int argc, char** argv){
        printCLA(argc, argv);
        return 0;
}

