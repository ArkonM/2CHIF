#include <iostream>
using namespace std;

enum Farbe {ROT, GELB, GRUEN, BLAU};

int main() {
  Farbe ampel = Farbe(3);
  if(ampel == Farbe::BLAU)
    cout << "blau" << endl;
  cout << (int)ampel << endl;
  int zahl = (int)Farbe::ROT;
  cout << zahl << endl;
  cout << Farbe(3);
  return 0;
}
