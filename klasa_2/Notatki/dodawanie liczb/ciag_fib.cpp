#include <iostream>
#include <cmath>
#include <algorithm>
//Micha³ Kossakowski 2E
using namespace std;

int main(){
ios_base::sync_with_stdio(0);
int n;
cin>>n;
long long f1=1,f2=1,f;
if(n==0){
cout<<"0"<<endl;
}
if(n<3){
	cout<<"1"<<endl;
}
for(int i=3;i<=n;i++){
	f=f1+f2;
	f1=f2;
	f2=f;
}
cout<<f<<endl;


return 0;
}

