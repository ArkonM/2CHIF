//Schneider Armin

#include <iostream>
#include <fstream>

using namespace std;





int main(){
    fstream kms;
    string txt, erg;
    try{
        if(f.is_open) {
            f.open("Deteipfad", ios::in);
            while(!f.eof){
                getline(kms, txt)
                erg += txt;
            }
        }else{
            throw logical_error("Datei konnte nicht geöffnet werden!");
        }
    }catch(logical_error &ex){
        cout << ex.what() << endl;
    }
