#include <iostream>
using namespace std;

int main(int argc, char* argv[]){
	string neu = "";
	string reverse = "";
	for(int i=0; i < argc; i++){
		neu = argv[i];
		for(int j=0; j < neu.size(); j++){
			reverse = argv[i][j] + reverse;
		}
		if(i != argc-1){
			reverse = " " + reverse;
		}
	}cout << reverse <<  endl;

}
