#include <iostream>
#include <cmath>
#include <algorithm>
//Micha³ Kossakowski 2E
using namespace std;

int main(){
int j,a=1;
string s;
cin>>s;
j=s.size()-1;
for(int i=0;i<j;i++){
	if(s[i]==s[j]){
		
		j--;
	}
	else{
		a=0;
		break;
	}
}
if(a==1){
	cout<<"TAK";
}
else{
	cout<<"NIE";
}




return 0;
}

