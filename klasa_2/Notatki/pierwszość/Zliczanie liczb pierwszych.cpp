#include <iostream>
#include <cmath>
#include <algorithm>
//Micha³ Kossakowski 2E
using namespace std;
bool pierwsza(long long  a){
    int sw , i;
    sw = 0;
    if(a <2 ) sw=1;
    for(i= 2; i <= sqrt(a);i++){
        if(a % i == 0){
            sw=1;
            break;
        }
    }
    if(sw == 0) return true;
    else return false;
    }



int main(){
long long  a,d=0;
cin>>a;
for(int i=1;i<=a;i++){
	if(pierwsza(i)==true){
	d++;	
	}
}
cout<<d;



return 0;
}

