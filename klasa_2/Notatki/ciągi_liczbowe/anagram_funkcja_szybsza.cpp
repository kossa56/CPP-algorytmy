#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
bool anagram(string s1, string s2){
	sort(s1.begin(),s1.end());
	sort(s2.begin(),s2.end());
	if(s1==s2){
		return true;
	}
	else{
		return false;
	}
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

