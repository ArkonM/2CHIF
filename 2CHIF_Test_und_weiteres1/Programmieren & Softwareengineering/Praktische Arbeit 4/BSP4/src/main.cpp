/*  author: BRENNER Alexander Reinhard
    class: 2CHIF
    date: 11/05/2018
    description: Beispiel 3 PA4 Ü-Zettel
*/

using namespace std;

#include "../include/class.h"

int main(int argc, char* argv[]){
    queue *myQueue = new queue;
    myQueue -> push(5);
    myQueue -> push(6);
    myQueue -> push(7);
    myQueue -> push(8);
    cout << queue::size() << endl;
    cout << myQueue -> pop() << endl;
    cout << queue::size() << endl;
    myQueue -> clear();
    delete myQueue;
}
