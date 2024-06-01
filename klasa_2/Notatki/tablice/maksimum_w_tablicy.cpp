#include <iostream>
#include <cmath>
#include <algorithm>
//Micha³ Kossakowski 2E
using namespace std;
int tab[20];
int main(){
int indeks=0,maks=0;
for(int i=0;i<20;i++){
	cin>>tab[i];
}
for(int i=0;i<20;i++){
	if(tab[i]>maks){
		maks=tab[i];
		indeks=i;
	}
}
cout<<maks<<endl<<indeks;

return 0;
}

