#include <iostream>
#include <cmath>
#include <algorithm>
//Micha³ Kossakowski 2E
using namespace std;
void cz_na_10(string s){
	int liczba=0;
	for(int i=0;i<s.size();i++){
		liczba=liczba*4+s[i]-'0';
	}
	cout<<liczba;
}
int main(){
string s;
cin>>s;
cz_na_10(s);






return 0;
}

