#include <iostream>
#include <cmath>
#include <algorithm>
//Micha³ Kossakowski 3E
using namespace std;

int main(){
int n,maks,min,x;
cin>>n;
cin>>x;
min=x;
maks=x;
for(int i=0;i<n-1;i++){
	cin>>x;
	if(x>maks){
		maks=x;
	}
	if(x<min){
		min=x;
	}
}
cout<<maks-min;

return 0;
}
