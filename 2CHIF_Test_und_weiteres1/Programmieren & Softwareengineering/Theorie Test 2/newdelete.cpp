#include <iostream>

using namespace std;

int main(){
	int arr[]= {0, 324, 54, 63, 21, 7, 6, 7, 21};
	int* zahl = new int;
	*zahl = arr[4];
	cout << *zahl << endl;
	delete zahl;
	zahl = NULL;

}
