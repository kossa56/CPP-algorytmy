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
//uzupe³nienie wiersza pierwszego tab[0][k+n]
for(int k=0;k<n;k++){
	tab[0][k]=tab[0][k]+tab[0][k-1];
}
//uzupe³nienie kolumny pierwszej tab[w][0]
for(int w=0;w<n;w++){
	tab[w][0]=tab[w][0]+tab[w-1][0];
}
//wype³nianie reszty sumami
for(int w=1;w<n;w++){
	for(int k=1;k<n;k++){
		tab[w][k]+=max(tab[w-1][k], tab[w][k-1]);
	}
}
cout<<tab[n-1][n-1];
return 0;
}


