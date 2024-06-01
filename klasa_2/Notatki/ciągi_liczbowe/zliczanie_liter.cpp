#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int tab[27];
int main(){
string s="";
cin>>s;
for(int i=0;i<s.size();i++){
	tab[s[i]-64]++;
}
for(int i=0;i<27;i++){
	if(tab[i]>0){
		cout<<char(i+64)<<" "<<tab[i]<<endl;
	}
}
return 0;
}

