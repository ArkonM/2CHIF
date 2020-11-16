/*  author: BRENNER Alexander Reinhard
    class: 2CHIF
    date: 16/05/18
    description: Ueben für die 4.PA   */

#include "inc.h"
using namespace std;

int main(){
  BST *myTree = new BST;
  myTree -> push(6);
  myTree -> push(7);
  myTree -> push(8);
  myTree -> push(4);
  myTree -> push(3);
  myTree -> push(9);
  myTree -> printInOrder(myTree -> getRoot());
  cout << endl;
  delete myTree;
}
