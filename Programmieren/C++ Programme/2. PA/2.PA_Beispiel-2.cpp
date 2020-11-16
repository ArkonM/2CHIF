//Schneider Armin
//Zweite PA, zweites Beispiel
//16.12.2019

#include <iostream>
#include <fstream>

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


int main(){
    fstream f;
    string s {};
    int ar[4];
    int *pa = ar;
    string txt {};
    try{
        if(f.is_open){
            f.open("/home/armin/Desktop/2CHIF/Programmieren/C++ Programme/2. PA/Text.txt", ios::in);
            while(!f.eof()){
                getline(f, s);
                txt += s;
            }
        }else
            throw logical_error;
    }catch(logical_error &ex){
        cout << ex.what() << endl;
    }
    countFile(txt, pa);
    cout << "Der eingegebene Text enthält: " << ar[0] << " Buchstaben" << endl;
    cout << "Der eingegebene Text enthält: " << ar[1] << " Zahlen" << endl;
    cout << "Der eingegebene Text enthält: " << ar[2] << " Operationen" << endl;
    cout << "Der eingegebene Text enthält: " << ar[3] << " Andere" << endl;
}
