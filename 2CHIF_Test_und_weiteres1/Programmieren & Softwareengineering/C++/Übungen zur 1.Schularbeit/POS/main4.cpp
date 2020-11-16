/* author: BRENNER Alexander Reinhard
   class: 2CHIF
   date: 29/10/2017
   description: Beispiel 4 Pattern      */
#include <iostream>
using namespace std;
void print_pattern(int breite, int hoehe);
int main(){
    string inp;
    int hoehe{};
    int breite{};
    size_t pos;
    while(true){
    cout << "Höhe" << endl;
    cout << ">>> ";
    cin >> inp;
    try{
	hoehe = stod(inp, &pos);
	if(pos != inp.size() or hoehe > 20){
		throw logic_error("");
	}
	}catch(invalid_argument){
		cout << "Bitte geben Sie eine korrekte Zahl ein!" << endl;
		continue;
	}catch(logic_error){
		cout << "Bitte verwenden Sie ausschließlich Zahlen und beachten Sie, dass die maximale Höhe 20 ist!" << endl;
		continue;
	}
     cout << "Breite" << endl;
     cout << ">>> " << endl;
     cin >> inp;
     try{
	breite = stod(inp, &pos);
	if(pos != inp.size() or breite > 80){
		throw logic_error("");
	}
	}catch(invalid_argument){
		cout << "Bitte geben Sie eine korrekte Zahl ein!" << endl;
		continue;
	}catch(logic_error){
		cout << "Bitte verwenden Sie ausschließlich Zahlen und beachten Sie, dass die maximale Breite 80 ist!" << endl;
		continue;
	}

    print_pattern(breite, hoehe);
    }
}
//-------------------------------------------
void print_pattern(int breite, int hoehe){
    int i{};
    int j{};
    if(hoehe != 0){
        while(i < hoehe){
            if(i == 0){
                while(j < breite){
                    cout << "*";
                    j += 1;
                }
                cout << endl;
            }
            else if(i == (hoehe - 1)){
                while(j < breite){
                    cout << "*";
                    j += 1;
                }
                cout << endl;
            }else{
                cout << "*";
                while(j < (breite - 2)){
                    cout << " ";
                    j += 1;
                }
                cout << "*" << endl;
           }
        j = 0;
        i += 1;
        } 
    }
}
