#include <iostream>
#include <cmath>
#include <algorithm>
//Micha³ Kossakowski 3E
using namespace std;

int main(){
int indeks=0,maks,min,indeks2=0,n;
cin>>n;
int*tab=new int[n];
for(int i=0;i<n;i++){
	cin>>tab[i];
}
for(int i=0;i<n;i++){
	if(tab[i]>tab[indeks]){
		indeks=i;
	}
}
maks=tab[indeks];
for(int i=0;i<n;i++){
	if(tab[i]<tab[indeks2]){
		indeks2=i;
	}
}
min=tab[indeks2];
cout<<maks-min;

return 0;
}
