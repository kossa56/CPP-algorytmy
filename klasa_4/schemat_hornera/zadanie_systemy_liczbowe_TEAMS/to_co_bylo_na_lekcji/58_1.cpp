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
string dec2bin(long long liczba){
	string wyn;
	while(liczba>0){
		wyn = char(liczba%2 + '0') + wyn;
		liczba = liczba/2;
	}
	return wyn;
}
 



int main(){
	ifstream plik1("dane_systemy1.txt");
	
	string godzina, temperatura;
	long long najm_temperatura_dec, temperatura_dec, ujemna = 1;
	//==================================================
	//STACJA PIERWSZA (SYSTEM DWÓJKOWY)
	//==================================================
	plik1>>godzina>>temperatura;
	if(temperatura[0] == '-'){
		temperatura[0] = '0';
		ujemna = -1;
	}
	najm_temperatura_dec = zamiana(temperatura, 2) * ujemna;
	ujemna = 1;
	
	while(plik1>>godzina>>temperatura){
		if(temperatura[0] == '-'){
			temperatura[0] = '0';
			ujemna = -1;
		}
		temperatura_dec = zamiana(temperatura, 2) * ujemna;
		ujemna = 1;
		if(temperatura_dec < najm_temperatura_dec){
			najm_temperatura_dec = temperatura_dec;
		}
	}
	
	if(najm_temperatura_dec <0){
		cout<<"-"<<dec2bin(najm_temperatura_dec*-1)<<" ";
	}
	else{
		cout<<dec2bin(najm_temperatura_dec)<<" ";
	}
	plik1.close();
	//==================================================
	//STACJA DRUGA (SYSTEM CZWÓRKOWY)
	//==================================================
	ifstream plik2("dane_systemy2.txt");
		
	plik2>>godzina>>temperatura;
	if(temperatura[0] == '-'){
		temperatura[0] = '0';
		ujemna = -1;
	}
	najm_temperatura_dec = zamiana(temperatura, 4) * ujemna;
	ujemna = 1;
	
	while(plik2>>godzina>>temperatura)
	{
		if(temperatura[0] == '-')
		{
			temperatura[0] = '0';
			ujemna = -1;
		}
		temperatura_dec = zamiana(temperatura, 4) * ujemna;
		ujemna = 1;
		if(temperatura_dec < najm_temperatura_dec){
			najm_temperatura_dec = temperatura_dec;
		}
	}
	
	if(najm_temperatura_dec <0){
		cout<<"-"<<dec2bin(najm_temperatura_dec*-1)<<" ";
	}
	else{
		cout<<dec2bin(najm_temperatura_dec)<<" ";
	}
	plik2.close();
	//==================================================
	//STACJA TRZECIA (SYSTEM ÓSEMKOWY)
	//==================================================
	ifstream plik3("dane_systemy3.txt");
		
	plik3>>godzina>>temperatura;
	if(temperatura[0] == '-'){
		temperatura[0] = '0';
		ujemna = -1;
	}
	najm_temperatura_dec = zamiana(temperatura, 8) * ujemna;
	ujemna = 1;
	
	while(plik3>>godzina>>temperatura){
		if(temperatura[0] == '-'){
			temperatura[0] = '0';
			ujemna = -1;
		}
		temperatura_dec = zamiana(temperatura, 8) * ujemna;
		ujemna = 1;
		if(temperatura_dec < najm_temperatura_dec){
			najm_temperatura_dec = temperatura_dec;
		}
	}
	
	if(najm_temperatura_dec <0){
		cout<<"-"<<dec2bin(najm_temperatura_dec*-1)<<" ";
	}
	else{
		cout<<dec2bin(najm_temperatura_dec)<<" ";
	}
	plik3.close();
	
	return 0;
}
