#include <iostream>
#include <cmath>
#include <algorithm>
//Micha³ Kossakowski 2E
using namespace std;
string dec_to_bin(long long n){
	string s;
	while(n>0){
		char cyfra='0'+n%2;
		s=cyfra+s;
		n=n/2;
	}
	return s;
}
int main(){
long long n;
cin>>n;
cout<<dec_to_bin(n);






return 0;
}

