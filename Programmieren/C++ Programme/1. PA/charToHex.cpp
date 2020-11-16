#include <iostream>
using namespace std;


string char2hex(char c) {
	string s{};
	int number = 240;
	int temp{};
	for(int i = 0; i < 2; i++) {
		temp = ((c & number) >> (4 * (1 - i)));

		switch(temp) {
			case 10: s += 'A'; break;
			case 11: s += 'B'; break;
			case 12: s += 'C'; break;
			case 13: s += 'D'; break;
			case 14: s += 'E'; break;
			case 15: s += 'F'; break;
			default: s+= to_string(temp); break;
		}
		number = number >> 4;
	}
	return s;
}


int main() {
	cout << char2hex('Z') << endl;
}