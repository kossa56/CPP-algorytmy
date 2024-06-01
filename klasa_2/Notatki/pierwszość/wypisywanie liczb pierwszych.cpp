#include <iostream>
#include <cmath>
#include <algorithm>
//Micha³ Kossakowski 2E
using namespace std;
void pierwsza(int a){
   int  b=2, c;    // b -dzielna c-dzielnik
 
  while(b<=a) {
    for(c=2; c<=b; c++) {
      if(b%c==0) {
        if (b==c){
		
		cout<<b<<" ";
	}
		  else{
		   break;
		   }
      }
    }  
    b++;
  }
    }
   
int main(){
ios_base::sync_with_stdio(0);
int a;
cin>>a;
pierwsza(a);






return 0;
}

