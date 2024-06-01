#include <iostream>
#include <cmath>
#include <algorithm>
//Micha³ Kossakowski 3E
using namespace std;

int main(){
int maks_waga,n,waga=0,wynik=0;
cin>>maks_waga;
cin>>n;
int*cena=new int [n];
int*wagi=new int [n];
double*stosunek=new double [n];
for(int i=0;i<n;i++){
	cin>>cena[i];
}
for(int i=0;i<n;i++){
	cin>>wagi[i];
}
for(int i=0;i<n;i++){
	stosunek[i]=cena[i]/wagi[i];
}
for(int j=0;j<=n-2;j++){
	for(int i=0;i<=n-2;i++){
		if(stosunek[i]<stosunek[i+1]){
			swap(stosunek[i],stosunek[i+1]);
			swap(wagi[i],wagi[i+1]);
			swap(cena[i],cena[i+1]);
		}
	}
}
for(int i=0;maks_waga>0;i++){
	wynik=wynik+cena[i]*(maks_waga/wagi[i]);
	maks_waga=maks_waga%wagi[i];
}
cout<<wynik;
return 0;
}

