#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int tab1[27];
int tab2[27];
int main(){
string s1="",s2="";

cin>>s1>>s2;
if(s1.size()!=s2.size()){
	cout<<"NIE";
	return 0;
}
for(int i=0;i<s1.size();i++){
	tab1[s1[i]-64]++;
	tab2[s2[i]-64]++;
}
for(int i=0;i<27;i++){
	if(tab1[i]!=tab2[i]){
		cout<<"NIE";
		return 0;
	}
}


cout<<"TAK";

return 0;
}

