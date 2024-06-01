#include <bits/stdc++.h>
//Micha³ Kossakowski 4E
using namespace std;

int main(){
double a,b,c, eps=0.001;
cin>>c;  // szukamy pierwiastka z c
a=1; // dlugosc pierwszego boku
b=c; // dlugosc drugiego boku
while(abs(a-b)>eps){  //dopoki roznica miedzy bokami jest wieksza niz zalozona dokladnosc wyniku
	b=(a+b)/2;  // bo to srednia arytmetyczna tych bokow
	a=c/b;  // bok a po pomnozeniu przez b musi dac c
}
//cout.precision(2)
cout<<fixed<<a;  // wypisz jakis bok (oba sa takie same) moge wypisac a lub b





return 0;
}


