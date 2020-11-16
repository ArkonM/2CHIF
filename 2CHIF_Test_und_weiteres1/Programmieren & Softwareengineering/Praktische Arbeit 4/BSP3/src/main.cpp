/*  author: BRENNER Alexander Reinhard
    class: 2CHIF
    date: 11/05/2018
    description: Beispiel 3 PA4 Ü-Zettel
*/
#include "../include/class.h"
using namespace std;

int main(int argc, char* argv[]){
    const int arrlen = argc - 1;
    int maxLen = 0;
    string arr[arrlen];             //In diesem Array ist jeweils an einer Stelle
    string zw;                      //der Dateiinhalt als string
    for(int i = 1; i < argc; i++){
      zw = argv[i];
      try{
        arr[i - 1] = readFile(zw, maxLen);
      }catch(logic_error&e){
        cout << e.what() << endl;
      }
    }
    for(int i{}; i < maxLen; i++){
      for(int j{}; j < arrlen; j++){
          if(i < arr[j].size()){
            cout << arr[j][i] << endl;
          }
      }
    }
}
//-----------------
