#include <iostream>
#include <cmath>
#include <algorithm>
//Micha³ Kossakowski 3E
using namespace std;
int wyniki[10001], cena[1001], wag[1001];
int main(){
int n,Waga;
cin>>n>>Waga;
for(int i=1;i<=n;i++){
	cin>>cena[i];
}
for(int i=1;i<=n;i++){
	cin>>wag[i];
}
for(int i=1;i<=n;i++){
	for(int j=0;j<=Waga-wag[i];j++){
		wyniki[j+wag[i]]=max(wyniki[j+wag[i]], wyniki[j]+cena[i]);
	}
}
cout<<wyniki[Waga];
return 0;
}


