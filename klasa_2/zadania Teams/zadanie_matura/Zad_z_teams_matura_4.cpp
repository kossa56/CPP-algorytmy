#include <iostream>
#include <cmath>
#include <algorithm>
#include <fstream>
//Micha³ Kossakowski 2E
using namespace std;
int tab[27];
int main(){
ifstream fin("przyklad.txt");   
ofstream fout("wynik.txt");
string rozkaz,wyraz="";
char znak;
int licznik_dopisz=0,licznik_usun=0,licznik_zmien=0,licznik_przesun=0,sw_dopisz=0,sw_usun=0,sw_zmien=0,sw_przesun=0,indeks=0;

while(fin>>rozkaz>>znak){
	if(rozkaz=="DOPISZ"){
		wyraz=wyraz+znak;
		licznik_dopisz++;
		if(licznik_dopisz>sw_dopisz){
			sw_dopisz=licznik_dopisz;
		}
		licznik_usun=0;
		licznik_zmien=0;
		licznik_przesun=0;
		tab[znak-64]++;
	}	
		if(rozkaz=="USUN"){
			wyraz.erase(wyraz.size()-1,1);
			licznik_usun++;
			if(licznik_usun>sw_usun){
				sw_usun=licznik_usun;
			}
			licznik_dopisz=0;
			licznik_zmien=0;
			licznik_przesun=0;
	}	
		if(rozkaz=="ZMIEN"){
			wyraz[ wyraz.size()-1 ]=znak;
			licznik_zmien++;
				if(licznik_zmien>sw_zmien){
					sw_zmien=licznik_zmien;
			}
		licznik_usun=0;
		licznik_dopisz=0;
		licznik_przesun=0;		
	}
		if(rozkaz=="PRZESUN"){
			for(int i=0;i<wyraz.size();i++){
				if(wyraz[i]==znak && znak>='A' && znak<='Z'){
					wyraz[i]=wyraz[i]+1;
					if(wyraz[i]>'Z'){
						wyraz[i]=wyraz[i]-26;
						}
					break;
				}
			}
			licznik_przesun++;
			if(licznik_przesun>sw_przesun){
				sw_przesun=licznik_przesun;
			}
		licznik_usun=0;
		licznik_zmien=0;
		licznik_dopisz=0;
	}
	

}
fout<<"ZAD 4.1"<<" wynik to:  "<<wyraz.size()<<endl;
fout<<"ZAD 4.2"<<" wynik to:  ";
if(sw_dopisz>sw_usun && sw_dopisz>sw_zmien && sw_dopisz>sw_przesun){
	fout<<"DOPISZ, dlugosc ciagu to: "<<sw_dopisz<<endl;
}
if(sw_dopisz<sw_usun && sw_usun>sw_zmien && sw_usun>sw_przesun){
	fout<<"USUN, dlugosc ciagu to: "<<sw_usun<<endl;
}
if(sw_zmien>sw_usun && sw_dopisz<sw_zmien && sw_zmien>sw_przesun){
	fout<<"ZMIEN, dlugosc ciagu to: "<<sw_zmien<<endl;
}
if(sw_przesun>sw_usun && sw_przesun>sw_zmien && sw_dopisz<sw_przesun){
	fout<<"PRZESUN, dlugosc ciagu to: "<<sw_przesun<<endl;
}
fout<<"ZAD 4.3"<<" wynik to: ";
for(int i=0;i<30;i++){
	if(tab[i]>tab[indeks]){
		indeks=i;
	}
}
fout<<"litera "<< char(indeks+64)<<" dopisywana "<<tab[indeks]<<" razy "<<endl;
fout<<"ZAD 4.4"<<" wynik to:  "<<wyraz;
return 0;
}

