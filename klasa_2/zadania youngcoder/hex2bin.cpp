#include <iostream>
#include <cmath>
#include <algorithm>
//Micha³ Kossakowski 2E
using namespace std;

int main(){
int n,a,dz;
string s;
cin>>n;
for(int i=1; i<=n; i++){
	cin>>s;
	for(int j=0;j<=s.size();j++){
		if(s[j]=="A"){
			a=10;
			dz=(int) s[j]*pow(16,j);
		}
		if(s[j]=="B"){
			a=11;
		}
	}
}






return 0;
}

