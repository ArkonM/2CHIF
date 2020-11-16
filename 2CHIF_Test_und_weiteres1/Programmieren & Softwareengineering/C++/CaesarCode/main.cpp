/* author: BRENNER Alexander Reinhard
   class: 2CHIF
   description: Römischer Zahlenrechner
   date: 12/10/2017 			*/

#include <iostream>         //Includes
#include <string>
#include <vector>
#include <utility>
#include <cassert>
using namespace std;

int value(char digit);                  //Funktionen-Deklaration
unsigned int roman2dec(string roman);   //
bool isRomanOkay(string input);         //

int main(){
	string input;
	cout << "----------" << endl << "R-ö-M-I-S-C-H-E     Z-A-H-L-E-N     U-M-W-A-N-D-E-L-N" << endl << "----------" << endl;
	while(true){                             //Das Programm läuft unendlich lange (while true)
	cout << ">>> "; 
	getline(cin,input);                           //Eingabe
	if(!cin){				//Nur wenn der Eingabestrom in Ordnung läuft das Programm andernfalls bricht es ab
	cout << endl;
	break;}
	int zahl = roman2dec(input);        
	if (zahl != 0){                         //Wenn alle Zeichen korrekt sind
		if(isRomanOkay(input) == true){     //wird geprüft ob auch die Aneinanderreihung der einzelnen römischen Ziffern in Ordnung ist
		cout << zahl << endl;               //Ist dies der Fall wird das richtige Ergebnis ausgegeben
        }
	}else{                                  //Andernfalls wird auf den Fehler hingewiesen (Genauere Fehlermeldungen in der Funktion isRomanOkay())
		cout << "Sie haben ein unerlaubtes Zeichen verwendet" << endl << "Bitte halten Sie sich an folgende Zeichen: " << endl << "I    V    X    L    C    D    M" << endl;
	}
    }   
}
//--------------------------------------------------------------------
	int value(char digit){                 //Funktionsname ++ Diese Funktion rechnet den Wert einer einzelnen römischen Ziffer aus
		switch(digit){                     //Mit einer Switch Verzweigung wird überprüft welchen Wert Die Ziffer hat
		case 'I':                          //Ist dieser ungültig wird ein Error geworfen (throw)
			return 1;                    
		case 'V':
			return 5;
		case 'X':
			return 10;
		case 'L':
			return 50;
		case 'C':
			return 100;
		case 'D':
			return 500;
		case 'M':
			return 1000;
		default:
			throw logic_error("ERROR" + string(1, digit));	
		}
	}
//----------------------------------------------------------------------	
	unsigned int roman2dec(string roman){   //Funktionname ++ Diese Funktion rechnet den Wert einer ganzen römischen Zahl aus
		int dezimalzahl = 0;                //Jedes einzelne Zeichen wird auf dessen Wert überprüft
		int i = 0;                          //Ein Index läuft solange er kleiner ist als die Länge der eingegeben Zahl
		int zwischenzahl;                   //
		int letzteZahl = 0;                 //
		while(i < roman.size()){            //
			try{
			zwischenzahl = value(roman[i]); //Die aktuelle Zahl wird hier durch die Funktion value() ausgerechnet
			}catch(logic_error){	
				return 0;
			}
			if (zwischenzahl <= letzteZahl){ //Ist er größer als die vorherige Zahl wird er addiert
				dezimalzahl += zwischenzahl;
			}else{                          //Andernfalls wird er subtrahiert
				dezimalzahl = dezimalzahl + (zwischenzahl - letzteZahl * 2);
			}
		letzteZahl = zwischenzahl;          //Nun wird die aktuelle Zahl zur letzten Zahl         
		i += 1;	                            //Und der Index wird erhöht
		}
		return dezimalzahl;                 //Am ende wird die ausgerechnete Zahl zurückgegeben
	}
