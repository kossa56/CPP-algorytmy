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
long long  n;
long long a,b;
cin>>n;
for(int i=1;i<=n;i++){
	cin>>a>>b;
	cout<<a/euklides(a,b)*b <<endl;

}




return 0;
}

