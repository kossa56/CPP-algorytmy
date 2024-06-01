#include <iostream>
#include <cmath>
#include <algorithm>
//Micha³ Kossakowski 2E
using namespace std;
bool pierwsza(int a){
    if(a < 2 ) return false;
    for(int i= 2; i <= sqrt(a);i++){
        if(a % i == 0){
            return false;
        }
    }
    // nie bylo dzielika
    return true;
}

int main (){
    int a;
    cin>>a;
    if (pierwsza(a)== true) cout<<"tak";
    else cout<<"nie";

    return 0 ;
}
