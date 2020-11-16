/* author: BRENNER Alexander
   class: 2CHIF
   date: 9/11/2017		*/
#include <iostream>
#include <vector>
#include <cstdint>
#include <bitset>

using namespace std;
uint8_t parity_bits_vertical(vector<uint8_t> data);

int main(){
	vector<uint8_t> data(2);
	data[0] = 65;
	data[1]= 66;	
	parity_bits_vertical(data);
}
//-------------------------
uint8_t parity_bits_vertical(vector<uint8_t> data){
	vector<string> stringVector;
	string zw="";
	string fertig="";
	int anz;
	int i= 0;
	int j;
	for(int k=0; k < data.size(); k++){
		zw += (bitset<8>(data[k])).to_string();
		cout << zw << endl;
		stringVector.push_back(zw);
		zw ="";
	}
	while(i < 8){
		j = 0;
		anz = 0;
		while(j < stringVector.size()){
			if((stringVector[j][i]) == '1'){
				anz += 1;
			}
			j += 1;
		}
		cout << anz << endl;
		if(anz % 2 == 0){
			fertig += '0';
		}else{
			fertig += '1';
			}
		i += 1;
	}
	cout << fertig << endl;
}

