// Marlene Reiterer
// 12_12_2019
// 2_PA Beispiel_1: Lambdafunktion

#include <iostream>

using namespace std;

// Hauptprogramm
int main(){
        char z = 'x';
        int x = 3;
        auto f = [=, &x,&z](){
                for(int i = 0; i < x; i++){
                        cout << z;
                }
                cout << endl;
                z+=1;
                x+=1;
        };
        f();
        f();
        return 0;
}

