//Armin Schneider
//Zweite PA, viertes Beispiel
//13.12.2019

#include <iostream>
using namespace std;


void pattern_row(int x,int b,int z){
        if(x == b)
                return;
        else{
                if(x==(z-1)){
                        cout << "* ";
                }
                else{
                        cout << "- ";
                }
                return pattern_row(x+1,b,z);
        }
}


void rekursiv(int h,int x,int b,bool bol,int z){
        if(bol && h!=b)
                z = z+h;
        else if(!bol)
                z = z-h;
        if(h == 0)
                return;
        else{
                pattern_row(x,b,z);
                cout << endl;
                return rekursiv(h - 1,x,b,!bol,z);
        }
}


int main(){
        int h = 5;
        int x = 0;
        int b = h;
        int z = h;
        bool bol = true;
        rekursiv(h,x,b,bol,z);
}

