#include <iostream>
#include <cmath>
#include <algorithm>
//Micha³ Kossakowski 2E
using namespace std;

int main(){
int n,a=0;
cin>>n;
int*tab=new int[n];
for(int i=0;i<n;i++){
	cin>>tab[i];
}
for(int i=0;i<n-1;i++){
	for(int j=0;j<n-1;j++){
		if(tab[j+1]<tab[j]){
			swap(tab[j+1],tab[j]);
			a++;
		}
	
	}
		if(a==0){
			break;
		}
}
for(int i=0;i<n;i++){
cout<<tab[i]<<" ";
}






return 0;
}

