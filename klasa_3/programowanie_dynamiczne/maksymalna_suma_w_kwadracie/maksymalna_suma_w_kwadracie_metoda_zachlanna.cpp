#include <iostream>
#include <cmath>
#include <algorithm>
//Micha³ Kossakowski 3E
using namespace std;
int tab[55][55];
int main(){
int n;
cin>>n;
for(int w=0;w<n;w++){
	for(int k=0;k<n;k++){
		cin>>tab[w][k];
	}
}
int w=0, k=0, suma=tab[0][0];
for(int i=1;i<2*n-1;i++){
	if(tab[w][k+1]>tab[w+1][k]){
		suma=suma+tab[w][k+1];
		k++;
	}
	else{
		suma=suma+tab[w+1][k];
		w++;
	}
}
cout<<suma;
return 0;
}


