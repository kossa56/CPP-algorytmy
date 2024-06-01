#include <iostream>
#include <cmath>
#include <algorithm>
//Micha³ Kossakowski 2E
using namespace std;

int main(){
// deklaracja tabllicy typ nazwa ilosc
int tab[100]; //deklaracja 100 liczb calkowitych 
//tab[0], tab[1], tab[2], ..... tab[99]
cin>>tab[0];
cout<<tab[0]<<endl;
tab[1]=123;
//przypisanie wszystkim elementom tablicy np. 10
for(int i=0;i<100;i++){
	tab[i]=10;
}
//wczytanie
for(int i=0;i<100;i++){
	cin>>tab[i];
}
//wypisanie
for(int i=0;i<100;i++){
	cout<<tab[i];
}

return 0;
}

