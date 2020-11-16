#include <iostream>
#include <fstream>

using namespace std;

// Funktion zählt die Zeichen und gibt sie in einer Kategorie aus
void countFile(string fn, int *er){
        int i = 0;
        int anzbuch = 0;
        int anzzahlen = 0;
        int anzop = 0;
        int anzandere = 0;
        while( i <= *er){
                if(((fn[i]) <= 90) && ((fn[i]) >= 65)){                         // Großbuchstaben
                        anzbuch += 1;
                }else if(((fn[i] <= 122) && ((fn[i])) >= 97)){                  // Kleinbuchstaben
                        anzbuch += 1;
                }else if(((fn[i]) <= 57) && ((fn[i]) >= 48)){                   // Zahlen
                        anzzahlen += 1;
                }else if(((fn[i]) == 43) || ((fn[i]) == 45) || ((fn[i]) == 47) || ((fn[i]) == 42) || ((fn[i] == 94)) || ((fn[i]) == 37) || ((fn[i]) == 61)){    // Operatoren
                       anzop += 1;
                }else{                                                          // Andere
                        anzandere += 1;
                }
                i++;
                *er - 1;
        }
        cout << fn[i] << endl;
        cout << "Anzahl Buchstaben:" << anzbuch << endl;
        cout << "Anzahl Zahlen: " << anzzahlen << endl;
        cout << "Anzahl Operatoren: " << anzop << endl;
        cout << "Anzahl Andere: " << anzandere << endl;
}

// Hauptprogramm
int main(){
        fstream f;
        string s;
        string e;
        f.open("/home/marlene/2_PA/datei.txt", ios::in);              // Datei wird geöffnet
        while(!f.eof()){                                                // Solange die Datei nicht leer ist wird sie gelesen
                getline(f,s);                                           // s + eine Zeile aus der Datei
                e += s;
        }
        int z = (e.length() -1);
        cout << e << endl;
        int *er = &z;
        countFile(e, er);                                               
        f.close();							// Datei wird geschlossen
        return 0;
        /*
        string line; 
        ifstream julianistcool(fn);
        if(julianistcool.is_open()){
                while(getline(julianistcool, line)){
                        cout << line
                }
                julinaistcool.close()
        }else{
                throw ...
        }

        */
}                                                                                                                                                                                    
