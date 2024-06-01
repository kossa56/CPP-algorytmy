#include <iostream>
#include <cmath>
#include <algorithm>
//Micha³ Kossakowski 2E
using namespace std;

int main(){
const int N = 5;
int tab[N]; //deklaracja 5 liczb calkowitych




for(int i=0;i<N;i++){
	tab[i]=10;
}
//wczytanie
for(int i=0;i<N;i++){
	cin>>tab[i];
}
//wypisanie
for(int i=0;i<N;i++){
	cout<<tab[i];
}

return 0;
}

