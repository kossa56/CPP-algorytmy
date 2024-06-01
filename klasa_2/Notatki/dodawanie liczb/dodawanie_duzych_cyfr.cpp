#include <iostream>
#include <cmath>
#include <algorithm>
//Micha³ Kossakowski 2E
using namespace std;

int main(){
string liczba1, liczba2, suma="";
int s;  // suma cyfr
int cyfra1, cyfra2;
int przeniesienie =0;
cin >> liczba1 >> liczba2;
	for(int i = liczba1.size()-1; i>=0; i--){ // od koñca liczby do pocz¹tku
		cyfra1=liczba1[i]-'0';
		cyfra2=liczba2[i]-'0';
		s=cyfra1+cyfra2+ przeniesienie;  //zsumuj cyfry i przeniesienie
		suma= char( s % 10 + '0')  +suma; 
		przeniesienie = s/ 10;       // dopisz do wyniku sume cyfr
	}
	if (przeniesienie>0){
		suma='1'+suma;
	}
	cout<<suma;


return 0;
}

