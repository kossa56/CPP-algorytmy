#include <iostream>
#include <cmath>
#include <algorithm>
//Micha³ Kossakowski 2E
using namespace std;

int tab[20];

int main(){
	
int suma=0;

for(int i=0;i<20;i++){
	cin>>tab[i];
}

for(int i=0;i<20;i++){
	suma=tab[i]+suma;

}

cout<<suma<<endl;

cout<<suma/20.0<<endl;

for(int i=0;i<20;i++){
	cout<<tab[i]*tab[i]<<" ";
}

return 0;
}

