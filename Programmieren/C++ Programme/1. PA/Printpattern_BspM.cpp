//Schneider Armin
//Ein Printpattern soll sternchen in der Form eines M's ausgeben.

#include <iostream>
#include <string>
using namespace std;


int eingabe(){
    int eing {};
    cout << "Bitte geben Sie die Größe des M's ein(größergleich 5, nur ungerade): ";
    cin >> eing;
    if((eing%2)==0 || (eing < 5)){
        throw logic_error("Diese nummer ist nicht möglich. Lies die Angabe genau!");
    }
    else{
        return eing;
    }
    return eing;
}


void printpattern(int size){
    int spaceObenGroese = (size-2);
    int spaceUntenGroese = -1;
    string spaceOben {};
    string spaceUnten {};
    for(int i=0;i<=size;i++){
        for(int temp=spaceObenGroese;temp>0;temp--){
            spaceOben += ' ';
        }
        if(spaceUntenGroese<(size/2)){
            for(int temp=spaceUntenGroese;temp>0;temp--){
                spaceUnten += ' ';
            }
        }
        else{
            for(int temp=(size-2);temp>0;temp--){
                spaceUnten += ' ';
            }
        }
        if(spaceUntenGroese<1 && (i==0)){
            cout << '*' << spaceOben << '*' << endl;
        }
        else if(spaceUntenGroese<1 && (i==1)){
            cout << "**" << spaceOben << "**" << endl;
        }
        else if(spaceUntenGroese>=1 && (i<(size/2))){
            cout << '*' << spaceUnten << '*' << spaceOben << '*' << spaceUnten << '*' << endl;
        }
        else if(i==(size/2)){
            cout << '*' << spaceUnten << '*' << spaceUnten << '*' << endl;
        }
        else if(i>(size/2) && i<size){
            cout << '*' << spaceUnten << '*' << endl;
        }
        else if(i==size){
            spaceUnten = "";
            for(int temp=(size-2);temp>0;temp--){
                spaceUnten += '-';
            }
            cout << '*' << spaceUnten << '*' << endl;
        }
        spaceObenGroese -= 2;
        spaceOben = "";
        spaceUntenGroese++;
        spaceUnten = "";
    }
    return;
}


int main(){
    int size {};
    size = eingabe();
    printpattern(size);
}