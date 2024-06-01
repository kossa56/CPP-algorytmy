#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
int n,licznik=0,maks=0,koniec;
cin>>n;
int*tab = new int [n];
for(int i=0;i<n;i++){
	cin>>tab[i];
}
for(int i=0;i<n;i++){
	if(tab[i]>=tab[i-1]){
		
		licznik++;
		if(licznik>maks){
		maks=licznik;
		koniec=i;
	}
	}
	else{
		licznik=1;
	}
	
}

cout<<"podpunkt a) "<<maks<<endl;
cout<<"podpunkt b) ";
for(int j=koniec-maks+1;j<=koniec;j++){
	cout<<tab[j]<<" ";
}

return 0;
}

