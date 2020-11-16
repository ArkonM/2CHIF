/* author: BRENNER Alexander Reinhard
   class: 2CHIF
   date 28.09.2017
   short description: Reserve polish notation calculator
   main.cpp */

#include <iostream>
#include <string>
using namespace std;

int main(){
														//Variableninitialisierung
	string befehle[3] = {"print", "clear", "quit"};
	size_t pos;
	double r1, r2, r3, r4;
	r1 = 0.0;
	r2 = 0.0;
	r3 = 0.0;
	r4 = 0.0;
	string rechenoperator;
	double erg;
	string inp;
//---------------------------------------------------	// Hauptteil (Schleife)
	while(true){
		cout << "-------------------" << endl;
		cout << ">> ";		
		cin >> inp;
		if(!cin){										//Falls CTRL - D eingegeben wird und so die Eingabe unterbrochen wird, wird das Programm beendet
		    cout << endl;
		    break;
		}
		if(inp == befehle[0]){							// Hier wird überprüft ob die Eingabe im Befehlsregister enthalten ist (Ob die Eingabe ein Befehl ist)
			cout << "R1: " << r1 << "| R2: " << r2 << "| R3: " << r3 << "| R4: " << r4 << endl;
			continue;
		}
		if(inp == befehle[1]){
			r1 = 0.0;
			r2 = 0.0;
			r3 = 0.0;
			r4 = 0.0;
			cout << "Alle Register wurde gelöscht!" << endl;
			continue;
		}
		if(inp == befehle[2]){
			break;
		}
//---------------------------------------------------
		try{											//Hier wird die Eingabe auf ihre Gültigkeit überprüft
			r4 = r3;
			r3 = r2;
			r2 = r1;
			r1 = stod(inp, &pos);
			if(pos != inp.size()){
				cout << "FEHLER! Geben Sie bitte NUR eine Zahl ein!" << endl;
				continue;
			}
		}catch(invalid_argument){
		    if(inp != "clear" && inp != "print"){
			    cout << "Gib eine richtige Zahl ein!" << endl;
				continue;
			}		

		}
//---------------------------------------------------
		cout << ">> ";
		cin >> inp;
		if(!cin){										//Falls CTRL - D eingegeben wird und so die Eingabe unterbrochen wird, wird das Programm beendet
		    cout << endl;
		    break;
		}
		if(inp == befehle[0]){							// Hier wird überprüft ob die Eingabe im Befehlsregister enthalten ist (Ob die Eingabe ein Befehl ist)
			cout << "R1: " << r1 << "| R2: " << r2 << "| R3: " << r3 << "| R4: " << r4 << endl;
			continue;
		}
		if(inp == befehle[1]){
			r1 = 0.0;
			r2 = 0.0;
			r3 = 0.0;
			r4 = 0.0;
			cout << "Alle Register wurde gelöscht!" << endl;
			continue;
		}
		if(inp == befehle[2]){
			break;
		}
//---------------------------------------------------
		try{											//Hier wird die Eingabe auf ihre Gültigkeit überprüft
			r4 = r3;
			r3 = r2;
			r2 = r1;
			r1 = stod(inp, &pos);
			if(pos != inp.size()){
				cout << "FEHLER! Geben Sie bitte NUR eine Zahl ein!" << endl;
				continue;
			}
		}catch(invalid_argument){
		    if(inp != "clear" && inp != "print"){
			    cout << "Gib eine richtige Zahl ein!" << endl;
				continue;
			}		

		}
//---------------------------------------------------
	cout << ">> ";
	cin >> rechenoperator;
	if(!cin){
	cout << "PROGRAMM WIRD BEENDET (UNTERBRECHUNG DES EINGABESTROMS)" << endl;
	    break;
	}
	if(rechenoperator == befehle[0]){
			cout << "R1: " << r1 << "| R2: " << r2 << "| R3: " << r3 << "| R4: " << r4;
	}
	if(rechenoperator == befehle[1]){
	    r1 = 0.0;
	    r2 = 0.0;
	    r3 = 0.0;
        r4 = 0.0;
	    cout << "Alle Register wurde gelöscht!";
	}
	if(rechenoperator == befehle[2]){
	    break;
	}
//---------------------------------------------------
	if (rechenoperator == "+"){								//Hier wird die Gültigkeit des Rechenoperators geprüft
		erg = r1 + r2;
	}else{
 		 if (rechenoperator == "-"){
			erg = r1 - r2;
		}else{
			 if (rechenoperator == "*"){
				erg = r1 * r2;

			}else{
		 		 if (rechenoperator == "/"){
					if(r2 != 0){
					 erg = r1 / r2;
					}else{
						cout << "FEHLER! Division durch Null!" << endl;
						continue;
				 }		
					 
				}else{
					cout << "FEHLER! Es wurde ein ungültiger Operator eingegeben" << endl;
					continue;}
}}}
//---------------------------------------------------
	r1 = erg;												//Hier wird das Ergebnis ins Register r1 verschoben und die restlichen Register verschoben
	r2 = r3;
	r3 = r4;
	r4 = 0;
	cout << r1 << endl;
	}
}
