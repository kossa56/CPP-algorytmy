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
long long nww(long long a, long long b){
	return a/euklides(a,b)*b;
}
int main(){
long long a,b;
cin>>a>>b;
cout<<"Duze pudelka "<<nww(a,b)/a<<endl;
cout<<"Male pudelka "<<nww(a,b)/b<<endl;




return 0;
}

