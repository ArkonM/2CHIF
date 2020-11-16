/*  author: BRENNER Alexander Reinhard
    class: 2CHIF
    date: 16/05/18
    description: Ueben für die 4.PA   */

#include "inc.h"
using namespace std;

int BST::size = 0;

BST::BST(){
  size += 1;
  root = NULL;
}
BST::~BST(){
    size = 0;
    cout << "De-Konstruktor" << endl;
    root = clear(root);
}

void BST::push(int a){
  Node *n = new Node;
  n -> left = NULL;
  n -> right = NULL;
  n -> data = a;
  if(root == NULL){
    root = n;
    return;
  }
  Node *cur = root;
  while(true){
    if(a > cur -> data){
      if(cur -> right == NULL){
        cur -> right = n;
        return;
      }
      cur = cur -> right;
    }else{
      if(cur -> left == NULL){
        cur -> left = n;
        return;
      }
      cur = cur -> left;
    }
  }
}

void BST::printInOrder(Node *head){
  if(head != NULL){
    printInOrder(head -> left);
    cout << head -> data << " ";
    printInOrder(head -> right);
  }
}

Node *BST::getRoot(){
  return root;
}

Node* BST::clear(Node *head){
  if(head != NULL){
    head -> right = clear(head -> right);
    head -> left = clear(head -> left);
    delete head;
    head = NULL;
  }
  return head;
}
