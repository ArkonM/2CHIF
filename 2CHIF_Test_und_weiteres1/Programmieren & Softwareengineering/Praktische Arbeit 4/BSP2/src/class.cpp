/*  author: BRENNER Alexander Reinhard
    class: 2CHIF
    date: 11/05/2018
    description: Beispiel 2 PA4 Ü-Zettel
*/

#include "../include/class.h"
using namespace std;

//Struct Node ----------------------------------------------
Node::Node(string data){
  key = data;
}

//Class BST ----------------------------------------------
void BST::_add(Node*& p, string k) {
 if (!p){
   p = new Node(k);
 }else{
  if (k < p->key){
      _add(p->left, k);
 }else if (k > p->key){
   _add(p->right, k);
 }else{
   throw logic_error("key exists already");
 }
 }
}
//--------
void BST::add(string k) {
  if (root){
    _add(root, k);
  }else{
    root = new Node(k);
  }
}
//--------
BST::BST(){
}
//--------
BST::~BST(){
}
//--------
void BST::clear(Node *head){
  if(head != nullptr){
    clear(head -> left);
    clear(head -> right);
    delete head;
    head = nullptr;
  }
}
//--------
void BST::printPostOrder(Node *head){
  if(head != nullptr){
    printPostOrder(head -> left);
    cout << head -> key << " ";
    printPostOrder(head -> right);
  }
}
//--------
Node *BST::search(std::string key, Node *head){
  if(head == nullptr){
    throw logic_error("Ihre Suche ergab keine Treffer!");
  }
  if(head -> key == key){
    return head;
  }else if(head -> key > key){  //Left
    search(key, head -> left);
  }else if(head -> key < key){  //Right
    search(key, head -> right);
  }
}
//--------
Node *BST::getRoot(){
  return root;
}
