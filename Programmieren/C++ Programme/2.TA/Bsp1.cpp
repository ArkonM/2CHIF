//Schneider Armin
//18.12.2019

#include <iostream>
using namespace std;


int main(){
  int x=3, y=4;
  int *p1=&x, &rp=y;
  int **pp=&p1;
  **pp=1;
  *pp=&rp;
  rp=2;
  *p1=3;
  cout << x << " " << y << endl;
}