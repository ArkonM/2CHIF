//Schneider Armin
//Die Summenfunnktion

#include "summe.h"

unsigned int sum(int z){
    int erg = 0;
    while(z > 0)
    {
        erg += z;
        --z;
    }
    return erg;
}