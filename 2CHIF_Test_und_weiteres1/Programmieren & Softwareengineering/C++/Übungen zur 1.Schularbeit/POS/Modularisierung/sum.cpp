#include "sum.h"

int sum(unsigned int a){
	int erg{};
	for(int i=a; i > 0; i--){
		erg += i;
	}
	return erg;
}
