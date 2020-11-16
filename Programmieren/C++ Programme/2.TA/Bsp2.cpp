//Schneider Armin
//18.12.2019

#include <iostream>
using namespace std;


int f1(int *a){
    *a = *a * (-1);
}

int f2(int a){
    a = a * (-1);
}

int f3(int a[]){
    a[1] = a[1] * (-1);
}


int main(){
    int ar[5]{1,2,3,4,5};
    f1(ar+2);
    f2(ar[1]);
    f3(&ar[3]);
    for(int i=0;i<5;i++)
        cout << ar[i] << endl;
}