#include <iostream>
#include <cmath>
#include <algorithm>
//Micha³ Kossakowski 2E
using namespace std;
long long euk(long long a, long long b){
	long long r;
	while(b>0){
		r=a%b;
		a=b;
		b=r;
	}
	return a;
}
long long nww(long long a, long long b){
	return a/euk(a,b)*b;
}
int main(){
long long a,b;
int n;
cin>>n;
for(int i=1;i<=n;i++){
	cin>>a>>b;
	cout<<nww(a,b)<<" ";
}




return 0;
}

