/*	author: BRENNER Alexander Reinhard
	class: 2CHIF
	description: Print Pattern		*/

#include <iostream>
#include <string>
void print_pattern(char zeichen, int anz);
using namespace std;

int main(int argc, char* argv[]){
	cout << argc << endl;
	string anz = argv[2];
	string zeichen = argv[1];
	print_pattern(zeichen[0], stod(anz));
}

void print_pattern(char zeichen, int anz){
	int i = 1;
	int j = 1;
	while (i <= anz){
		j = 1;
		while(j < i ){
			cout << " ";
			j += 1;
		}
		cout << zeichen << endl;
		i += 1;
	}
	i = anz;
	while (i > 1){
		j = 1;
		while(j < i-1 ){
			cout << " ";
			j += 1;
		}
		cout << zeichen << endl;
		i -= 1;
	}


}
