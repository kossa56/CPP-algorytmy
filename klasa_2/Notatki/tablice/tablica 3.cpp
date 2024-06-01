#include <iostream>
#include <cmath>
#include <algorithm>
//Micha³ Kossakowski 2E
using namespace std;
const int N = 10000; // sterta deklaracja globalna duze tablice statyczne deklarujemy globalnie
int tab[N]; //deklaracja 5 liczb calkowitych
int main(){


for(int i=0;i<N;i++){
	tab[i]=10;
}

//wypisanie
for(int i=0;i<N;i++){
	cout<<tab[i]<<"  ";
}

return 0;
}

