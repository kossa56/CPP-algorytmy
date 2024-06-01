#include <iostream>
#include <cmath>
#include <algorithm>
//Micha³ Kossakowski 2E
using namespace std;

const int N=100; // jak deklarujemy globalnie to jest wyzerowane
int tab[N]; // tablica  jest wyzerowana

int main(){
const int N=100;
int tab[N]; // tablica zadeklarowana lokalnie  nie jest wyzerowana 
for(int i=0;i<N;i++){
	cout<<tab[i]<<" ";
}




return 0;
}

