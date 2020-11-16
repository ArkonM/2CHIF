/*	author: BRENNER Alexander Reinhard
	class: 2CHIF
	description: Lambda Functions BSP5	*/
#include <iostream>
using namespace std;

int main(){
	auto max = [](int x, int y){
		if(x >= y){
		    return x;
		}else{return y;}
	};
	auto min =[](int x, int y){
		if(x <= y){return x;}
		else{return y;}
	};
	int inp1, inp2;
	while(true){
	cout << ">>> ";	
	cin >> inp1;
	cout << ">>> ";
	cin >> inp2;
	cout << "Max: " << max(inp1, inp2) << endl;
	cout << "Min: " <<min(inp1, inp2) << endl;
}
}
