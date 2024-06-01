#include <iostream>
#include <cmath>
#include <algorithm>
//Micha³ Kossakowski 2E
using namespace std;
string dodaj(string liczba1, string liczba2){//dodawanie liczb naturalnych w systemie dziessietnym
	string suma="";
int s;//suma cyfr
int cyfra1,cyfra2;//aktualne cyfry liczb
int przeniesienie = 0;
//dodawanie zer wiod¹cych
while (liczba1.size() != liczba2.size()){//dopuki liczby maj¹ rózne d³ugoœci wykonuj
	if(liczba1.size() < liczba2.size()) liczba1 = '0' + liczba1;//jeœli pierwsza jest krótsza, to dopisz 0 na pocz¹tku
	else liczba2 = '0' + liczba2;// w przeciwnym razie dopisz drugiej liczbie 0 na pocz¹tku
}


for(int i = liczba1.size()-1; i>=0 ; i--){//od konca liczby do poczatku
	cyfra1 = liczba1[i] - '0';
	cyfra2 = liczba2[i] - '0';
	s= cyfra1 + cyfra2 + przeniesienie;//zsumuj cyfry (int) i przeniesienie
	suma = char(s % 10 + '0') + suma;//dopisz do wyniku sume cyfr (typu char)
	przeniesienie= s / 10;
}
if(przeniesienie > 0) suma = char(przeniesienie + '0') + suma;//jeœli suma ma wiêcej cyfr , to dopisz jedynkê na pocz¹tku
//wypisywanie wyniku 
return suma;

}
int main(){	
ios_base::sync_with_stdio(0);
int n;
cin>>n;
string f1="1",f2="1",f;
if(n==0){
cout<<"0"<<endl;
}
if(n<3){
	cout<<"1"<<endl;
}
for(int i=3;i<=n;i++){
	f=dodaj(f1,f2);
	f1=f2;
	f2=f;
}
cout<<f<<endl;




return 0;
}

