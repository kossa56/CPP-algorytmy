#include <bits/stdc++.h>
//Micha³ Kossakowski 4E
using namespace std;

int main(){
string s;
int licznik=0;
while(cin>>s){
	if(s[0]==s[s.size()-1]){
		licznik++;
	}
}
cout<<licznik;



return 0;
}

