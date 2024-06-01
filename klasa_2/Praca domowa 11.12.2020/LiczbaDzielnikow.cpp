#include <iostream>
#include <cmath>
#include <algorithm>
//Micha³ Kossakowski 2E
using namespace std;
int LiczbaDzielnikow (int liczba){
	int j=0;
	for(int i=1;i<=sqrt(liczba);i++){
		if(liczba%i==0){
			j++;
		}
	
	}
	return j;
}

int main(){
int liczba;
cin>>liczba;
cout<<LiczbaDzielnikow(liczba)<<endl;






return 0;
}

