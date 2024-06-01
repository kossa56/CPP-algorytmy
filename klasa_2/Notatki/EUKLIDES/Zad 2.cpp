#include <iostream>
#include <cmath>
#include <algorithm>
//Micha³ Kossakowski 2E
using namespace std;
long long euklides(long long a, long long b){
	long long  r;
	while(b>0){
		r=a%b;
		a=b;
		b=r;
	}
	return a;
}
int main(){
int n;
long long a,s;
cin>>n;
cin>>s;
for(int i=1;i<n;i++){
	cin>>a;
	s=euklides(a,s);
	
}
cout<<s;



return 0;
}

