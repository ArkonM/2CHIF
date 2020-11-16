/*	author: BRENNER Alexander Reinhard
	class: 2CHIF
	date: 14/12/2017
	description: Primes			*/
#include "primes.h"
using namespace std;
int main(){
	int inp;
	cout << ">>> ";
	cin >> inp;
	cout << boolalpha <<  is_prime0(inp) << endl;
	print_primes0(inp);
	print_primes0_upto100();
	print_primes2_upto100();
}
