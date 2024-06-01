#include <bits/stdc++.h>
//Micha³ Kossakowski 4E
using namespace std;

int main(){
string s;
long long podzielne_przez_dwa=0, podzielne_przez_osiem=0;
while(cin>>s){
	if(s[s.size()-1]!='1'){
		podzielne_przez_dwa++;
	}
	if( s[s.size()-1]!='1' &&   s[s.size()-2]!='1' &&  s[s.size()-3]!='1'  ){
		podzielne_przez_osiem++;
	}
}
cout<<podzielne_przez_dwa<<endl<<podzielne_przez_osiem;





return 0;
}


