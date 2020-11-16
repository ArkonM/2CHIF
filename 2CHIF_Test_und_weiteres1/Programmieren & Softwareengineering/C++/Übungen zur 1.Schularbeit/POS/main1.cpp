/*	author: BRENNER Alexander
	class: 2CHIF
	date: 29/10/2017
	description: Beispiel 1 Rekursiv */
#include <iostream>
using namespace std;
long pow(int a, unsigned int b);

int main(){
	cout <<	pow(2, 7) << endl;
}

long pow(int a, unsigned int b){
	if (b == 0){
		return 1;
	}else{
		return pow(a, b - 1) * a;
	}
}
