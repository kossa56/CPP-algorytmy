#include <iostream>
#include <cmath>
#include <algorithm>
//Micha³ Kossakowski 3E
using namespace std;
int nominaly[4]={10,6,5,1};
int main(){
int r;
const int niesk=999999999;
cin>>r;
int*tab= new int[r+1];
for(int i=0;i<r+1;i++){
	tab[i]=niesk;
}
tab[0]=0;
for(int i=0;i<4;i++){
	for(int j=0;j<=r-nominaly[i];j++){
		if(tab[j]!=niesk){
			tab[j+nominaly[i]]=min(tab[j+nominaly[i]], tab[j]+1);
		}
	}
}
cout<<tab[r];
return 0;
}


