
#include <cstdint>
#include <iostream>
#include <string>
using namespace std;

//uint8_t parity_bits_vertical(vector<uint8_t> data);

int eingabe();

int main(){
	int ausfuehren();
	ausfuehren = eingabe();
	//cout << parity_bits_vertical(0x00) << endl;
	
}

int eingabe(){
	string x;	
	while true{
		cout << "Cheksummen überprüfen 	(1)" << endl;
		cout << "Cheksummen erstellen 	(2)" << endl;
		cout << "Programm beenden	(q)" << endl;
		cout << ">>>";
		cin >> x;
		switch(x){
		case "1" : return 1;
		case "2" : return 2;
		case "q" : return 0;
		default : cout << "Ungültige eingabe!" << endl;		
		}
	}
}

/*
uint8_t parity_bits_vertical(vector<uint8_t> data){
	cout << vector<uint8_t> data << endl;
}
*/
