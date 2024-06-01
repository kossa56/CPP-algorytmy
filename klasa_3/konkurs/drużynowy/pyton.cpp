#include <bits/stdc++.h>
//Micha³ Kossakowski 3E
using namespace std;

int main(){
long long liczba;
int sw=0,ilosc=0;
cin>>liczba;
if(liczba == 0){
	cout<<"NIE";
}
string s;
while(cin>>s){
	ilosc++;
	if(s[0]=='*'){
		sw++;
	}
	if(sw>=2){
		cout<<"NIE";
		return 0;
	}
	if(s[0]==','){
	continue;
	}
	
}
if(ilosc==1 && sw>0){
	cout<<"NIE";
	return 0;
}
if(ilosc==liczba){
	cout<<"TAK";
	return 0;
}
if(liczba>ilosc && sw>0){
	cout<<"TAK";
	return 0;
}
if(liczba==ilosc-1 && sw>0){
	cout<<"TAK";
	return 0;
}
if(ilosc>liczba){
	cout<<"NIE";
	return 0;
}


return 0;
}

