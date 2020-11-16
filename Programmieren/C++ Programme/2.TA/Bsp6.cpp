//Schneider Armin
//18.12.2019

#include <iostream>
using namespace std;


int main(){
    int x=2,y=4;
    auto f = [=,&y] (int k) ->int{y=x+k; return x+1;};
    cout << f(5) << endl;
    cout << x << endl << y << endl;
}
