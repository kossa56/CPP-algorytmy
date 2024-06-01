#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstring>
//Micha³ Kossakowski 2E
using namespace std;

int main(){
int n;
cin>>n;

for(int j=1;j<=n;j++){
long long b=0;

string s;

cin>>s;

for(int i=0;i<s.size();i++){
	
	if(s[i]=='A'){
	
	b=b*16+10;
}
if(s[i]=='B'){
	
	b=b*16+11;
}


if(s[i]=='C'){

	b=b*16+12;
}
if(s[i]=='D'){
	
	b=b*16+13;
}
if(s[i]=='E'){

	b=b*16+14;
}
if(s[i]=='F'){
	
	b=b*16+15;
}
if(s[i]!='A' && s[i]!='B' && s[i]!='C' && s[i]!='D' && s[i]!='E' && s[i]!='F'){
		b=b*8+s[i]-'0';
}



string abc="";
while(b>0){
char cyfra = '0' + b%2;
abc=cyfra+abc;
b=b/2;
}
cout<<abc;
}
cout<<endl;
}


return 0;
}

