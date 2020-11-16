//Schneider Armin

#include <iostream>

using namespace std;


int eingabe()
{
    int eing {};
    cout << "Bitte geben Sie nun die Anzahl der Sternchen ein: ";
    cin >> eing;
    return eing;
}


unsigned pattern(int sternis)
{
    int i = sternis;
    int space = 0;
    while(i > 0)
    {
        int y = 0;
        string ausgstri = "";
        while(y < space)
        {
            ausgstri += " ";
            ++y;
        }
        y = 0;
        while(y < i)
        {
            ausgstri += "*";
            ++y;
        }
        cout << ausgstri << endl;
        i -= 2;
        ++space;
    }
    i += 4;
    space -= 2;
    while(i <= sternis)
    {
        int y = 0;
        string ausgstri = "";
        while(y < space)
        {
            ausgstri += " ";
            ++y;
        }
        y = 0;
        while(y < i)
        {
            ausgstri += "*";
            ++y;
        }
        cout << ausgstri << endl;
        i += 2;
        --space;
    }
}


int main()
{
    bool nochmal = true;
    string YesNo = "";
    while(nochmal)
    {
        int sterne {};
        sterne = eingabe();
        pattern(sterne);
        cout << "Nochmal?(y/n): ";
        cin >> YesNo;
        if(YesNo != "y")
        {
            nochmal = false;
        }
    }
}