/*  author: BRENNER Alexander Reinhard
    class: 2CHIF
    date: 11/05/2018
    description: Beispiel 1 PA4 Ü-Zettel
*/

using namespace std;

#include "../include/class.h"

int main()
{
 PZ *p1=new PZ(new string("Alex"));
 PZ p2[2];
 UK u1=UK(nullptr, 3);
 PZ *p3=&u1;
 p1->print();
 p3->print();
 cout << endl << PZ::getCounter() << endl;
 delete p1;
 return 0;
}

//PZ:Alex
//PZ::UK:3
//4
