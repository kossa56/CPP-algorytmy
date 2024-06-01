#include <iostream>
#include <cmath>
#include <algorithm>
//Micha³ Kossakowski 2E
using namespace std;
int tab[20];
int main(){
int szuk,indeks=-1;


for(int i=0;i<20;i++){
	cin>>tab[i];
}
cin>>szuk;
for(int i=0;i<20;i++){
	if(tab[i]==szuk){
		indeks=i;
		break;
	}
}
if(indeks==-1){
	cout<<"NIE MA";
}
else{
	cout<<indeks;
}
return 0;
}

