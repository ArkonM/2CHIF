//Schneider Armin
//Simple RPN

#include <iostream>
#include <string>

using namespace std;


string eingabe() {
	string eing{};
	cin >> eing;
	return eing;
}


double srpn(double z1, double z2, char op) {
	switch (op) {
	case'+': return z1 + z2; break;
	case'-': return z1 - z2; break;
	case'*': return z1 * z2; break;
	case'/': if (z2 != 0){
			return z1 / z2; break;

		}
		else {
			("The divisor is not allowed to be zero! Please try again.");
		}
	}
}


int main() {
	while (true) {
		double zahl1{};
		double zahl2{};
		try {
			double zahl1 = stod(eingabe());
			double zahl2 = stod(eingabe());
		}
		catch{
			cout << "ERROR: " << "Wrong input! A number is not able to contain letters!" << endl;
		}
		char oper = eingabe()[0];
		try {
			cout << srpn(zahl1, zahl2, oper) << endl;
		}
		catch (string error) {
			cout << "ERROR: " << error << endl;
		}
	}
}