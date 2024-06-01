#include <iostream>
#include <cmath>
#include <algorithm>
//Micha³ Kossakowski 2E
using namespace std;

int main(){
string s;
int suma=0;
cin>>s;
for(int i=0;i<s.size();i++){
	  if(s[i]=='I' && s[i+1]=='V'){
        suma=suma+4;
        i++;
        continue;
    }
    if(s[i]=='I' && s[i+1]=='X'){
        suma=suma+9;
        i++;
         continue;
    }
     if(s[i]=='X' && s[i+1]=='L'){
        suma=suma+40;
        i++;
         continue;
    }
     if(s[i]=='X' && s[i+1]=='C'){
        suma=suma+90;
        i++;
         continue;
    }    
     if(s[i]=='C' && s[i+1]=='D'){
        suma=suma+400;
        i++;
         continue;
    }
    if(s[i]=='C' && s[i+1]=='M'){
        suma=suma+900;
        i++;
         continue;
    }        
    if(s[i]=='I'){
        suma++;
    }
     if(s[i]=='V'){
        suma=suma+5;
    }
     if(s[i]=='X'){
        suma=suma+10;
    }
     if(s[i]=='L'){
        suma=suma+50;
    }
    if(s[i]=='C'){
        suma=suma+100;
    }
    if(s[i]=='D'){
        suma=suma+500;
    }    
   if(s[i]=='M'){
        suma=suma+1000;
    }
   
  
  }
cout<<suma;




return 0;
}

