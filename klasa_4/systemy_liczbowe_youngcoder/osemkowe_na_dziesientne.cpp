#include <bits/stdc++.h>
//Micha³ Kossakowski 4E
using namespace std;
long long oct2dec(string b){
	long long W=0;
	for(int i=0; i<b.size(); i++){
		W=W*8+int(b[i]-'0');
		
	}
	return W;
}
int main(){
	
string oct;
int n;
cin>>n;
for(int i=0;i<n;i++){
	cin>>oct;
	cout<<oct2dec(oct)<<endl;
}





return 0;
}

