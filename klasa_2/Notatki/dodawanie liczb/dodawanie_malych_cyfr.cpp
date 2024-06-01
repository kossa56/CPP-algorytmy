#include <iostream>
#include <cmath>
#include <algorithm>
//Micha³ Kossakowski 2E
using namespace std;

int main(){
string liczba1, liczba2, suma="";
int s;  // suma cyfr
int cyfra1, cyfra2;
cin >> liczba1 >> liczba2;
	for(int i = liczba1.size()-1; i>=0; i--){ // od koñca liczby do pocz¹tku
		cyfra1=liczba1[i]-'0';
		cyfra2=liczba2[i]-'0';
		s=cyfra1+cyfra2;  //zsumuj cyfry
		suma= char( s + '0')  +suma;        // dopisz do wyniku sume cyfr
	}
	cout<<suma;


return 0;
}

