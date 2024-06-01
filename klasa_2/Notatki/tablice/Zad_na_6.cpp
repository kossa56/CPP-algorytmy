#include <iostream>
#include <cmath>
#include <algorithm>
//Micha³ Kossakowski 2E
using namespace std;

int main(){
ios_base::sync_with_stdio(0);
int szuk1,n,pocz=0,koniec=0,szuk2;
cin>>n;
int*tab=new int[n];

for(int i=0; i<n;i++){
	cin>>tab[i];
}
cout<<"podaj poczatek i koniec przedzialu "<<endl;
cin>>szuk1;
int s=0,lewy=0,prawy=n-1;
while(lewy<prawy){
	s=(lewy+prawy)/2;
	if(szuk1>tab[s]){
		lewy=s+1;
	}
	else{
		prawy=s;
	}
}
if(tab[lewy]==szuk1){
	pocz=lewy;
}
	else{
		cout<<"cos poszlo nie tak wpisz poprawne dane ";
		return 0;
}
cin>>szuk2;
int s2=0,lewy2=0,prawy2=n-1;
while(lewy2<prawy2){
	s2=(lewy2+prawy2)/2;
	if(szuk2>tab[s2]){
		lewy2=s2+1;
	}
	else{
		prawy2=s2;
	}
}
if(tab[n-1]>=szuk2){

for(int i=1;i<n;i++){
	if(tab[lewy2+i]==szuk2){
	lewy2++;
	}
}
}
else{
		cout<<"cos poszlo nie tak wpisz poprawne dane ";
		return 0;
}
koniec=lewy2;
cout<<"numer tablicy liczby pocz¹tkowej: "<<pocz<<" "<<"numer tablicy liczby koncowej: "<<koniec<<endl;
if(koniec-pocz>0){
	 cout<<"ilosc liczb w przedziale otwartym to: "<<koniec-(pocz+1)<<endl;
	  cout<<"ilosc liczb w przedziale zamknietym to: "<<koniec-(pocz+1)+2<<endl;
}

return 0;
}

