// Marlene Reiterer
// 10_12_2019
// Dateiverarbeitung üben: Eine Datei beschreiben

#include <iostream>
#include <fstream>

using namespace std;

int main(){
	fstream f;
	f.open("/home/marlene/geht/text.txt", ios::out); // Die Datei text.txt wird zum Schreiben geöffnet; umändern beim Ausprobieren
	f << "Hewwwoooo" << endl; 	// Wird in die Datei geschrieben
	f.close();	// Datei wird geschlossen
	return 0;
}
