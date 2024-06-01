#include <iostream>
#include <cmath>
#include <algorithm>
//Micha³ Kossakowski 3E
using namespace std;

int main(){
int n,s=0;
cin>>n;
int*tab=new int [n];
int*tab2=new int [n];

for(int i=0;i<n;i++){
	cin>>tab[i];

}
sort(tab, tab+n);
int g=0;
for(int k=0;k<n;k++){
	while( tab[g]==tab[g+1]){
		
			tab2[k]++;
		g++;
	}	
	
}
for(int j=0;j<n;j++){
	if(tab2[j]%2!=0){
		s++;
	}
}
if(s>1){
	cout<<"NIE";
}
else{
	cout<<"TAK";
}

return 0;
}

