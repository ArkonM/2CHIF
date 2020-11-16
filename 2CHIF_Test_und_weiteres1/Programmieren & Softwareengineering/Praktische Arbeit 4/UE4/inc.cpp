/*  author: BRENNER Alexander Reinhard
    class: 2CHIF
    date: 16/05/18
    description: Ueben für die 4.PA   */

#include "inc.h"
using namespace std;

SLL::SLL(){
  head = NULL;
  cout << "Konstruktor" << endl;
}

SLL::~SLL(){
  clear();
  cout << "De-Konstruktor" << endl;
}

void SLL::push_front(int a){
  Node *n = new Node;
  n -> data = a;
  n -> next = head;
  head = n;
}

int SLL::pop_back(){
  if(head == NULL){
    throw logic_error("Du kannst aus einer leeren Liste nichts poppen!");
  }
  Node *cur = head;
  while(cur -> next -> next != NULL){
    cur = cur -> next;
  }
  int erg = cur -> next -> data;
  Node *tmp = cur -> next;
  delete tmp;
  tmp = NULL;
  cur -> next = NULL;
  return erg;
}

void SLL::print(){
  if(head == NULL){
    cout << "Leere Liste!" << endl;
  }
  Node *cur = head;
  while(cur != NULL){
    cout << cur -> data << " ";
    cur = cur -> next;
  }
  cout << endl;
}

void SLL::clear(){
  if(head == NULL){
    return;
  }
  Node *cur = head;
  while(cur -> next != NULL){
    Node *tmp = cur;
    cur = cur -> next;
    delete tmp;
    tmp = NULL;
  }
  head = NULL;
}
