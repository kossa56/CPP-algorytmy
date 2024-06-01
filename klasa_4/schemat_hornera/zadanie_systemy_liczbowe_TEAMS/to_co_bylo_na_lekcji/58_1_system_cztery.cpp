#include <bits/stdc++.h>
//Micha³ Kossakowski 4E
using namespace std;
long long cztery2dec(string liczba){
	int znak=1;
	if(liczba[0]=='-'){
		znak=-1;
		liczba[0]='0';
	}
	long long w=0;
	for(int i=0; i<liczba.size();i++){
		w=w*4+int(liczba[i]-'0');
	}
	return w*znak;
}
string dec2bin ( long long liczba ){
	string wyn;


	while(liczba>0){
		wyn =char(liczba%2 + '0')+wyn;
		liczba=liczba/2; 
	}
	return wyn;
}
int main(){
string godz,temp,mintemp;
cin>>godz>>temp;
long long minim = cztery2dec(temp);


for(int i=1; i<1095; i++){
cin>>godz>>temp;
long long akt=cztery2dec(temp);
if(akt < minim){
	minim=akt;
}	
}
cout<<dec2bin(-minim);

return 0;
}


