//Schneider Armin

#include <iostream>
#include <string>

using namespace std;


string einlesen()
{
    string eing {};
    cout << "Bitte geben Sie den String ein, bei dem sie die groß/klein Schreibung invertiert haben wollen: ";
    cin >> eing;
    return eing;
}


string inverseString(string txt)
{
    int laen = txt.length();
    for(int i=0; i < laen; ++i)
    {
        if((txt[i]>='A') && (txt[i]<='Z'))
        {
            txt[i] = txt[i]+32;

        }
        else if((txt[i]>='a') && (txt[i]<='z'))
        {
            txt[i] = txt[i]-32;
        }
    }
    return txt;
}


int main()
{
    bool nochmal = true;
    char YesNo {};
    while(nochmal)
    {
        string eing {};
        eing = einlesen();
        cout << "Der inverteierte String lautet: " << inverseString(eing) << endl;
        cout << endl << "Nocheinmal?(y/n): ";
        cin >> YesNo;
        if(YesNo != 'y')
        {
            nochmal = false;
        }
    }
}