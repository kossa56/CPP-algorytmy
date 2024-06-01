#include <iostream>
#include <cmath>
#include <algorithm>
//Micha³ Kossakowski 3E
using namespace std;

int main(){
int n,szuk,s=0;
cin>>n;
int*tab=new int[n];
for(int i=0;i<n;i++){
	cin>>tab[i];
}
cin>>szuk;
for(int i=0;i<n;i++){
	if(szuk==tab[i]){
		s++;
	}
}
cout<<s<<" ";
for(int i=0;i<n;i++){
	if(szuk==tab[i]){
		cout<<i+1<<" ";
	}
}

return 0;
}

