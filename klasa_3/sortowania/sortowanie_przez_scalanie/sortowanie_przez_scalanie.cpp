#include <iostream>
#include <cmath>
#include <algorithm>
//Micha³ Kossakowski 3E
using namespace std;
int A[1000005];
int N;
void Merge(int A[],int poczatek, int srodek, int koniec){
	int i=poczatek, j=srodek+1,ib=poczatek ;
	int * B=new int [N];
	while(i<=srodek && j<=koniec){
		if(A[i]<A[j]){
			B[ib]=A[i];
			i++;
		}
		else{
			B[ib]=A[j];
			j++;
		}
		ib++;
	}
	while(i<=srodek){
		B[ib]=A[i];
		i++;
		ib++;
	}
	while(j<=koniec){
		B[ib]=A[j];
		j++;
		ib++;
	}
	for(int i=poczatek; i<=koniec; i++){
		A[i]=B[i];
	}
}
void Mergesort (int A[], int poczatek, int koniec){
	if(poczatek<koniec){
		int srodek=(poczatek+koniec)/2;
		Mergesort(A,poczatek, srodek);
		Mergesort(A, srodek+1, koniec);
		Merge(A, poczatek, srodek, koniec);
	}
}
int main(){
cin>>N;
for(int i=0;i<N;i++){
	cin>>A[i];
}
Mergesort(A,0,N-1);
for(int i=0;i<N;i++){
	cout<<A[i]<<" ";
}


return 0;
}