//-----------------------------------------------------------------------	
	bool isRomanOkay(string input){         //Funktionsname ++ In dieser Funktion wird die römische Zahl auf ihre Gültigkeit überprüft
	int i{};
	int aktZahl{};                          //Um dies zu tun benötigt man einen Zwischenspeicher welcher bis zur "viertletztenZahl" zurück reicht
	int letzteZahl{};
	int vorletzteZahl{};
	int viertletzteZahl{};
	int anzV{};
	int anzL{};
	int anzD{};
	while(i < input.size()){	            //Ein Index läuft solange er kleiner ist als die Länge der eingegeben Zahl
		viertletzteZahl = vorletzteZahl;    //Die Werte der einzelnen Zwischenspeicher werden um 1 nach hinten geschoben
		vorletzteZahl = letzteZahl;         //Der Wert der viertletztenZahl geht dabei verloren
		letzteZahl = aktZahl;
		aktZahl = value(input[i]);
		if(i >= 2){
			if (letzteZahl < aktZahl && vorletzteZahl < aktZahl){							//Wenn 2 kleinere Zahlen vor einer größeren stehen ist die Zahl ungültig
				cout << "Es stehen 2 kleineren Zahlen vor einer größeren!" << endl;
        		        return false;}
		}else if(letzteZahl == 1 and (aktZahl != 10 and aktZahl != 5 and aktZahl != 1)){				//Die Zahl 1 darf nur vor der Zahl 10, 5 oder sich selber stehen
			cout << "Die Zahl I darf nur vor den Zahlen X, V oder sich selbst stehen! " << endl;
        	   	 return false;
		}else if(letzteZahl == 10 and (aktZahl != 50 and aktZahl != 100 and aktZahl != 10 and aktZahl != 1 and aktZahl != 5)){			//Die Zahl 10 darf nur vor der Zahl 50, 100 oder sich selber stehen
			cout << "Die Zahl X darf nur vor den Zahlen L, C, V, I oder sich selbst stehen! " << endl;
           		 return false;
		}if((aktZahl == 1) or (aktZahl == 10) or (aktZahl == 100)){					//Die Zahlen 1, 10 und 100 dürfen maximal 3 mal hintereinand stehen
			if(aktZahl == letzteZahl and aktZahl == vorletzteZahl and aktZahl == viertletzteZahl){
				cout << "Es dürfen nicht mehr als 3 gleiche Zahlen (I, X, C) hintereinand stehen" << endl;
        		        return false;}
		}if(aktZahl == 5){											                //Die Zahlen 5, 50 und 500 dürfen maximal 1 mal in einer Zahl vorkommen, dies wird hier geprüft
			anzV += 1;
			if (anzV > 1){
				cout << "Der Wert V darf maximal einmal in einer Zahl vorkommen!" << endl;
        		        return false;}
		}if(aktZahl == 50){
			anzL += 1;
			if (anzL > 1){
				cout << "Der Wert L darf maximal einmal in einer Zahl vorkommen!" << endl;
		                return false;}
		}if(aktZahl == 500){
			anzD += 1;
			if (anzD > 1){
				cout << "Der Wert D darf maximal einmal in einer Zahl vorkommen!" << endl;
                		return false;}
		}if(viertletzteZahl == letzteZahl && letzteZahl == aktZahl){								//Es darf keine Zahl in der Form von z.B. IVII geben
			cout << "Diese Kombination ist nicht möglich. Es farf nicht zu einem Stellenwert nochmal der selbe Stellenwert dazu gerechnet werden!" << endl;
			return false;
		}if(i >= 2){														//Erst bei größeren Zahlen findet diese Überprüfung statt
		if(letzteZahl > vorletzteZahl){												//
		if(letzteZahl - vorletzteZahl < aktZahl){										//Wenn z.B. IXX zu berechnen , wird abgebrochen da dies ungültig ist
			cout << "Es muss der größte Stellenwert zuerst berechnet werden" << endl;					//
			return false;
		}}}if(letzteZahl == 5 and aktZahl != 1){										//Die Zahl 5 darf vor keiner Zahl außer I stehen
			cout << "Die Zahl V darf nur vor I stehen" << endl;								
			return false;}
	i += 1;}
	int erg = roman2dec(input);
	if (((erg == 1) or (erg == 5) or (erg == 10) or (erg == 50) or (erg == 100) or (erg == 500) or (erg == 1000)) and (input.size() != 1)){
		cout << "Sie versuchen einen Zahlenwert auszurechnen den es bereits gibt! Bitte halten Sie sich an die Regeln der Darstellung einer römischen Zahl" << endl;
       		return false;}
    return true;}                                                                   //Wenn kein Fehler erkannt wurde wird true zurückgegeben
//----------------------------------------------------------------------
