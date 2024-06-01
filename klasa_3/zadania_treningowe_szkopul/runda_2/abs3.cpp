#include <iostream>
#include <cmath>
#include <algorithm>
//Micha³ Kossakowski 3E
using namespace std;

int main(){
ios_base::sync_with_stdio(0);
int n;
cin>>n;
int*tab=new int[n];
for(int i=0;i<n;i++){
	cin>>tab[i];
}
sort(tab, tab+n);
cout<<tab[n-1]-tab[0];



return 0;
}
