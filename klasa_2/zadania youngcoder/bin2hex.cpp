#include <iostream>
#include <cmath>
#include <algorithm>
//Micha³ Kossakowski 2E
using namespace std;

int main(){
int cyfra,n;
string b;
cin>>n;

long long liczba =0;
for(int i=1;i<=n;i++){
cin>>b;
if(b=="0"){
	cout<<"0";
}
string s;
for(int i=0;i<b.size();i++){
	int cyfra =b[i]-'0';
	liczba=liczba*2+cyfra;
}
while(liczba>0)
{
cyfra = liczba % 16;
if ( cyfra<10 ) s= char('0' + cyfra) + s;
else s = char('A' - 10 + cyfra) + s;
liczba=liczba/16;
}
cout<<s<<endl;
}






return 0;
}

