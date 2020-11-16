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

int main(){
    SLL *liste = create_list();
    cout << "Leer?: " << empty(liste) << endl;
    push_front(liste,4);
    push_front(liste,3);
    push_front(liste,2);
    push_back(liste, 5);
    insert(liste, 0, 6);
    print(liste);

    cout << endl<<"Front: " <<front(liste) << endl;
    cout << "Back: " << back(liste) << endl;
    cout << "Laenge: " << size(liste) << endl;
    
    cout << "Element an der Stelle X: " << get(liste, 0) << endl;
    cout << "Leer?: " << empty(liste) << endl;
    
    erase(liste, 0);
    print(liste);
    cout << endl;
    pop_front(liste);
    pop_back(liste);
    print(liste);
    cout << endl;
    
    clear(liste);
    print(liste);
}
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