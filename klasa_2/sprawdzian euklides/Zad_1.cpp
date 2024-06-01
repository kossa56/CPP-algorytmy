#include <iostream>
#include <cmath>
#include <algorithm>
//Micha³ Kossakowski 2E
using namespace std;
long long euklides(long long a, long long b){
	long long r;
	while(b>0){
		r=a%b;
		a=b;
		b=r;
	}
	return a;
}
int main(){
long long a=0,b;
for(int i=0;i<4;i++){
	cin>>b;
	a=euklides(a,b);
}
cout<<a;



return 0;
}

