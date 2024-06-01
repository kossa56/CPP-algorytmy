#include <iostream>
#include <cmath>
#include <algorithm>
//Micha³ Kossakowski 2E
using namespace std;

int main(){
string liczba;
int licznik_0=0,licznik_1=0,licznik=0;
while(cin>>liczba){
	for(int i=0;i<liczba.size();i++){
		if(liczba[i]=='0'){
			licznik_0++;
		}
		if(liczba[i]=='1'){
			licznik_1++;
		}
	}
	if(licznik_1==licznik_0){
		licznik++;
	}
	licznik_1=0;
	licznik_0=0;
}
cout<<licznik;




return 0;
}

