//Schneider Armin


#include <iostream>
using namespace std;


int main()
{
	int i {0};
	int zahl {1};
	while(i < 4)
	{
		cout << zahl << ", ";
		i += 1;
		zahl += 2;
	}
	cout << zahl << endl;
}
