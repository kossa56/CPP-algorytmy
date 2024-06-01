#include <iostream>
#include <cmath>
#include <algorithm>
//Micha³ Kossakowski 2E
using namespace std;
long long Euklides(long long a, long long b){
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
int n;
cin>>n;
for(int i=1;i<=n;i++){
	cin>>a>>b;
	if(Euklides(a,b)==1){
		cout<<"TAK"<<endl;
	}
	else{
		cout<<"NIE"<<endl;
	}
}




return 0;
}

