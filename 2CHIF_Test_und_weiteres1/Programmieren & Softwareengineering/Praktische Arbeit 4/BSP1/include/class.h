/*  author: BRENNER Alexander Reinhard
    class: 2CHIF
    date: 11/05/2018
    description: Beispiel 1 PA4 Ü-Zettel
*/
#ifndef CLASS_H
#define CLASS_H

#include <iostream>

class PZ{
private:
  std::string *name;
  static int anzPersonen;
public:
  int iq=0;
  PZ();
  PZ(std::string *n);
  PZ(std::string *n, int intelligence);
  ~PZ();
  static int getCounter();
  virtual void print(){std::cout << "PZ:" << *name << std::endl;};
};

class UK : public PZ{
private:
public:
  UK();
  UK(std::string *n);
  UK(std::string *n, int intelligence);
  ~UK();
  void print(){std::cout << "PZ::UK:" << iq;}
};

#endif
