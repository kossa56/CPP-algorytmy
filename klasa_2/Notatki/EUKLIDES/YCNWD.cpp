#include <iostream>
#include <cmath>
#include <algorithm>
//Micha� Kossakowski 2E
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
long long a,b;
int n;
cin>>n;
for(int i=1;i<=n;i++){
	cin>>a>>b;
	cout<<euklides(a,b)<<endl;
}




return 0;
}

