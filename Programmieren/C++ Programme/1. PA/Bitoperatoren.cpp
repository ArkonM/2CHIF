// Sebastian Skarics

#include <iostream>
#include <string>

using namespace std;


char hexChar(char c,int x,int min)
{
	int i {15};
	char z {'F'};
	while(i >= 10)    //Muss ein Buchstabe sein
	{
		if((c & x) == x)    
		{
			return z;
		}
		z--;
		i--;
		x -= min;
	}
	z = '9';
	while(x > 0)
	{
		if((c & x) == x)
		{
			return z;
		}
		z--;
		x -= min;
	}
	return '0';
}


string char2hex(char c)
{
	string hex {""};
	hex += hexChar(c, 240, 16);    //
	hex += hexChar(c, 15, 1);
	return hex;
}


int main()
{
	char x {'Z'};
	cout << char2hex(x) << endl;
}
