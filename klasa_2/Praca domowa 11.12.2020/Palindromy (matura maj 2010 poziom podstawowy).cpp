#include <iostream>
#include <cmath>
#include <algorithm>
//Micha³ Kossakowski 2E
using namespace std;
bool palindrom(string s){
	for(int i=0,j=s.size()-1;i<s.size()/2;i++,j--){
		if(toupper(s[i]) != toupper(s[j])){
			return false;
		}
	}
	return true;
}

int main(){
string s;
while(cin>>s){
	if(palindrom(s)==true){
	cout<<s<<endl;
}

}






return 0;
}

