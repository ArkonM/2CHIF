/*
 * author: BRENNER Alexander Reinhard
 * class: 2CHIF
 * description: 09_Card_Deck
 * date: 25/01/2017
 */

#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
//------------------------
    enum Action{
        NEW_DECK = 1,
        TAKE_CARD,
        PUT_CARD_TOP,
        INSERT_CARD_BOTTOM,
        SHOW_DECK,
        QUIT
    };
Action menu();
unsigned char* create_card_deck();
void printCharArray(unsigned char* arr);
void init_card_deck(unsigned char* cardDeck);
int take_card_top(unsigned char* arr, int &top);
bool put_card_top(unsigned char* arr, int &top);
bool insert_card_bottom(unsigned char*& arr, int &top, int card);

int main() {
    unsigned char arr[20];
    int auswahl;
    int top = 19;
    int aktKarte;
    bool success;
    init_card_deck(arr);
    while(true){
    try{
        auswahl = menu();
    }catch(logic_error &e){
        cerr << e.what() << endl;
        main();
    }
    switch(auswahl){
        case NEW_DECK:
            cout << endl;
            init_card_deck(arr);
            cout << "Es wurde erfolgreich ein neuer Kartenstapel angelegt!" << endl;
            top = 19;
            break;
        case TAKE_CARD:
            cout << endl;
            aktKarte = take_card_top(arr, top);
            cout << "Deine Karte lautet: " << aktKarte << endl;
            break;
        case PUT_CARD_TOP:
            success = put_card_top(arr, top);
            if(success == true)cout << endl << "Aktion erfolgreich!" << endl;
            else{cout << endl << "Der Stapel ist voll!" << endl;}
            break;
        case INSERT_CARD_BOTTOM:
            break;
        case SHOW_DECK:
            cout << endl;
            printCharArray(arr);
            cout << endl;
            break;
        case QUIT:
            return 0;
            break;
    }
    }
}
//------------------------
Action menu(){
    string inp;
    size_t pos;
    int auswahl;
    cout << "-----------------------------" << endl;
    cout << "[1] Kartenstapel neu anlegen" << endl;
    cout << "[2] Eine Karte entnehmen" << endl;
    cout << "[3] Karte auf den Stapel zurücklegen" << endl;
    cout << "[4] Karte unten in den Stapel einordnen" << endl;
    cout << "[5] Kartenstapel anzeigen" << endl;
    cout << "[6] Beenden" << endl;
    cout << ">>> ";
    cin >> inp;
    auswahl = stoi(inp, &pos);
    if(pos != inp.size()){
        throw logic_error("Bitte geben Die eine Zahl ein!");
    }
    else if(auswahl < 1 || auswahl > 6){
        throw logic_error("Bitte beachten Sie die Auswahlmöglichkeiten");
    }
    else{
        return static_cast<Action>(auswahl);
    }
}
//------------------------------
void init_card_deck(unsigned char* cardDeck){
    int zw;
    bool zahlDa;
    int j;
    for(int i=0; i < 20; i++){
        zahlDa = false;
        zw = rand() % 32000;
        for(j=0; j < 20; j++){
            if(cardDeck[j] == zw){
                zahlDa = true;
            }
        }
        if(zahlDa == false){
            cardDeck[i] = zw;
        }
    }
}
//------------------------------
void printCharArray(unsigned char* arr){
    for(int i=0; i < 20; i++){
        cout << static_cast<int>(arr[i]) << " ";
    }
}
//-------------------------------
int take_card_top(unsigned char* arr, int &top){
    if(top < 0){
        cout << "Es befinden sich keine Karten mehr am Stapel" << endl;
        return 0;
    }else{
        top -= 1;
        int karte = static_cast<int>(arr[top+1]);
        return karte;
    }
}
//----------------------------------
bool put_card_top(unsigned char* arr, int &top){
    if(top == 19)return false;
    else{
        top += 1;
        cout << endl;
        cout << static_cast<int>(arr[top]) << endl;
        return true;
    }
}
//-----------------------------------
bool insert_card_bottom(unsigned char*& arr, int &top, int card){
    //I AM WORKING ON IT
}
