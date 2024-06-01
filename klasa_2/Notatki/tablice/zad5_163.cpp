#include <iostream>
#include <cmath>
#include <algorithm>
//Micha³ Kossakowski 2E
using namespace std;



int main(){
	
int lewy=0,prawy,s=0,n;
cin>>n;
int*tab=new int[n];
for(int i=0; i<n;i++){
	cin>>tab[i];
}


prawy=n-1;

while(lewy!=prawy){
	
	s=(lewy+prawy)/2;
	if(tab[s]%2!=0){
	lewy=s+1;
	
}
 if(tab[s]%2 == 0){
            prawy = s;
        }
	
}

cout<<tab[lewy];


return 0;
}

