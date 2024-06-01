#include <iostream>
#include <cmath>
#include <algorithm>
//Micha³ Kossakowski 3E
using namespace std;
int tab[55][55];
int main(){
string s1,s2,napis="";
cin>>s1>>s2;
int dlugosc_s1, dlugosc_s2,x,y;
dlugosc_s1=s1.size();
dlugosc_s2=s2.size();
x=s1.size();
y=s2.size();
for(int w=0;w<dlugosc_s1;w++){
	tab[w][0]=0;
}
for(int k=0;k<dlugosc_s2;k++){
	tab[0][k]=0;
}
for(int w=1;w<=dlugosc_s1;w++){
	for(int k=1;k<=dlugosc_s2;k++){
		if(s1[w-1]==s2[k-1]){
			tab[w][k]=tab[w-1][k-1]+1;
			
		}
		else{
			tab[w][k]=max(tab[w-1][k], tab[w][k-1]);
		}
	}
}
cout<<tab[dlugosc_s1][dlugosc_s2]<<endl;
// wypisywanie tego podciagu
while(dlugosc_s1>0 && dlugosc_s2>0){
	if(s1[dlugosc_s1-1]==s2[dlugosc_s2-1]){
		napis=s1[dlugosc_s1-1]+napis;
		dlugosc_s1--;
		dlugosc_s2--;
		
	}
	else if(tab[dlugosc_s1][dlugosc_s2-1]>tab[dlugosc_s1-1][dlugosc_s2]){
		dlugosc_s2--;
	}
	else{
		dlugosc_s1--;
	}
}
cout<<napis<<endl;
for(int w=0;w<=x;w++){
	for(int k=0;k<=y;k++){
		cout<<tab[w][k]<<' ';
	
	}
		cout<<endl;
}
return 0;
}

