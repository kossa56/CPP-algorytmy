#include <bits/stdc++.h>
//Micha³ Kossakowski 4E
using namespace std;
long long oct2dec(string b){
	long long W=0;
	for(int i=0; i<b.size(); i++){
		W=W*8+int(b[i]-'0');
		
	}
	return W;
}

int tab[1000000];
int main(){

string liczba;
int licznik=0,sw=0,zamiana;
while(cin>>liczba){
	zamiana=oct2dec(liczba);
	for(int i=0; zamiana>0; i++){
		tab[i]=zamiana%10;
		zamiana=zamiana/10;
		sw=i;
	}
	if(tab[0]==tab[sw]){
		licznik++;
	}
}
cout<<licznik;




return 0;
}

