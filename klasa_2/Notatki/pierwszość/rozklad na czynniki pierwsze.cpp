#include <iostream>
#include <cmath>
#include <algorithm>
//Micha� Kossakowski 2E
using namespace std;
void rozklad(long long a){
int k=2;
        
        while(a>1   &&  k<=sqrt(a)){
                while(a%k==0) {
                        cout<<k<<" ";
                        a=a/k;
                }
               k++;
        }
        if(a>1){
               cout<<a;
           }
        
}
int main(){
long long a;
cin>>a;
rozklad(a);






return 0;
}

