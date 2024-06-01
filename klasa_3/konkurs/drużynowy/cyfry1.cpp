#include <bits/stdc++.h>
//Micha³ Kossakowski 3E
using namespace std;
int tab[5];
int main(){
int n,t;
cin>>n;
t=n;
for(int i=0;n>0;i++){
	tab[i]=n%10;
	if( tab[i]!=0 && t%tab[i]==0 ){
		cout<<"TAK";
		return 0;
	}
	n=n/10;
}
cout<<"NIE";




return 0;
}

