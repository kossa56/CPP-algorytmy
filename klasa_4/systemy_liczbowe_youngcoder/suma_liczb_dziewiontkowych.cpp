#include <iostream>
#include <cmath>
#include <algorithm>
//Micha� Kossakowski 4E
using namespace std;
string dodaj(string liczba1, string liczba2, int podstawa){//dodawanie liczb naturalnych w systemie dziessietnym
	string suma="";
	int s;//suma cyfr
int cyfra1,cyfra2;//aktualne cyfry liczb
int przeniesienie = 0;
//dodawanie zer wiod�cych
while (liczba1.size() != liczba2.size()){//dopuki liczby maj� r�zne d�ugo�ci wykonuj
	if(liczba1.size() < liczba2.size()) liczba1 = '0' + liczba1;//je�li pierwsza jest kr�tsza, to dopisz 0 na pocz�tku
	else liczba2 = '0' + liczba2;// w przeciwnym razie dopisz drugiej liczbie 0 na pocz�tku
}

//dodawanie
for(int i = liczba1.size()-1; i>=0 ; i--){//od konca liczby do poczatku
	cyfra1 = liczba1[i] - '0';
	cyfra2 = liczba2[i] - '0';
	s= cyfra1 + cyfra2 + przeniesienie;//zsumuj cyfry (int) i przeniesienie
	suma = char(s % podstawa + '0') + suma;//dopisz do wyniku sume cyfr (typu char)
	przeniesienie= s / podstawa;
}
if(przeniesienie > 0) suma = char(przeniesienie + '0') + suma;//je�li suma ma wi�cej cyfr , to dopisz jedynk� na pocz�tku
//wypisywanie wyniku 
return suma;
}

int main (){
//ios_base::sync_with_studio(0);
string liczba;
int p=9;
string suma="";
while(cin>>liczba){
	suma=dodaj(suma,liczba,p);
}
cout<<suma;

return 0;
}

