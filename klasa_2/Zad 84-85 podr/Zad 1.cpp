#include <iostream>
#include <cmath>
#include <algorithm>
//Micha³ Kossakowski 2E
using namespace std;
bool pierwsza(int a){
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
for(int i=2; i<100; i++){
	if(pierwsza(i)==true){
		cout<<i<<" ";
	}
}




return 0;
}

