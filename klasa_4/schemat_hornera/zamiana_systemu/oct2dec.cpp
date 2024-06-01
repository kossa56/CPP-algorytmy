#include <bits/stdc++.h>
//Micha³ Kossakowski 4E
using namespace std;
long long oct2dec(string s){
	long long W=0;
	for(int i=0; i<s.size(); i++){
		W=W*8+int(s[i]-'0');
		
	}
	return W;
}

int main(){
string liczba;
cin>>liczba;
cout<<oct2dec(liczba);








return 0;
}


