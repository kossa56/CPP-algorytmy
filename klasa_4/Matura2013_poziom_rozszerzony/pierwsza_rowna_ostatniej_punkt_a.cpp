#include <bits/stdc++.h>
//Micha³ Kossakowski 4E
using namespace std;

int main(){
string liczba;
int licznik=0;
while(cin>>liczba){
	if(liczba[0] == liczba[liczba.size()-1]){
		licznik++;
	}
}
cout<<licznik;



return 0;
}

