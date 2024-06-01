#include <iostream>
#include <cmath>
#include <algorithm>
//Micha³ Kossakowski 2E
using namespace std;

const int N=10;
int tab[N];

int main(){
	
int suma;
cout<<"tab[10]"<<endl;
for(int i=0;i<N;i++){
	cin>>tab[i];
}

cout<<"tab[0] = "<<tab[0]<<endl;

cout<<"tab[9] = "<<tab[9]<<endl;

cout<<"liczby wypisane wspak ";
for(int i=N-1;i>=0;i--){
	cout<<tab[i]<<"  ";
}

cout<<endl;

for(int i=0;i<N;i++){
	suma=tab[i]+suma;
}

cout<<"suma wynosi "<<suma<<endl;

return 0;
}

