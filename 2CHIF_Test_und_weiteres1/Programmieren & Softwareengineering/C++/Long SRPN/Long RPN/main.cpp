/*
 * author: BRENNER Alexander Reinhard
 * class: 2CHIF
 * date: 22/02/2018
 * description: Large RPN
 */

#include <iostream>
#include <string>
using namespace std;

struct Node{
    double data;
    Node *next;
};

struct SLL{
    Node *head;
};

SLL *create_list();                             // CHECK
void delete_list(SLL* lst);                     // CHECK
void push_back(SLL* lst, double data);          // CHECK
void push_front(SLL* lst, double data);         // CHECK
void insert(SLL *lst, int idx, double data);    // CHECK
double back(SLL *lst);                          // CHECK
double pop_back(SLL *lst);                      // CHECK
double front(SLL *lst);                         // CHECK
double pop_front(SLL *lst);                     // CHECK
double erase(SLL *lst, int idx);                // CHECK
unsigned int size(SLL *lst);                    // CHECK
bool empty(SLL *lst);                           // CHECK
double get(SLL* lst, int index);                // CHECK
void clear(SLL* lst);                           // CHECK
void print(SLL *lst);                           // CHECK   


int main() {
														//Variableninitialisierung
	string befehle[] = {"print", "clear", "quit", "swap", "duplicate", "rotate"};
	size_t pos;
	SLL *liste = create_list();
	string rechenoperator;
	double erg;
	string inp;
        int z1;
        int z2;
//---------------------------------------------------	// Hauptteil (Schleife)
	while(true){
		cout << "-------------------" << endl;
		cout << ">> ";		
		cin >> inp;
		if(!cin){										//Falls CTRL - D eingegeben wird und so die Eingabe unterbrochen wird, wird das Programm beendet
		    cout << endl;
		    break;
		}
		if(inp == befehle[0]){							// Hier wird überprüft ob die Eingabe im Befehlsregister enthalten ist (Ob die Eingabe ein Befehl ist)
                    print(liste);
		    continue;
		}
		if(inp == befehle[1]){
                    clear(liste);
               	    cout << "Alle Register wurde gelöscht!" << endl;
		    continue;
		}
		if(inp == befehle[2]){
                    return 0;
		}
                if(inp == befehle[3]){
                    double swap = pop_front(liste);
                    insert(liste, 1, swap);
                }
                if(inp == befehle[4]){
                    double cop = front(liste);
                    insert(liste, 1, cop);
                }
                if(inp == befehle[5]){
                    double rot = pop_front(liste);
                    push_back(liste, rot);
                }
//---------------------------------------------------
		try{											//Hier wird die Eingabe auf ihre Gültigkeit überprüft
			z1 = stod(inp, &pos);
			if(pos != inp.size()){
				cout << "FEHLER! Geben Sie bitte NUR eine Zahl ein!" << endl;
				continue;
			}
		}catch(invalid_argument){
		    if(inp != "clear" && inp != "print" && inp != "swap" && inp != "duplicate" && inp != "rotate"){
			    cout << "Gib eine richtige Zahl ein!" << endl;
				continue;
			}		

		}
//---------------------------------------------------
		cout << ">> ";		
		cin >> inp;
		if(!cin){										//Falls CTRL - D eingegeben wird und so die Eingabe unterbrochen wird, wird das Programm beendet
		    cout << endl;
		    break;
		}
		if(inp == befehle[0]){							// Hier wird überprüft ob die Eingabe im Befehlsregister enthalten ist (Ob die Eingabe ein Befehl ist)
                    print(liste);
		    continue;
		}
		if(inp == befehle[1]){
                    clear(liste);
               	    cout << "Alle Register wurde gelöscht!" << endl;
		    continue;
		}
		if(inp == befehle[2]){
                    return 0;
		}
                if(inp == befehle[3]){
                    double swap = pop_front(liste);
                    insert(liste, 1, swap);
                }
                if(inp == befehle[4]){
                    double cop = front(liste);
                    insert(liste, 1, cop);
                }
                if(inp == befehle[5]){
                    double rot = pop_front(liste);
                    push_back(liste, rot);
                }
//---------------------------------------------------
		try{											//Hier wird die Eingabe auf ihre Gültigkeit überprüft
			z2 = stod(inp, &pos);
			if(pos != inp.size()){
				cout << "FEHLER! Geben Sie bitte NUR eine Zahl ein!" << endl;
				continue;
			}
		}catch(invalid_argument){
		    if(inp != "clear" && inp != "print" && inp != "swap" && inp != "duplicate" && inp != "rotate"){
			    cout << "Gib eine richtige Zahl ein!" << endl;
				continue;
			}		

		}
//---------------------------------------------------
	cout << ">> ";
	cin >> rechenoperator;
	if(!cin){
	cout << "PROGRAMM WIRD BEENDET (UNTERBRECHUNG DES EINGABESTROMS)" << endl;
	    break;
	}
	if(rechenoperator == befehle[0]){
	    print(liste);
	}
	if(rechenoperator == befehle[1]){
	    clear(liste);
	    cout << "Alle Register wurde gelöscht!";
	}
	if(rechenoperator == befehle[2]){
	    return 0;
	}
        if(rechenoperator == befehle[3]){
            double swap = pop_front(liste);
            insert(liste, 1, swap);
        }
        if(rechenoperator == befehle[4]){
            double cop = front(liste);
            insert(liste, 1, cop);
        }
        if(rechenoperator == befehle[5]){
            double rot = pop_front(liste);
            push_back(liste, rot);
        }
//---------------------------------------------------
	if (rechenoperator == "+"){								//Hier wird die Gültigkeit des Rechenoperators geprüft
		erg = z1 + z2;
	}else{
 		 if (rechenoperator == "-"){
			erg = z1 - z2;
		}else{
			 if (rechenoperator == "*"){
				erg = z1 * z2;

			}else{
		 		 if (rechenoperator == "/"){
					if(z2 != 0){
					 erg = z1 / z2;
					}else{
						cout << "FEHLER! Division durch Null!" << endl;
						continue;
				 }		
					 
				}else{
					cout << "FEHLER! Es wurde ein ungültiger Operator eingegeben" << endl;
					continue;}
}}}
//---------------------------------------------------
        push_front(liste, erg);
	}
}
//-----------------------------------
//--------------------
SLL *create_list(){
    SLL *list = new SLL;
    list -> head = NULL;
    return list;
}
//--------------------
void delete_list(SLL *lst){
    Node *cur = lst -> head;
    Node *del = lst -> head;
    while(cur != NULL){
        del = cur -> next;
        delete cur;
        cur = del;
    }
}
//---------------------
void push_front(SLL *lst, double data){
    Node *element = new Node;
    element -> data = data;
    element -> next = lst -> head;
    lst -> head = element;
}
//-----------------------
void push_back(SLL *lst, double data){
    Node *element = new Node;
    element -> data = data;
    element -> next = NULL;
    if(lst -> head == NULL){
        lst -> head = element;
        return;
    }else{
        Node *cur = lst -> head;
        while(cur != NULL && cur -> next != NULL){
            cur = cur -> next; 
        }
        cur -> next = element;
        return;
    }
}
//-------------------------
void print(SLL *lst){
    Node *cur = lst -> head;
    while(cur != NULL){
        cout << cur -> data << " ";
        cur = cur -> next;
    }
    cout << endl;
}
//----------------------------
void insert(SLL *lst, int idx, double data){
    if(size(lst) < idx)throw logic_error("Fick dich amk!");
    Node *element = new Node;
    element -> data = data;
    if(idx == 0){
        element -> next = lst -> head;
        lst -> head = element;
        return;
    }
    Node *cur = lst -> head;
    int i= 0;
    while(i < idx-1){
        cur = cur -> next;
        i += 1;
    }
    element -> next = cur -> next;
    cur -> next = element;
}
//----------------------------
unsigned int size(SLL *lst){
    Node *cur = lst -> head;
    int i=0;
    while(cur != NULL){
        cur = cur -> next;
        i += 1;
    }
    return i;
}
//-----------------------------
void clear(SLL* lst){
    Node *cur = lst -> head;
    while(cur != NULL){
        cur -> data = 0;
        cur = cur -> next;
    }
}
//----------------------------
double back(SLL *lst){
    Node *cur = lst -> head;
    while(cur -> next != NULL){
        cur = cur -> next;
    }
    double erg = cur -> data;
    return erg;
}
//----------------------------
double front(SLL *lst){
    double erg = lst -> head -> data;
    return erg;
}
//----------------------------
bool empty(SLL *lst){
    if(lst -> head == NULL){
        return true;
    }else{
        return false;
    }
}
//-----------------------------
double get(SLL* lst, int index){
    int i=0;
    Node *cur = lst -> head;
    while(i < index){
        cur = cur -> next;
        i += 1;
    }
    double erg = cur ->data;
    return erg;
}
//-------------------------------
double erase(SLL *lst, int idx){
    int i=0;
    Node *zw = lst -> head;
    if(idx == 0){
        lst -> head = lst ->head -> next;
    }else{
        Node *cur = lst -> head;
        while(i < idx-1){
            cur = cur -> next;
            i += 1;
        }
        Node *zw = cur -> next;
        cur -> next = cur ->next->next;
    }
    int erg = zw -> data;
    delete zw;
    return erg;
}
//-------------------------------
double pop_front(SLL *lst){
    if(lst -> head == NULL)throw logic_error("Deas geht nit LAN");
    double erg = lst -> head -> data;
    Node *tmp = lst -> head;
    lst -> head = lst -> head -> next;
    delete tmp;
    return erg;
}
//-------------------------------
double pop_back(SLL *lst){
    Node *last = lst -> head;
    while(last -> next != NULL){
        last = last -> next;
    }
    double erg = last -> data;
    Node *cur = lst -> head;
    while(cur -> next != last){
        cur = cur -> next;
    }
    cur -> next = NULL;
    delete last;
    return erg;
}
