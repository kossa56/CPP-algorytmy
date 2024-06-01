#include <bits/stdc++.h>
//Micha³ Kossakowski 4E
using namespace std;
string tab[5000];
int main(){
string s;
int dlugosc_bloku_zer=0, naj_d_b_z=0,j=0;
while(cin>>s){
	for(int i=0; i<s.size()-1; i++){
		if(s[i]=='0' && s[i+1]=='0' ){
			dlugosc_bloku_zer++;
		}
	}
		if(dlugosc_bloku_zer>naj_d_b_z){
			naj_d_b_z=dlugosc_bloku_zer;
			tab[j]=s;
		}
}






return 0;
}


