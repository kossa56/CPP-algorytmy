#include <iostream>
#include <cmath>
#include <algorithm>
//Micha³ Kossakowski 2E
using namespace std;

int main(){
int n,indeks=0,maks,in2=0,min;
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
	if(tab[i]<tab[in2]){
		in2=i;
	}
}
min=tab[in2];
cout<<min<<" "<< maks;
return 0;
}

