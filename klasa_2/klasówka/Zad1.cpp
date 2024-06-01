#include <iostream>
#include <cmath>
#include <algorithm>
//Micha³ Kossakowski 2E
using namespace std;
int tab[100005];
int main(){
int n,s;

cin>>n;
for(int i=0;i<n;i++){
	cin>>tab[n];
}
cin>>s;
for(int i=0;i<n;i++){
	if(tab[i]==s){
		cout<<i<<" ";
	}
}



return 0;
}

