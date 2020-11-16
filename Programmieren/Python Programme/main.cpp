//Schneider Armin


#include <iostream>

using namespace std;


int zahlenEingabe(int x)
{
	int eing {};
	cout << "Bitte geben Sie die " << x << "  Zahl ein" << endl;
	cin >> eing;
	return eing;
}


char rechnungsartEingabe()
{
	char eing {};
	cout << "Bitte geben Sie die Rechenart(+,-,*,/) ein." << endl;
	cin >> eing;
	return eing;
}


int berechnen(int z1,int z2,char rA)
{
        switch(rA)
	{
		case'+': return(z1+z2);
		case'-': return(z1-z2);
		case'*': return(z1*z2);
		case'/':
			if (z2 == 0)
				throw 0;
			else
				return(z1/z2);
		default: return(0);
	}
}



void ausgabe(string erg)
{
	cout << erg << endl;
}
	



int main()
{
	int zahl1 {};
	int zahl2 {};
	char rechenart{};
	while(true)
	{
		zahl1 = zahlenEingabe(1);
		zahl2 = zahlenEingabe(2);
		rechenart = rechnungsartEingabe();
		try
		{
			cout << "Das Ergebnis lautet: " << berechnen(zahl1, zahl2, rechenart) << endl;
		}
		catch(int r)
		{
			cout << "Eine Division durch null ist nicht möglich!" << endl;
		}
	}
}
