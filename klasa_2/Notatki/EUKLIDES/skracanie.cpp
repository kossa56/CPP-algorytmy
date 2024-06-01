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
int a,b,n;
cin>>n;
while(n--){

cin>>a;
cin>>b;
cout<<a/euklides(a,b);
cout<<"/";
cout<<b/euklides(a,b);
cout<<endl;
}



return 0;
}

