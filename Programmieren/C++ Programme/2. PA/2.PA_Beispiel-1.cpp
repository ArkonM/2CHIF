//Armin Spchneider
//Zweite PA, erstes Beispiel
//13.12.2019

#include <iostream>

using namespace std;

// -------Main-------
int main(){
	char y {'x'};
	int x {3};
	auto f = [&x,&y](){
		for(int i{}; i < x; i++){
			cout << y;            
		}
		cout << endl;
		y++;
		x++;
	};
	f();
	f();
}
