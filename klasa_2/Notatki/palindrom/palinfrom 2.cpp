#include <iostream>
#include <cmath>
#include <algorithm>
//Micha³ Kossakowski 2E
using namespace std;
bool palindrom(string s){
	for(int lewy=0,prawy=s.size()-1;lewy<s.size()/2;lewy++,prawy--){
		if(s[lewy]!=s[prawy]){
			return false;
		}
	}
	return true;
}
int main(){
string s;
cin>>s;
if(palindrom(s)==true){
	cout<<"TAK";
}
else{
	cout<<"NIE";
}





return 0;
}

