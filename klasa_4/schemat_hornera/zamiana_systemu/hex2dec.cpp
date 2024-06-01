#include <bits/stdc++.h>
//Micha³ Kossakowski 4E
using namespace std;
long long hex2dec(string b){
	long long W=0;
	for(int i=0; i< b.size();i++){
		if(b[i]>='0' && b[i]<='9'){
			W=W*16 + int(b[i]-'0');
			
		}
		else{
			W=W*16+int(b[i]-'A'+10);
		}
	}
	return W;
}
int main(){
string liczba;
cin>>liczba;
cout<<hex2dec(liczba);






return 0;
}


