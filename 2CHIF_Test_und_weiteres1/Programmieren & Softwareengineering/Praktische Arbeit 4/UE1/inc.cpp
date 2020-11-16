/*  author: BRENNER Alexander Reinhard
    class: 2CHIF
    date: 16/05/18
    description: Ueben für die 4.PA   */

#include "inc.h"
using namespace std;

Tier::Tier(string *n){
  name = n;
}

Tier::~Tier(){
  delete name;
  name = NULL;
}

string Tier::getName(){
  string erg = *name;
  return erg;
}

Wassertier::Wassertier(string *n) : Tier(n){

}

Wassertier::~Wassertier(){

}

void  Wassertier::setFlossen(int a){
    anzFlossen = a;
}

int  Wassertier::getFlossen(){
  return anzFlossen;
}

Landtier::Landtier(string *n) : Tier(n){

}

Landtier::~Landtier(){

}

void Landtier::setBeine(int a){
  anzBeine = a;
}
int Landtier::getBeine(){
  return anzBeine;
}
