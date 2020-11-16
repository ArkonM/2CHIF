// Marlene Reiterer
// 10_12_2019
// Dateiverarbeitung üben: Aus einer Datei lesen

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
	fstream f;		// Spezifisch kann man auch ifstream nehmen, ist dann aber nur zum Auslesen
	string s;
	f.open("/home/marlene/geht/text.txt", ios::in);		// Ändere hier dn Pfad
	while(!f.eof()){			// Solange die Datei nicht leer ist auslesen
		getline(f, s);
		cout << s << endl;
	}
	f.close();		// Datei schließen
	return 0;
}