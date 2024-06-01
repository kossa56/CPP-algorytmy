#include <iostream>
#include <cmath>
#include <algorithm>
//Micha³ Kossakowski 2E
using namespace std;

int main(){
ios_base::sync_with_stdio(0);
int szuk,n;
cin>>n;
int*tab=new int[n];

for(int i=0; i<n;i++){
	cin>>tab[i];
}
cin>>szuk;
int s=0,lewy=0,prawy=n-1;
while(lewy<prawy){
	s=(lewy+prawy)/2;
	if(szuk>tab[s]){
		lewy=s+1;
	}
	else{
		prawy=s;
	}
}
if(tab[n-1]>=szuk){

for(int i=1;i<n;i++){
	if(tab[lewy+i]==szuk){
	lewy++;
	}
}
if(tab[lewy+1]!=0){

cout<<"NASTEPNA "<<tab[lewy+1];
}
else{
	cout<<"NIE MA";
}
}
return 0;
}

