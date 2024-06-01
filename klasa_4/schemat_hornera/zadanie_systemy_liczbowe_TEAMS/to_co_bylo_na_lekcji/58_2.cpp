#include<bits/stdc++.h>
//Micha³ Kossakowski 4E
using namespace std;
long long zamiana(string slowo, long long podstawa){
	long long W = 0;
	for(int i = 0; i < slowo.size(); i++){
		if(slowo[i] - '0' < 9){
			W = W * podstawa + int(slowo[i] - '0');
		}
		else{
			W = W * podstawa + int(slowo[i] - '7');
		}
	}
	return W;
}
 

int main()
{
	ifstream plik1("dane_systemy1.txt");
	ifstream plik2("dane_systemy2.txt");
	ifstream plik3("dane_systemy3.txt");
	string liczba1, liczba2, liczba3, dod;
	long long godzina = 12, ilo = 0;
	while(plik1>>liczba1>>dod){
		plik2>>liczba2>>dod;
		plik3>>liczba3>>dod;
		if((zamiana(liczba1, 2) != godzina) || (zamiana(liczba2, 4) != godzina) || (zamiana(liczba3, 8) != godzina)) ilo++; 
		godzina = godzina + 24;
	}
	cout<<ilo;
	plik1.close();
	plik2.close();
	plik3.close();
	return 0;
}
