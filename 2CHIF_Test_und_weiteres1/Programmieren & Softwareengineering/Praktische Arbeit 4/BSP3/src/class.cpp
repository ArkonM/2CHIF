/*  author: BRENNER Alexander Reinhard
    class: 2CHIF
    date: 11/05/2018
    description: Beispiel 3 PA4 Ü-Zettel
*/

#include "../include/class.h"
using namespace std;

string readFile(string filename, int &maxLen){
  ifstream src;
  src.open(filename);
  if(!src){
    throw logic_error("Der Dateiname ist ungültig, die Datei konnte nicht gefunden werden");
  }
  string ges = "";
  string zw;
  while(!src.eof()){
    src >> zw;
    if (!src.eof()){
        ges += zw;
    }
  }
  if(ges.size() > maxLen){
      maxLen = ges.size();
  }
  src.close();
  return ges;
}
