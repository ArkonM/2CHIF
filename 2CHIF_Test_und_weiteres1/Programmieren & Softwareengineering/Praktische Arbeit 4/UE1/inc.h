/*  author: BRENNER Alexander Reinhard
    class: 2CHIF
    date: 16/05/18
    description: Ueben für die 4.PA   */
#ifndef INC_H
#define INC_H

#include <iostream>
#include <chrono>

class Tier{
  std::string *name;
public:
  Tier(std::string *n);
  Tier(Tier &n) : Tier(n.name){}
  Tier& operator=(const Tier &n){
    return *this;
  }
  ~Tier();
  std::string getName();
};

class Wassertier : public Tier{
private:
  int anzFlossen{};
public:
  Wassertier(std::string *n);
  ~Wassertier();
  void setFlossen(int a);
  int getFlossen();
};

class Landtier : public Tier{
private:
  int anzBeine{};
public:
  Landtier(std::string *n);
  ~Landtier();
  void setBeine(int a);
  int getBeine();
};

#endif
