#include <iostream>
#include <cmath>
#include <algorithm>
//Micha³ Kossakowski 2E
using namespace std;
string dec2bin(int liczba){

string s="";
while(liczba>0){
char cyfra = '0' + liczba%2;
s=cyfra+s;
liczba=liczba/2;
}
return s;
}

int main(){
int liczba;
cin>>liczba;
cout<<dec2bin(liczba)<<endl;






return 0;
}

