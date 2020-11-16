/*	author: BRENNER Alexander Reinhard
	class: 2CHIF
	date: 30/11/2017
	description: Egyptische Multiplikation	*/

#include "egmul.h"
using namespace std;


int main(){
	chrono::time_point<chrono::system_clock> start;
	chrono::time_point<chrono::system_clock> end;
/*	int inp1, inp2;
	cout << ">>>";
	cin >> inp1;
	cout << ">>>";
	cin >> inp2;	*/
	start = chrono::system_clock::now();
	for(int i{}; i < 300000; ++i){
		mul0(12345, 67890);
	}
	end = chrono::system_clock::now();
	cout << "mul0: milliseconds: " << chrono::duration_cast<chrono:: milliseconds>(end - start).count() << endl;
//------------------------
	start = chrono::system_clock::now();
	for(int i{}; i < 300000; ++i){
		mul1(12345, 67890);
	}
	end = chrono::system_clock::now();
	cout << "mul0: milliseconds: " << chrono::duration_cast<chrono:: milliseconds>(end - start).count() << endl;
//------------------------
	start = chrono::system_clock::now();
	for(int i{}; i < 300000; ++i){
		mul2(12345, 67890);
	}
	end = chrono::system_clock::now();
	cout << "mul0: milliseconds: " << chrono::duration_cast<chrono:: milliseconds>(end - start).count() << endl;
//------------------------
	start = chrono::system_clock::now();
	for(int i{}; i < 300000; ++i){
		mul3(12345, 67890);
	}
	end = chrono::system_clock::now();
	cout << "mul0: milliseconds: " << chrono::duration_cast<chrono:: milliseconds>(end - start).count() << endl;
//-------------------------
	start = chrono::system_clock::now();
	for(int i{}; i < 300000; ++i){
		mul4(12345, 67890);
	}
	end = chrono::system_clock::now();
	cout << "mul0: milliseconds: " << chrono::duration_cast<chrono:: milliseconds>(end - start).count() << endl;

}

