/* author: BRENNER Alexander Reinhard
   class: 2CHIF
   date: 29/10/2017
   description: Beispiel 2 Funktionen überladen */
#include <iostream>

using namespace std;

void print(int zahl = 5);
void print(int zahl, string hw);
void print(string hw);

int main(){
    print();
    print(5, "Hello!");
    print("Hello!");
}

void print(int zahl){
    cout << zahl << endl;
}

void print(int zahl, string hw){
    cout << zahl << " " << hw << endl; 
}

void print(string hw){
    cout << hw << endl;
}
