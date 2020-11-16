/*  author: BRENNER Alexander Reinhard
    class: 2CHIF
    date: 11/05/2018
    description: Beispiel 2 PA4 Ü-Zettel
*/

using namespace std;

#include "../include/class.h"

int main()
{
  BST *myTree = new BST;
  myTree -> add("C");
  myTree -> add("A");
  myTree -> add("B");
  myTree -> printPostOrder(myTree -> getRoot());
  try{
    Node* suche = myTree -> search("A", myTree -> getRoot());
  }catch(logic_error&e){
    cout << e.what() << endl;
  }
  myTree -> clear(myTree -> getRoot());
  myTree -> printPostOrder(myTree -> getRoot());
  delete myTree;
  myTree = nullptr;
}
