#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int tab1[27];
int tab2[27];
bool anagram(string s1, string s2){

	if(s1.size()!=s2.size()){
	return false;
	return 0;
}
for(int i=0;i<s1.size();i++){
	tab1[s1[i]-64]++;
	tab2[s2[i]-64]++;
}
for(int i=0;i<27;i++){
	if(tab1[i]!=tab2[i]){
	return false;
	}
}
return true;

}
int main(){
string s1="",s2="";
cin>>s1>>s2;
if(anagram(s1,s2)==true){
	cout<<"TAK";
}
else{
	cout<<"NIE";
}

return 0;
}

