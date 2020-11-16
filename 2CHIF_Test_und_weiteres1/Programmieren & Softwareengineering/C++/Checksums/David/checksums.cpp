/*	author: BRENNER Alexander Reinhard
	class: 2CHIF
	description: Checksums			*/

#include <cstdint>
#include <iostream>
#include <string>
#include <bitset>
#include <vector>

using namespace std;

uint8_t parity_bits_vertical(vector<uint8_t> data);
uint16_t fletcher16(vector<uint8_t> data);

int eingabe();

int main(){
	//int ausfuehren;
	//ausfuehren = eingabe();
	vector<uint8_t> test (3);
	cout << "bsp: 0x00\n" << endl;
	test[0] = 0xFF;
	test[1] = 0xFF;
	test[2] = 0xF0;
	cout << bitset<8>(parity_bits_vertical(test)).to_string() << endl;
	
}
//-------------------------------------------------------------
int eingabe(){
	char x;	
	while(true){
		cout << "Cheksummen überprüfen 	(1)" << endl;
		cout << "Cheksummen erstellen 	(2)" << endl;
		cout << "Programm beenden	(q)" << endl;
		cout << ">>>";
		cin >> x;
		cout << "eingabe; " << x << endl;
		switch(x){
		case '1' : return 1;
		case '2' : return 2;
		case 'q' : return 0;
		default : cout << "Ungültige eingabe!" << endl;		
		}
	}
}
//---------------------------------------------------------------
uint8_t parity_bits_vertical(vector<uint8_t> data){	
	uint8_t finalUint=data[0];
	for(int i=1; i < data.size();i++){
		finalUint = finalUint ^ data[i];
	}
	return finalUint;
}
//---------------------------------------------------------------
uint16_t fletcher16(vector<uint8_t> data){
	uint16_t sum1{};
	uint16_t sum2{};
	for(auto item : data){
		sum1 = (sum1 + item) % 255;
		sum2 = (sum1 + sum2) % 255;
	}
	return (sum2 << 8) | sum1;
}

