#include <iostream>
#include <cmath>
#include <algorithm>
//Micha³ Kossakowski 3E
using namespace std;


void quicksort(int A[], int p, int k){   //p jak pocz¹tek k jak koniec
	int i=p;
	int j=k;
	int el_sr=A[(p+k)/2]; // ek_sr to element srodkowy
	while(i<=j){
		while(A[i]<el_sr){
			i++;
		}
		while(A[j]>el_sr){
			j--;
		}
		if(i<=j){
			swap(A[i],A[j]);
			i++;
			j--;
		}
	}
	if(p<j){
			quicksort(A,p,j);
			
	}
	if(i<k){
			quicksort(A,i,k);
	}	
}
int main(){
int N;
cin>>N;
int*A=new int[N];
for(int i=0;i<N;i++){
	cin>>A[i];
}
quicksort(A,0,N-1);
for(int i=0;i<N;i++){
	cout<<A[i]<<" ";
}
return 0;
}


