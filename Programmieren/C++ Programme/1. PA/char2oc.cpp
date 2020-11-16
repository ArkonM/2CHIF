#include <iostream>
using namespace std;

string char2oc(char buchs);




int main(){
  char buchs{};

  cout << ">>> ";
  cin >> buchs;

  cout << ">>> " << char2oc(buchs) << endl;
}


string char2oc(char buchs){
  string erg{};
  int bin1 = 192;

  for(int i = 0; i < 3; i++){
    if(i == 0){
      erg += to_string((bin1 & buchs) >> 6);
    }else if(i == 1){
      erg += to_string(((bin1 >> 3) & buchs) >> 3);
    }else{
      erg += to_string((bin1 >> 6) & buchs);
    }
  }
  return erg;
}