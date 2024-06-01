#include <iostream>
#include <cmath>
#include <algorithm>
//Micha³ Kossakowski 2E
using namespace std;
int suma_cyfr(int a){
	int suma=0;
	while(a!=0){
		suma=a%10+suma;
		a=a/10;
	}
	return suma;
}
int main(){
int n;
cin>>n;
int*tab=new int[n];
for(int i=0;i<n;i++){
	cin>>tab[i];
}
for(int i=0;i<n-1;i++){
	for(int j=0;j<n-1;j++){
		if(suma_cyfr(tab[j+1])<suma_cyfr(tab[j])){
			swap(tab[j+1],tab[j]);
		}
	
	}
}
for(int i=0;i<n;i++){
cout<<tab[i]<<" ";
}






return 0;
}

