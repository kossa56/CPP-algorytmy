#include <bits/stdc++.h>
//Micha³ Kossakowski 4E
using namespace std;
string tab[1000005];
int main(){
string liczba;
int sw=0, licznik=0, t=0;
while(cin>>liczba){
	for(int i=0; i<liczba.size()-1; i++){
		if ( int(liczba[i]-'0') <= int(liczba[i+1]-'0') ) {
			sw=1;
		}
		else{
			sw=0;
			break;
		}
	}
	if(sw==1){
		licznik++;
		tab[t]=liczba;
		t=t+1;
	}
}
cout<<licznik<<endl;
sort(tab, tab+t);
cout<<tab[0]<<endl;
cout<<tab[t-1];



return 0;
}

