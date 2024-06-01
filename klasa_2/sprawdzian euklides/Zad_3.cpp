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
long long a,b;
cin>>a>>b;
if(euklides(a,b)>1){
	cout<<"NIE";
}
else{
	cout<<"TAK";
}




return 0;
}

