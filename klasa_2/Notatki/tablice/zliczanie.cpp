#include <iostream>
#include <cmath>
#include <algorithm>
//Micha³ Kossakowski 2E
using namespace std;
int tab[1000];
int main(){
int n;
cin>>n;
for(int i=0;i<n;i++){
	int liczba;
	cin>>liczba;
	tab[liczba]=tab[liczba]+1;
}
for(int i=0;i<1000;i++){
	if(tab[i]>0){
		cout<<i<<" "<<tab[i]<<" "<<endl;
	}
}



return 0;
}

