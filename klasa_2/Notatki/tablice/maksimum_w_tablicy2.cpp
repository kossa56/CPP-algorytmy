#include <iostream>
#include <cmath>
#include <algorithm>
//Micha³ Kossakowski 2E
using namespace std;
int tab[20];
int main(){
int indeks=0;
for(int i=0;i<20;i++){
	cin>>tab[i];
}
for(int i=0;i<20;i++){
	if(tab[i]>tab[indeks]){
		indeks=i;
	}
}
cout<<tab[indeks]<<endl<<indeks;

return 0;
}

