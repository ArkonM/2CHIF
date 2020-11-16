/*  author: BRENNER Alexander
    class: 2CHIF
    date 29/10/2017
    description: Beispiel 3 Modularisierung */

#include <iostream>
#include "sum.cpp"
using namespace std;
int main(){
    int zahl;
    cout << ">>> ";
    cin >> zahl;
    cout << sum(zahl) << endl;
}
