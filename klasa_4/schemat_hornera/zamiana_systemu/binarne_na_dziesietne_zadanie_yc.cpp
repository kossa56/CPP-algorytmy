#include <bits/stdc++.h>
//Micha� Kossakowski 4E
using namespace std;
long long bin2dec(string b){
	long long W=0;
	for(int i=0; i<b.size(); i++){
		W=W*2+int(b[i]-'0');
		
	}
	return W;
}
int main(){
string binarna;
while(cin>>binarna){
	cout<<bin2dec(binarna)<<endl;
}






return 0;
}


