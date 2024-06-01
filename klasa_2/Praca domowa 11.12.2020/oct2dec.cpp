#include <iostream>
#include <cmath>
#include <algorithm>
//Micha³ Kossakowski 2E
using namespace std;
int oct2dec(string liczba){
	int b=0;
for(int i=0;i<liczba.size();i++){
	b=b*8+liczba[i]-'0';
}
return b;
}

int main(){
string liczba;
cin>>liczba;
cout<<oct2dec(liczba)<<endl;






return 0;
}

