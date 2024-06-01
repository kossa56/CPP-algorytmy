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
long long nww(long long c, long long d){
	
	return c/euklides(c,d)*d; 
}
int main(){
ios_base::sync_with_stdio(0);
long long a,b,c,d,l,m;
int n;
cin>>n;
while(n--){
	cin>>a>>b;
	cin>>c>>d;
    m=nww(b,d);
    l=a*(nww(b,d)/b)+c*(nww(b,d)/d);
    cout<<l/euklides(l,m);
	cout<<"/";
	cout<<m/euklides(l,m);
	cout<<endl;
}


return 0;
}

