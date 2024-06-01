#include <iostream>
#include <cmath>
#include <algorithm>
//Micha³ Kossakowski 2E
using namespace std;

int main(){
string s,d;
int i=0, j;
bool p=true;
cin>>s;
d=s;
j=s.size()-1;
while(p && i<j){
	if(s[i]==s[j]){
	
	i++;
	j--;
}
else{
	p=false;
}
}
if(p){
	cout<<"tak";
}
else{
	cout<<"nie";
}





return 0;
}

