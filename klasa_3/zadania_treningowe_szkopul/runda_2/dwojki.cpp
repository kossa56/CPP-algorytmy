#include <iostream>
#include <cmath>
#include <algorithm>
//Micha³ Kossakowski 3E
using namespace std;

int main(){
long long x,potega=1;
int licznik=0;
cin>>x;
if(x<1){
	cout<<0;
	return 0;
}
while(potega<=x){
	potega=potega*2;

	licznik++;
}
cout<<licznik;



return 0;
}

