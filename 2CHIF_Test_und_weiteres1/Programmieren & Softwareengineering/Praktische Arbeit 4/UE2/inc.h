/*  author: BRENNER Alexander Reinhard
    class: 2CHIF
    date: 16/05/18
    description: Ueben für die 4.PA   */
#ifndef INC_H
#define INC_H

#include <iostream>
#include <chrono>

struct Node{
  Node *left;
  Node *right;
  int data;
};

class BST{
private:
  Node *root;
  static int size;
public:
  BST();
  ~BST();
  void push(int a);
  void printInOrder(Node *head);
  Node *getRoot();
  Node* clear(Node *head);
};

#endif
