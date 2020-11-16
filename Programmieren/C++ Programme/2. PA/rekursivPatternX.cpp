//Armin Schneider
//Zweite PA, viertes Beispiel
//13.12.2019

#include <iostream>
using namespace std;


void pattern_row(int x,int b,int z,int y){
        if(x == b)
                return;
        else{
                if(x==(z-1) || x==(y)){
                        cout << "* ";
                }
                else{
                        cout << "- ";
                }
                return pattern_row(x+1,b,z,y);
        }
}


void rekursiv(int h,int x,int b,int z,int y){
        if(h == 0)
                return;
        else{
                pattern_row(x,b,z,y);
                cout << endl;
                z--;
                y++;
                return rekursiv(h - 1,x,b,z,y);
        }
}


int main(){
        int h = 5;
        int x = 0;
        int b = h;
        int z = h;
        int y = 0;
        rekursiv(h,x,b,z,y);
}