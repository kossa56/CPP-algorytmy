#include <iostream>
#include <cmath>
#include <algorithm>
//Micha³ Kossakowski 2E
using namespace std;
bool palindrom(string s){
	for(int i=0;i<s.size()/2;i++){
		if( s[i]  !=  s[s.size()-1-i] ) {
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

