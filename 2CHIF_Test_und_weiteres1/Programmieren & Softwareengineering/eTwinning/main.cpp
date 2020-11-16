/*  author: DIMITRIJEVIC Marija & BRENNER Alexander
*/

#include <iostream>
using namespace std;

string caesarCode(string inp);

int main(){
  string inp;
  cout << "W E L C O M E    T O    O U R    E T W I N N I N G    P R O J E C T" << endl;

  cout << ">>> ";
  cin >> inp;
  cout << caesarCode(inp) << endl;
}
//-----------------
string caesarCode(string inp){
  string newString;
  for(int i = 0; i < inp.size(); i++){  //When the character is a digit under the maxValue (57, 90, 122) - 2, do the following steps...
    if(int(inp[i]) >= 48 and int(inp[i]) <= 55 or int(inp[i]) >= 65 and int(inp[i]) <= 88 or int(inp[i]) >= 97 and int(inp[i]) <= 120){
      newString += inp[i] + 2;
    }else if(int(inp[i]) >= 56 and int(inp[i]) <= 57){ // When the character is a number and the ASCII Value of this digit is above the maxValue...
      newString += inp[i] - 8;
    }else if(int(inp[i]) >= 89 and int(inp[i]) <= 90 or int(inp[i]) >= 121 and int(inp[i]) <= 122){ //When the character is a letter and the ASCII Value of this digit is above the maxValue...
      newString += inp[i] - 24;
    }
  }
  return newString;
}
