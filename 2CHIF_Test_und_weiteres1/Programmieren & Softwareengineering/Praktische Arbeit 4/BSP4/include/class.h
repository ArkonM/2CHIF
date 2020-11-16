/*  author: BRENNER Alexander Reinhard
    class: 2CHIF
    date: 11/05/2018
    description: Beispiel 3 PA4 Ü-Zettel
*/
#ifndef CLASS_H
#define CLASS_H

#include <iostream>

struct Node{
  int data;
  Node *next;
  Node(Node *cp);
  Node();
};

class queue{
  static int len;
public:
  Node *head{};
  queue();
  ~queue();
  queue(const queue &newQueue);
  queue& operator=(const queue& rhs){
      Node *temp = new Node(rhs.getHead());
      delete head;
      head = temp;
  }
  void push(int a);
  int pop();
  static int size();
  void clear();
  Node *getHead() const{
    return head;
  }
};

#endif
