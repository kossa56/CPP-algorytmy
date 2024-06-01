#include <iostream>
#include <cmath>
#include <algorithm>
//Micha³ Kossakowski 2E
using namespace std;

int main(){
int n;
cin>>n;
int*tab=new int[n];
for(int i=0;i<n;i++){
	cin>>tab[i];
}
for(int j=0;j<=n-2;j++){
	for(int i=0;i<=n-2;i++){
		if(tab[i]>tab[i+1]){
			swap(tab[i],tab[i+1]);
		}
	}
}
cout<<tab[n-1]-tab[0]<<endl;
int suma=0;
for(int i=1;i<n;i++){
	if(tab[i]>tab[0]){
		suma=tab[i]-tab[0]+suma;
	}
}
cout<<suma;
return 0;
}

