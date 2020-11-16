//Schneider Armin
//Zweite PA, drittes Beispiel
//15.12.2019

#include <iostream>

using namespace std;


void printCLA(int anz, char** par){
	int i{1};
	string temp {};
	for(;i < anz; i++){
		temp += par[i];
		if(i < (anz-1))
			temp += " ";
	}
	cout << temp << endl;
	string erg {};
	i = temp.length()-1;
	for(;i>=0;i--){
		erg += temp[i];
	}
	cout << erg << endl;
}



int main(int argc, char** argv){
	printCLA(argc, argv);
}
