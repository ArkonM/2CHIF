/*author: BRENNER Alexander Reinhard
 * class: 2CHIF
 * date: 19/02/2018
 * description: Own Stack functions push and pop
*/
#include <iostream>
using namespace std;


//------------------------- Knoten
struct node{              //Ein Knoten ist das Element vom Typ Node/INTEGER welches sich dann
    int data;             //in der Liste befindet. Der "Node" Datentyp besteht aus dem Wert selber (info)
    node *next;           //und einem "Zeiger" auf das nächste Element, welches vorher in die Liste
};                        //gefügt wurde.

//-------------------------SLL - Single Linked List
struct sll{               //Das ist unser selbst erstellter Listendatentyp
    node *head;           //Er beinhaltet nur das am letzten angefügte Element um das Ende zu markieren -> head
};
//-------------------------SLL2A - Single Linked List with 2 Ankers
struct sll2a{             //Dieser Listendatentyp besitzt wieder ein head und auch einen Tail
    node *head;           //welcher auf das am ersten angefügte Element zeigt
    node *tail;
};
//-------------------------Knoten für Double-Linked-Lists
struct dbNode{             //Der einzige Unterschied zu einem normalen Knoten ist, dass
    int data;              //dieser zusätzlich zum nächsten Element auch auf das vorherige zeigt
    dbNode *next;
    dbNode *prev;
};
//-------------------------Double Linked List
struct dll{                //Der Unterschied zur SLL liegt hier ausschließlich im Knoten
    dbNode *head;
};
//-------------------------

void push_f(sll &list, int wert);
void push_f2a(sll2a &list, int wert);
void push_fDLL(dll &list, int wert);
int pop_f(sll &list);
int pop_f2a(sll2a &list);
int pop_fDLL(dll &list);
void printSll(sll list);

int main() {
    sll liste1;
    sll2a liste2;
    dll liste3;

    push_f(liste1, 3);
    push_f(liste1, 5);
    printSll(liste1);
    pop_f(liste1);
    printSll(liste1);

    push_f2a(liste2, 5);
    pop_f2a(liste2);

    push_fDLL(liste3, 10);
    pop_fDLL(liste3);

}

//-------------------------------
void push_f(sll &list, int wert){
    node *n = new node;
    n -> data = wert;
    n -> next = list.head;
    list.head = n;
}
//-------------------------------
void push_f2a(sll2a &list, int wert){
    node *n = new node;
    n -> data = wert;
    n -> next = list.head;
    if(list.head = NULL){
        list.tail = n;
    }
    list.head = n;
}
//-------------------------------
void push_fDLL(dll &list, int wert){
    dbNode *n = new dbNode;
    n -> data = wert;
    n -> next = list.head;
    list.head = n;
    n -> prev = NULL;
}
//-------------------------------
int pop_f(sll &list){
    if(list.head == NULL){
        throw logic_error("Du kannst nichts poppen. hehe xD");
    }
    int erg = list.head -> data;
    node *tmp = list.head;
    list.head = list.head -> next;
    delete tmp;
    tmp = NULL;
    return erg;
}
//-------------------------------
int pop_f2a(sll2a &list){
    if(list.head == NULL){
        throw logic_error("Du kannst nichts poppen. hehe xD");
    }
    int erg = list.head -> data;
    node *tmp = list.head;
    list.head = list.head -> next;
    if(list.head == NULL){
        list.tail = NULL;
    }
    delete tmp;
    tmp = NULL;
    return erg;
}
//-------------------------------
int pop_fDLL(dll &list){
    if(list.head == NULL){
        throw logic_error("Du kannst nichts poppen. hehe xD");
    }
    int erg = list.head -> data;
    dbNode *tmp = list.head;
    list.head = list.head -> next;
    if(list.head != NULL){
        list.head -> prev = NULL;
    }
    delete tmp;
    tmp = NULL;
    return erg;
}
//--------------------------------
void printSll(sll list){
    int tmp;
    while(list.head != NULL){
        tmp = list.head -> data;
        cout << tmp << endl;
        list.head = list.head -> next;
    }
}