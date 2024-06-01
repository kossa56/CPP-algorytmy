#include <iostream>
#include <cmath>
#include <algorithm>
//Micha³ Kossakowski 2E
using namespace std;
int NWD(int a, int b){
	int r;
	while(b>0){
		r=b;
		b=a%b;
		a=r;
	}
	return a;
}
int main(){
int a,b;
cin>>a>>b;
cout<<NWD(a,b);




return 0;
}

