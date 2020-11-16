//Schneider Armin
//Zweite PA, zweites Beispiel
//16.12.2019

#include "connect.h"


using namespace std;


void countFile(string txt,int *er){
        int buchs {0};
        int zahl  {0};
        int sondZ {0};
        int opera {0};
        for(int i=0; i<txt.length(); i++){
                if(txt[i] >= 65 && txt[i] <= 90 || txt[i] >= 97 && txt[i] <= 122)
                        *er += 1;
                else if(txt[i] >= 48 && txt[i] <= 57){
                        er += 1;
                        *er += 1;
                        er -= 1;
                }
                else if(txt[i]=='+'||txt[i]=='*'||txt[i]=='-'||txt[i]=='/'){
                        er += 2;
                        *er += 1;
                        er -= 2;
                }
                else{
                        er += 3;
                        *er += 1;
                        er -= 3;
                }
        }
}
