#include <iostream>
#include <cmath>
#include <algorithm>
//Micha³ Kossakowski 3E
using namespace std;

int main(){
int n,p=0,prz=0;
cin>>n;
for(int i=0;i<n;i++){
	long long liczba1,liczba2;

	cin>>liczba1>>liczba2;	
	while(liczba1>0 || liczba2>0){
		if(liczba1%10 + liczba2%10+prz>9){
			prz=1;
		
			p++;
		}
		else{
			prz=0;
		}
	
		
		
		liczba1=liczba1/10;
		liczba2=liczba2/10;
	
	}
	
	cout<<p<<endl;
	p=0;
	prz=0;
}




return 0;
}
