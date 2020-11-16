/*  author: BRENNER Alexander Reinhard
    class: 2CHIF
    date: 11/05/2018
    description: Beispiel 3 PA4 Ü-Zettel
*/

#include "../include/class.h"
using namespace std;

int queue::len = 0;

queue::queue(){
}
//----------
queue::~queue(){
  delete head;
}
//----------
queue::queue(const queue &newQueue): head{newQueue.head}{
  head = new Node(newQueue.getHead());
}
//----------
void queue::push(int a){
  len += 1;
  Node *n = new Node;
  n -> data = a;
  n -> next = head;
  head = n;
}
//----------
int queue::pop(){
  len -= 1;
  Node *cur = head;
  while(cur -> next -> next != nullptr){
    cur = cur -> next;
  }
  int erg = cur -> next -> data;
  Node *tmp = cur;
  cur = cur -> next;
  delete cur;
  cur = nullptr;
  tmp -> next = nullptr;
  return erg;
}
//----------
int queue::size(){
  return len;
}
//----------
void queue::clear(){
  Node *cur;
  while(head != nullptr){
    cur = head;
    head = head -> next;
    delete cur;
  }
}
//----------
Node::Node(Node *cp){
  next = cp -> next;
  data = cp -> data;
}
Node::Node(){
  next = nullptr;
}
