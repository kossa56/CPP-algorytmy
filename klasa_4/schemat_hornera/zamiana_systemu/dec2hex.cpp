#include <bits/stdc++.h>
//Micha³ Kossakowski 4E
using namespace std;
string dec2hex(int liczba){
	string s="";
	char cyfra;
	while(liczba>0){
		int c=liczba%16;
		if(c<10) cyfra='0'+c;
		else cyfra='A' +(c-10);
		s=cyfra+s;
		liczba=liczba/16;
}
return s;
}
int main(){

int a;
cin>>a;
cout<<dec2hex(a);







return 0;
}


