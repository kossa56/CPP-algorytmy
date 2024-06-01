#include <iostream>
#include <cmath>
#include <algorithm>
//Micha� Kossakowski 3E
using namespace std;

int main(){
int r,m,nominal;
const int niesk=10000000;
cin>>r;
int*wyniki=new int[r+1];
for(int i=1;i<=r;i++){
	wyniki[i]=niesk;
}
wyniki[0]=0;
cin>>m;
for(int i=1;i<=m;i++){
	cin>>nominal;
	for(int j=0;j<=r-nominal;j++){
	
	if(wyniki[j]!=niesk){
		wyniki[j+nominal]=min(wyniki[j]+1, wyniki[j+nominal]);
		
		}
	}
}
cout<<wyniki[r];
return 0;
}


