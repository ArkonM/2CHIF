
#include <cstdint>
#include <iostream>
#include <string>
#include <bitset>
#include <vector>

using namespace std;

uint8_t parity_bits_vertical(vector<uint8_t> data);

int eingabe();

int main(){
	//int ausfuehren;
	//ausfuehren = eingabe();
	vector<uint8_t> test (3);
	cout << "bsp: 0x00\n" << endl;
	test[0] = 0x34;
	test[1] = 0x32;
	test[2] = 0x23;
	cout << parity_bits_vertical(test) << endl;
	
}

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

uint8_t parity_bits_vertical(vector<uint8_t> data){	
	uint8_t finalUint;
	finalUint = data[0];
	for(int i=1; i < data.size();i++;){
		finalUint = finalUint ^ data[i]
	}
	/*		
	string bit1=(bitset<8>(data[0])).to_string();
	string bit2=(bitset<8>(data[1])).to_string();
	cout << bit1 << " bit1 " << endl << bit2 << " bit2 " << endl;
	for(int i=7;i >= 0;i--){
		if(bit1[i] == '1' and bit2[i] == '1'){
			bitNeu = '0' + bitNeu;	
		}else if(bit1[i] == '0' and bit2[i] == '0'){
			bitNeu = '0' + bitNeu;
		}else{
			bitNeu = '1' + bitNeu;
		}
	}
	cout << "-------- +" << endl << bitNeu << endl;
	*/
	return finalUint;
}

