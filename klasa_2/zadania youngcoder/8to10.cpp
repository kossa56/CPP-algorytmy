#include <iostream>
#include <cmath>
#include <algorithm>
//Micha³ Kossakowski 2E
using namespace std;

int main(){
int n;


cin>>n;
for(int j=1;j<=n;j++){
	int b=0;
string s;
cin>>s;
for(int i=0;i<s.size();i++){
	b=b*8+s[i]-'0';
}
cout<<b<<endl;
}




return 0;
}

