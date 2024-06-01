#include <bits/stdc++.h>
using namespace std;
double f(double x){
	return x*x-4;
}
int main(){
	ios_base::sync_with_stdio(0);
	double eps, s, a, b;
	cin>>a>>b;
	cin>>eps;
	while(b-a>eps){
		s=(a+b)/2;
		if(f(s)==0){
			cout<<s;
			return 0;	
		}
		if(f(a)*f(s)<0)b=s;
		else a=s;
	}
	cout.precision(2);
	cout<<fixed<<s;
	return 0;
}
