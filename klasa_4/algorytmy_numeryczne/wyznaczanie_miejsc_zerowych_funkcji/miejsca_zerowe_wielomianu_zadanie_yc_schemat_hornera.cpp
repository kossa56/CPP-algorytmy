#include <bits/stdc++.h>
//Micha³ Kossakowski 4E

using namespace std;

double tab[100000];

double f(double x){
	double W=0;
	for(int i=0; i<=3; i++){
	W=W*x+tab[i];
		}
	return W;
	}
	
int main(){
	ios_base::sync_with_stdio(0);
	double eps=0.01, s, a, b;
	
	for(int i=0; i<=3; i++){
	cin>>tab[i];
	}
	cin>>a>>b;

	while(abs(b-a)>eps){
		s=(a+b)/2.0;
		if(f(s)==0){
			cout.precision(2);
			
			cout<<fixed<<s*1.0;
			return 0;	
		}
		if(f(a)*f(s)<0)b=s;
		else a=s;
	}
	
	cout.precision(2);
	cout<<fixed<<s*1.0;

return 0;
}


