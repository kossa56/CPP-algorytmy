#include <iostream>
#include <cmath>
#include <algorithm>
//Micha³ Kossakowski 2E
using namespace std;

int tab[10005];

int main(){
	
int lewy=0,prawy,s=0,szuk,n;
cin>>n;
for(int i=0; i<n;i++){
	cin>>tab[i];
}
cin>>szuk;

prawy=n-1;

while(lewy<prawy){
	
	s=(lewy+prawy)/2;
	
	if(szuk>tab[s]){
		lewy=s+1;
	}
	else{
		prawy=s;
	}
}
if(tab[lewy]==szuk){
	cout<<lewy;
}
else{
	cout<<"NIE MA";
}


return 0;
}

