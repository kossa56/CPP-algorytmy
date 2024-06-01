#include <iostream>
#include <cmath>
#include <algorithm>
//Micha³ Kossakowski
using namespace std;
string odejmij(string liczba1, string liczba2, int podstawa){//dodawanie liczb naturalnych w systemie dziessietnym
	string roznica="";
	int s;//suma cyfr
int cyfra1,cyfra2;//aktualne cyfry liczb
int pozyczka = 0;
//dodawanie zer wiod¹cych
while (liczba1.size() != liczba2.size()){//dopuki liczby maj¹ rózne d³ugoœci wykonuj
	if(liczba1.size() < liczba2.size()) liczba1 = '0' + liczba1;//jeœli pierwsza jest krótsza, to dopisz 0 na pocz¹tku
	else liczba2 = '0' + liczba2;// w przeciwnym razie dopisz drugiej liczbie 0 na pocz¹tku
}
cout << liczba1 << endl << liczba2 << endl;//dla sprawdzenia


//odejmowanie
for(int i = liczba1.size()-1; i>=0 ; i--){//od konca liczby do poczatku
	cyfra1 = liczba1[i] - '0';
	cyfra2 = liczba2[i] - '0';
	if(cyfra1+pozyczka<cyfra2){
	
	s= cyfra1 + pozyczka + podstawa -cyfra2;//zsumuj cyfry (int) i przeniesienie
	pozyczka=-1;
}
else{
	s=cyfra1+pozyczka-cyfra2;
	pozyczka=0;
}
	roznica = char(s % podstawa + '0') + roznica;//dopisz do wyniku sume cyfr (typu char)
}
int i=0;
while(i<roznica.size()-1 && roznica[i]=='0'){
	roznica.erase(i,1);
}

return roznica;
}

int main (){
//ios_base::sync_with_studio(0)
string liczba1, liczba2;
int p;
cout<<"Podaj dwie liczby"<<endl;
cin>> liczba1 >> liczba2;
cout<<"Podaj podstawe"<<endl;
cin>>p;
cout<<"Roznica liczb wynosi   "<<odejmij(liczba1,liczba2,p)<<endl;


return 0;
}

