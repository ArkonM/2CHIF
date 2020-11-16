/*  author: BRENNER Alexander Reinhard
    class: 2CHIF
    date: 11/05/2018
    description: Beispiel 2 PA4 Ü-Zettel
*/
#ifndef CLASS_H
#define CLASS_H

#include <iostream>

struct Node{
  Node(std::string data);
  Node *left;
  Node *right;
  std::string key;
};

class BST {
private:
  Node *root{};
  void _add(Node*& p, std::string k);
public:
  void add(std::string k);
  void clear(Node *head);
  void printPostOrder(Node* head);
  Node *search(std::string key, Node *head);
  Node *getRoot();
  BST();
  ~BST();
};

#endif
