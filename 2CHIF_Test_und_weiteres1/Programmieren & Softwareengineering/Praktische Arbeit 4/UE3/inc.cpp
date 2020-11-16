/*  author: BRENNER Alexander Reinhard
    class: 2CHIF
    date: 16/05/18
    description: Ueben für die 4.PA   */

#include "inc.h"
using namespace std;

void printPattern(int height){
  if(height == 1){
    cout << "*" << endl;
    return;
  }
  int i=1;
  int j=0;
  int k=0;
  int maxBreite = ((height-1) * 2) + 1;
  while(i <= maxBreite){
    j = 0;
    while(j < (maxBreite -i) / 2){
      cout << " ";
      j++;
    }
    k = 0;
    while(k < i){
      cout << "*";
      k++;
    }
    while(j > 0){
      cout << " ";
      j--;
    }
    cout << endl;
    i += 2;
  }
  i = maxBreite - 2;
  while(i > 0){
    j = 0;
    while(j < (maxBreite -i) / 2){
      cout << " ";
      j++;
    }
    k = 0;
    while(k < i){
      cout << "*";
      k++;
    }
    while(j > 0){
      cout << " ";
      j--;
    }
    cout << endl;
    i -= 2;
  }
}
