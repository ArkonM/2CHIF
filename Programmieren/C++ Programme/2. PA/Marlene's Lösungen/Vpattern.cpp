// Schneider Armin
// 17.12.2019

#include <iostream>
using namespace std;

void xpattern(int n, int z=0, int s=0){
    if(z < n){
      if(s<n){
        if(z==s && s<=n/2 || s>=n/2 && z==n-s-1)
            cout << "*";
        else
            cout << " ";
        return xpattern(n, z, s+1);
    }else{
        cout << endl;
        return xpattern(n, z+1);
      }
    }
}


int main(){
    int h{5};
    xpattern(h);
}