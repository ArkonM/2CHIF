/*  author: BRENNER Alexander Reinhard
    class: 2CHIF
    date: 16/05/18
    description: Ueben für die 4.PA   */

#include "inc.h"
using namespace std;

int main(){
  SLL *myList = new SLL;
  myList -> push_front(5);
  myList -> push_front(6);
  myList -> push_front(7);
  myList -> push_front(8);
  myList -> print();
  cout << "Gepopptes Element: " << myList -> pop_back() << endl;
  myList -> print();
  myList -> clear();
  myList -> print();
  delete myList;
}
