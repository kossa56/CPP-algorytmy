#include <iostream>
#include <cmath>
#include <algorithm>
//Micha³ Kossakowski 2E
using namespace std;
int Maksimum(int a, int b){
	if(a>=b){
	return a;
	}
	else{
		return b;
	}
}
int main(){
int n,a,b;
cin>>n;
for(int i=1;i<=n;i++){
	cin>>a>>b;
	cout<<Maksimum(a,b)<<endl;
}






return 0;
}

