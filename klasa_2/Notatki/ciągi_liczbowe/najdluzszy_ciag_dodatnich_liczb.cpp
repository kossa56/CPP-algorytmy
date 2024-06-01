#include <iostream>
#include <cmath>
#include <algorithm>
//Micha³ Kossakowski 2E
using namespace std;

int main(){
double liczba;
int dlugosc=0,maks=0;
cin>>liczba;
while(liczba!=0){
	
		if(liczba>0){
			dlugosc++;
				if(dlugosc>maks){
					maks=dlugosc;
				}
		}
		else{
			dlugosc=0;
		}

	cin>>liczba;

}
cout<<maks;


return 0;
}

