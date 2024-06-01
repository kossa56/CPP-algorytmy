#include <iostream>
#include <cmath>
#include <algorithm>
//Micha³ Kossakowski 2E
using namespace std;
void rozklad(long long a){
int k=2,d=0;
        
        while(a>1   &&  k<=sqrt(a)){
                while(a%k==0) {
                        d++;
                        a=a/k;
                }
               k++;
        }
        if(a>1){
              d++;
           }
           cout<<d;
        
}
int main(){
long long a;
cin>>a;
rozklad(a);






return 0;
}

