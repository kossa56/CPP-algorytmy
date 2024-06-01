#include <bits/stdc++.h>
//Micha³ Kossakowski 4E
using namespace std;

int main(){
string s;
long long wynik=0,liczba_zer=0, liczba_jedynek=0;
while(cin>>s){
	for(int i=0;i<s.size(); i++){
		if(s[i]=='1'){
			liczba_jedynek++;
		}
		else{
			liczba_zer++;
		}
	}
	if(liczba_zer>liczba_jedynek){
		wynik++;
	}
	liczba_zer=0; 
	liczba_jedynek=0;
}
cout<<wynik;





return 0;
}


