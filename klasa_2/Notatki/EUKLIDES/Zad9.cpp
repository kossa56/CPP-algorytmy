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
int a,b,c,d,l,m;
cin>>a>>b;
cin>>c>>d;
l=a*d;
m=b*c;
cout<<l/euklides(l,m)<<"/"<<m/euklides(l,m);




return 0;
}

