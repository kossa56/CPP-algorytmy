#include <iostream>
#include <cmath>
#include <algorithm>
//Micha³ Kossakowski 2E
using namespace std;
int tab[100005];
int main(){
int  n,m,j;
cin>>n>>m;
j=m*n;
for(int i=0; i<j; i++){
	cin>>tab[i];
	
}
sort(tab, tab+j);
cout<<tab[0]<<" "<<tab[j-1];





return 0;
}

