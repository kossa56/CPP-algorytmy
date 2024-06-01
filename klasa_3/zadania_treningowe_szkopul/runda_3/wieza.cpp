#include <iostream>
#include <cmath>
#include <algorithm>
//Micha³ Kossakowski 3E
using namespace std;

int main(){
int n,liczba=0;
cin>>n;
for(int i=0;i<n;i++){
	if(liczba==n*n){
		return 0;
	}
	for(int j=0;j<n;j++){
		if(i%2==0){
			cout<<liczba+1<<" ";
			liczba++;
		
		}
		else{
			cout<<(liczba+n)-j<<" ";
			
	
	
		}
	}
	if(i%2!=0){
		liczba=liczba+n;
	}
	cout<<endl;
}




return 0;
}

