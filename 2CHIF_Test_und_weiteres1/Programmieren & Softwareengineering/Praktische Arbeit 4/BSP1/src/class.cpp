/*  author: BRENNER Alexander Reinhard
    class: 2CHIF
    date: 11/05/2018
    description: Beispiel 1 PA4 Ü-Zettel
*/

#include "../include/class.h"

//Class PZ ----------------------------------------------
int PZ::anzPersonen = 0;
//-----------
PZ::PZ(){
  anzPersonen += 1;
}
//-----------
PZ::PZ(std::string *n){
  name = n;
  anzPersonen += 1;
}
//-----------
PZ::~PZ(){
  anzPersonen -= 1;
}
//-----------
PZ::PZ(std::string *n, int intelligence){
  name = n;
  iq = intelligence;
  anzPersonen += 1;
}
//-----------
int PZ::getCounter(){
  return anzPersonen;
}


//Class UK ----------------------------------------------
UK::UK() : PZ(){
}
//-----------
UK::UK(std::string *n) : PZ(n){
}
//-----------
UK::UK(std::string *n, int intelligence) : PZ(n, intelligence){
}
//-----------
UK::~UK(){
}
