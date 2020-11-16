/*	author: BRENNER Alexander Reinhard
	class: 2CHIF
	date: 14/12/2017
	description: Primes			*/
#include "primes.h"
using namespace std;
bool is_prime0(unsigned int n){
	int i=2;
	while(i < n){
		if(n%i == 0){
			return false;
		}
	i +=1;
	}
	return true;
}
//--------------------------
void print_primes0(unsigned int n){
	int i=2;
	while(i <= n){
		if(is_prime0(i) == true){
			cout << i << " ";
		}
	i += 1;
	}
	cout << endl;
}
//---------------------------
void print_primes0_upto100(){
	const int n=100;
	bool is_prim0[n+1];
	for(int k=0; k <= n; k++){
		is_prim0[k] = true;
	}
	for (int i=2; i <= n; ++i) {
		if (is_prim0[i] == true) {
			for (int j{i}; j <= n / i; ++j){
				is_prim0[i * j] = false;
			}
		}
	}
}
//------------------------------
void print_primes1_upto100(){
	const int n=100;
	bool marked[n+1]{};
	for (int i{}; i <= n; ++i) {
		unsigned int factor = 2 * i + 3;
		if (not marked[i]) {
			int curr{i};
			while (n - curr > factor) {
				curr += factor;
				marked[curr] = true;
			}
		}
	}

}
//-----------------------------
void print_primes2_upto100(){
	const int n=100;
	bool marked[n+1]{};
	for (int i{}; i <= n; ++i) {
		unsigned int factor = 2 * i + 3;
		if (not marked[i]) {
			int curr{i};
			while (n - curr > factor) {
				curr += factor;
				marked[curr] = true;
			}
		}
	}
	cout << sizeof(marked) << endl;
	cout << sizeof(marked)/sizeof(int) << endl;
}
//-----------------------------
void sieve(bool marked[]) {
	const int n1{48};
	cout << sizeof(marked) << endl;
	cout << sizeof(marked) / sizeof(bool) << endl;
	for (int i{}; i * i <= n1; ++i) {
		unsigned int factor = 2 * i + 3;
		if (not marked[i]) {
			int curr{i};
			while (n1 - curr > factor) {
				curr += factor;
				marked[curr] = true;
			}
		}
	}
}
