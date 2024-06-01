#include <iostream>
#include <cmath>
#include <algorithm>
//Micha³ Kossakowski 2E
using namespace std;
long long e(long long a, long long b){
	long long r;
	while(b>0){
		r=a%b;
		a=b;
		b=r;
	}
	return a;
}
long long nww(long long a, long long b){
	return a/e(a,b)*b;
}
int main(){
long long a,b,c;
cin>>a>>b>>c;
if(nww(a,b)<nww(b,c) && nww(a,b)<nww(a,c)){
		cout<<a<<" "<<b;
}
if(nww(a,c)<nww(b,a) && nww(a,c)<nww(b,c)){

		cout<<a<<" "<<c;
}
if(nww(c,b)<nww(b,a) && nww(c,b)<nww(a,c)){
	cout<<c<<" "<<b;
}

return 0;
}

