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
long long a,b,c,d,l,m;
int n;
cin>>n;
while(n--){
	cin>>a>>b;
	cin>>c>>d;
	l=a*d+b*c;
	m=b*d;
	cout<<l/euklides(l,m);
	cout<<"/";
	cout<<m/euklides(l,m);
	cout<<endl;
}


return 0;
}

