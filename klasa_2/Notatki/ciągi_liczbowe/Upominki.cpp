#include <iostream>
#include <cmath>
#include <algorithm>
//Micha³ Kossakowski 2E
using namespace std;

int main(){
int n,k,licznik=0;
cin>>n;
int*tab=new int[n];
for(int i=0;i<n;i++){
	cin>>tab[i];
}
cin>>k;
for(int i=0;i<n-1;i++){
	if(tab[i+1]<=tab[i]-k){
		licznik++;
	}
}
cout<<licznik;

return 0;
}

