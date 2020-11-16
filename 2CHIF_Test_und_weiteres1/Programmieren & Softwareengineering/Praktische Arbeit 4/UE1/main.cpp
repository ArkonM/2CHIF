/*  author: BRENNER Alexander Reinhard
    class: 2CHIF
    date: 16/05/18
    description: Ueben für die 4.PA   */

#include "inc.h"
using namespace std;

int main(){
  Tier *fotzenkind = new Tier(new string("RandPerson"));
  cout << fotzenkind -> getName() << endl;
  Tier *fotze2 = new Tier(*fotzenkind);
  cout << fotze2 -> getName() << endl;

  Wassertier wal(new string("Wal"));
  wal.setFlossen(134);
  cout << wal.getName() << " ";
  cout << wal.getFlossen() << endl;

  Landtier dog(new string("Hund"));
  dog.setBeine(4);
  cout << dog.getName() << " ";
  cout << dog.getBeine() << endl;
}
