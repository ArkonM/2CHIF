/*  author: BRENNER Alexander Reinhard
    class: 2CHIF
    date: 16/05/18
    description: Ueben für die 4.PA   */

#include "inc.h"
using namespace std;

int main(){
  int height{};
  fstream src;
  src.open("text.txt");
  src >> height;
  src.close();
  if(height % 2 != 0){
    cout << "Deine Zahl ist zwar nicht gerade, aber das Pattern wird trotzdem generiert..." << endl;
  }
  printPattern(height);
}
