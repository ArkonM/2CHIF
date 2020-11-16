/*  author: BRENNER Alexander Reinhard
    class: 2CHIF
    date: 16/05/18
    description: Ueben für die 4.PA   */
#ifndef INC_H
#define INC_H

#include <iostream>
#include <chrono>

struct Node{
  int data;
  Node *next;
};

class SLL{
private:
  Node *head;
public:
  SLL();
  ~SLL();
  void push_front(int a);
  int pop_back();
  void print();
  void clear();
};

#endif
