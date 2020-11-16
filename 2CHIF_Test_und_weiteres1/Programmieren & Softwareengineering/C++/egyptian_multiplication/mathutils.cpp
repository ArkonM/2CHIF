/*	author: BRENNER Alexander Reinhard
	class: 2CHIF
	date: 30/11/2017		*/

#include "egmul.h"
unsigned int mul0(unsigned int n, unsigned int a){
	unsigned int erg=0;
	for(int i=0; i < n; i++){
		erg += a;
	}
	return erg;
}
//---------------------
unsigned int mul1(unsigned int n, unsigned int a){
	if(n==0){
		return a;
	}else{
		return a + mul1(n-1, a);
	}
}
//--------------------
unsigned int mul2(unsigned int n, unsigned int a){
	if(n == 1){
	    return a;
	}else{
	    int r = mul2(n/2, a + a);
	    if(n % 2 != 0){
		r = r + a;
	    }
	    return r;	
	}
}
//----------------------
unsigned int mul3(unsigned int n, unsigned int a){
	if(n == 1){
	    return a;
	}else{
	    int r = mul3(n >> 1, a << 1);
	    if(n & 0x1 == 0){
		r = r + a;
	    }
	    return r;
	}
}
//------------------------

unsigned int mul4_acc0(unsigned int r, unsigned int n, unsigned int a);
unsigned int mul4_acc0(unsigned int r, unsigned int n, unsigned int a){
	if(n == 1) return r + a;
	if(n & 0x1){
	    return mul4_acc0(r + a, n >> 1, a << 1);
	    }
	else{
	    return mul4_acc0(r, n >> 1, a << 1);
	}
}
//--------------------
unsigned int mul4_acc1(unsigned int r, unsigned int n, unsigned int a);
unsigned int mul4_acc1(unsigned int r, unsigned int n, unsigned int a){
	if(n == 1) return r + a;
	if(n & 0x1) r += a;
	else{
	    return mul4_acc0(r, n >> 1, a << 1);
	}
}
//--------------------
unsigned int mul4_acc2(unsigned int r, unsigned int n, unsigned int a);
unsigned int mul4_acc2(unsigned int r, unsigned int n, unsigned int a){
	if(n & 0x1){
	     r += a;
	    if(n == 1){
		return r;
	    }
	}
	else{
	    return mul4_acc0(r, n >> 1, a << 1);
	}
}
//--------------------
unsigned int mul4_acc3(unsigned int r, unsigned int n, unsigned int a);
unsigned int mul4_acc3(unsigned int r, unsigned int n, unsigned int a){
	if(n & 0x1){
	     r += a;
	    if(n == 1){
		return r;
	    }
	}
	n >>= 1;
	a <<= 1;
	    return mul4_acc0(r, n, a);
}
//-----------------------
unsigned int mul4_acc4(unsigned int r, unsigned int n, unsigned int a);
unsigned int mul4_acc4(unsigned int r, unsigned int n, unsigned int a){
	while(true){
	    if(n & 0x1){
		r += a;
		if(n == 1)return r;
	    }
	    n >>= 1;
	    a <<= 1;
	}
}
//-----------------------
unsigned int mul4(unsigned int n, unsigned int a){
	if(n == 0)return 0;
	return mul4_acc4(0, n, a);

}
