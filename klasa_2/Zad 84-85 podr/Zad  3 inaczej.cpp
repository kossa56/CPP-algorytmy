#include <iostream>
#include <cmath>
#include <algorithm>
//Micha³ Kossakowski 2E
using namespace std;
int liczba_czynnikow(long long n){
	int l=0;
	for(int i=2;i<n+1;i++){
		if(n%i==0){
			l++;
			n=n/i;
			i--;
		}
	}
	return l;
}
int main(){
long long n;
cin>>n;
cout<<liczba_czynnikow(n);




return 0;
}

