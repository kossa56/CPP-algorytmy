#include <iostream>
#include <cmath>
#include <algorithm>
//Micha³ Kossakowski 3E
using namespace std;
int tab[100005];
int main(){
int n,s=0,x;
cin>>n;

for(int i=0;i<n;i++){
	cin>>x;
	tab[x]++;

}
for(int i=0;i<=100005;i++){
	if(tab[i]%2!=0){
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

