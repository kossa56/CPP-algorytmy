#include <iostream>
#include <cmath>
#include <algorithm>
//Micha³ Kossakowski 3E
using namespace std;

int main(){
int a,b,c;
cin>>a>>b>>c;
   if (a+b>c && a+c>b && c+b>a){
  
    if (a*a+b*b==c*c || a*a+c*c==b*b || c*c+b*b==a*a){
        cout<<"1"; 
        return 0;
    }
    if (a==b && b==c){ 
     cout<<"2";
     return 0;
    }
    else{
    	cout<<"0";
	}

          }
   else{
   
      cout<<"0";
}


return 0;
}

