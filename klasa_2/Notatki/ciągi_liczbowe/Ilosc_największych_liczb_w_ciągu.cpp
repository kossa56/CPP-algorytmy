#include <iostream>
#include <cmath>
#include <algorithm>
//Micha³ Kossakowski 2E
using namespace std;

int main(){
double liczba,maks=0;
int licznik=0;
cin>>liczba;
while(liczba!=0){
	if(liczba>maks){
		maks=liczba;
		licznik=0;
	}
	if(liczba==maks){
		licznik++;
	}
	cin>>liczba;
}
cout<<maks<<endl;
cout<<licznik;


return 0;
}

