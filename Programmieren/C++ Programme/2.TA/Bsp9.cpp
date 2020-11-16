//Schneider Armin
//18.12.2019

#include <iostream>
#include <string>

using namespace std;


int main(int argc, char** argv){
    string name = argv[0];
    string erg{};
    for(int i=2;i<name.length();i++){
        erg += name[i];
    }
    cout << "Der Programmname lautet: " << erg << endl;
}
