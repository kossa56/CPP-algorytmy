#include <bits/stdc++.h>
//Micha³ Kossakowski 4E
using namespace std;
long long X2dec(string s, int podstawa){
	long long W=0;
	for(int i=0; i<s.size(); i++){
		W=W*podstawa +int(s[i]-'0');
		
	}
	return W;
}

int main(){
string liczba;
int n;
cin>>n;
cin>>liczba;
cout<<X2dec(liczba,n);








return 0;
}


