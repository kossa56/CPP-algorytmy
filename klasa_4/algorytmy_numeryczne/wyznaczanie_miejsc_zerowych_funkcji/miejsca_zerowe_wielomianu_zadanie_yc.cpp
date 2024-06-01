#include <bits/stdc++.h>
//Micha³ Kossakowski 4E
using namespace std;
double tab[5];
double f(double x){
	return tab[0]*x*x*x+tab[1]*x*x+tab[2]*x+tab[3];
}
int main(){

	ios_base::sync_with_stdio(0);
	double eps=0.001, s, a, b;
	for(int i=0; i<=3; i++){
	cin>>tab[i];
	}
	cin>>a>>b;
	while(abs(b-a)>eps){
		s=(a+b)/2.0;
		if(f(s)==0){
			cout.precision(2);
			cout<<fixed<<s;
			return 0;	
		}
		if(f(a)*f(s)<0)b=s;
		else a=s;
	}
	cout.precision(2);
	cout<<fixed<<s;





return 0;
}


