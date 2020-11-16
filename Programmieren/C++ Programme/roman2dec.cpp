//Schneider Armin

#include <iostream>
#include <string>

using namespace std;

int value(char);

string romanEinlesen()
{
	string chrom {};
	cout << "Bitte geben Sie die Römische Zahl ein: ";
	cin >> chrom;
	cout << chrom.length() << endl;
	return chrom;
}


unsigned int roman2dec(string roman)
{
	int i = 0;
	int erg = 0;
	bool nichtFalsch = true;
	int laen = roman.length();
	while(nichtFalsch)
	{
		break;
	}
	i = 0;
	while(i<laen)
	{
		if(i==(laen-1))
		{
			erg += value(roman[i]);
		}
		else if(i==(laen-2))
		{
			if(value(roman[i]) < value(roman[i+1]))
			{	
				erg -= value(roman[i]);
			}
			else
			{
				erg += value(roman[i]);
			}
		}
		else
		{
			if((value(roman[i]) < value(roman[i+1])) && (value(roman[i+1]) >= value(roman[i+2])))
			{
				erg -= value(roman[i]);
			}
			else if(value(roman[i]) < value(roman[i+1]))
			{	
				erg -= value(roman[i]);
			}
			else
			{
				erg += value(roman[i]);
			}
		}
		++i;
	}
	return erg;
}





int value(char digit)
{
	int zahl {};
	switch(digit)
	{
		case 'I': zahl = 1;    break;
		case 'V': zahl = 5;    break;
		case 'X': zahl = 10;   break;
		case 'L': zahl = 50;   break;
		case 'C': zahl = 100;  break;
		case 'D': zahl = 500;  break;
		case 'M': zahl = 1000; break;
		default : zahl = 0;  
	}
	return zahl;
}


int main()
{
	{
		string text {};
		int erg {};
		text = romanEinlesen();
		try
		{
			erg = roman2dec(text);
			cout << "Das Ergebnis lautet: " << erg << endl;
		}
		catch(logic_error& fehler)
		{
			cout << "Fehler! Fehlercode: " << fehler.what() << endl;
		}
	}
}