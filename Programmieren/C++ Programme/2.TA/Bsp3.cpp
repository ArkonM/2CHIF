//Schneider Armin
//18.12.2019

#include <iostream>
using namespace std;

//Normal Rekursiv
int potenzieren1(int a, int b){
    if(b==1)
        return a;
    else if(b==0)
        return 1;
    else
        return potenzieren1(a,b-1)*a;    
}

//Endrekursiv
int potenzieren2(int a, int b, int erg=1){
    if(b==0)
        return erg;
    else
        return potenzieren2(a,b-1,erg*a);
}

//Strikt Endrekursiv
int potenzieren3(int a, int b, int erg=1){
    if(b==0)
        return erg;
    else
        erg = a*erg;
        return potenzieren3(a,b-1,erg);
}

//Iterativ
int potenzieren4(int a, int b, int erg=1){
    while(true){
        if(b==0){
            return erg;
        }else{
            erg *= a;
            b--;
        }
    }
}


int main(){
    cout << potenzieren1(4,3) << endl;  //Normal Rekursiv
    cout << potenzieren2(4,3) << endl;  //Endrekursiv
    cout << potenzieren3(4,3) << endl;  //Strikt Endrekursiv
    cout << potenzieren4(4,3) << endl;  //Iterativ
}