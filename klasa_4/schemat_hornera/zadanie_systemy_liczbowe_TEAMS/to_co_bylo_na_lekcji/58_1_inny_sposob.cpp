#include <bits/stdc++.h>
//Micha³ Kossakowski 4E
using namespace std;
long long bin2dec(string liczba){
	int znak=1;
	if(liczba[0]=='-'){
		znak=-1;
		liczba[0]='0';
	}
	long long w=0;
	for(int i=0; i<liczba.size();i++){
		w=w*2+int(liczba[i]-'0');
	}
	return w*znak;
}
int main(){
string godz,temp,mintemp;
cin>>godz>>temp;
long long minim = bin2dec(temp);
mintemp=temp;

for(int i=1; i<1095; i++){
cin>>godz>>temp;
long long akt=bin2dec(temp);
if(akt < minim){
	minim=akt;
	mintemp=temp;
}	
}
cout<<minim<<" "<<mintemp;
return 0;
}


