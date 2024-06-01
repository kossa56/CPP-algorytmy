#include <bits/stdc++.h>
//Micha³ Kossakowski 4E
using namespace std;
string dec2bin(long long liczba){
	string wyn;
	while(liczba>0){
		wyn =char(liczba%2 + '0')+wyn;
		liczba=liczba/2; 
	}
	return wyn;
}
int main(){

long long a;
cin>>a;
cout<<dec2bin(a);





return 0;
}


