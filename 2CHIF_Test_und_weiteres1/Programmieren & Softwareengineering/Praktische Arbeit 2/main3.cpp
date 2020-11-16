/*	author: BRENNER Alexander
	class: 2CHIF
	desciption: BSP 3	*/
#include <iostream>
#include <string>

using namespace std;
string makeNice(string inp, string zeichen, int anz);


int main(){
	string inp;
	string zeichen;
	int anz;
	cout << ">>> ";
	cin >> inp;
	cout << ">>> ";
	cin >> zeichen;
	cout << ">>> ";
	cin >> anz;
	cout << makeNice(inp, zeichen, anz) << endl;

}

string makeNice(string inp, string zeichen, int anz){
	string neu="";
	int i = 0;
	int j;
	while(i < inp.size()){
		j=0;
		neu += inp[i];
		while(j < anz && i < inp.size()-1){
			neu += zeichen;
			j += 1;
		}
	i += 1;	
	}return (neu);

}
