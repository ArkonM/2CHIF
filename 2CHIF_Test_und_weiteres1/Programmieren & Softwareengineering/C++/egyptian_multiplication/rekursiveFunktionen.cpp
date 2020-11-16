/*	author: BRENNER Alexander Reinhard
	class: 2CHIF
	date: 07/12/2017		
	description: Rekursive Funktionen Übungen	*/

#include <iostream>
#include <string>
#include <vector>
unsigned int fact(unsigned int a);
double pow(int a, unsigned int b);
unsigned int sum_digits(unsigned int a);
unsigned int fibonacci(unsigned int a);
//bool strcmp(string a, string b);
//string reverse(string n);
double add(vector<double> numlist, int i=0, double erg=0);
using namespace std;

int main(){
	int inp;
	vector<double> lol = {1.0, 2.0, 4.0};
	cout << add(lol) << endl;



}
//---------------------------
unsigned int fact(unsigned int a){
	if(a==1)return 1;
	else return fact(a-1) * a;
}
//---------------------------
string reverse(string n){
	if(n.size() == 1)return n;
	else return reverse(n.substr(1, n.size())) + n.at(0);	
}
//--------------------------
double pow(int a, unsigned int b){
	if(b==1)return a;
	else return pow(a, b-1) * a;
}
//-------------------------
unsigned int sum_digits(unsigned int a){
	if(a==1)return 1;
	else return sum_digits(a-1) + a;
}
//-----------------------
unsigned int fibonacci(unsigned int a){	
	if(a == 0)return 0;
	if(a == 1)return 1;
	else return fibonacci(a-1) + fibonacci(a-2);
}
//-----------------------
/*bool strcmp(string a, string b){
	if(a == b)return true;
	else return false;
}*/
//---------------------
double add(vector<double> numlist, int i, double erg){
	if(i == numlist.size())return erg;
	else{
		erg += numlist[i];
		i += 1;
		return add(numlist, i, erg);
		}
}
