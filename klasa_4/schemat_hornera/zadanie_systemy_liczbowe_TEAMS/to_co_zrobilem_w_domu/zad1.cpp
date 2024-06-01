#include <bits/stdc++.h>
//Micha³ Kossakowski 4E
using namespace std;

long long X2dec(string b, int podstawa){
	long long W=0;
	for(int i=0; i< b.size();i++){
		if(b[i]>='0' && b[i]<='9'){
			W=W*podstawa + int(b[i]-'0');
			
		}
		else{
			W=W*podstawa+int(b[i]-'A'+10);
		}
	}
	return W;
}


string dec2bin(long long liczba){
	string wyn;
	while(liczba>0){
		wyn =char(liczba%2 + '0')+wyn;
		liczba=liczba/2; 
	}
	return wyn;
}


int main(){

string godz, temp;
long long n_temp_dec, temp_dec, u=1;

/////////////////CZÊŒÆ PIERWSZA///////////////////

ifstream dane1("dane_systemy1.txt");
dane1>>godz;
dane1>>temp;
if(temp[0]= '-'){
	temp[0]='0';
	u= -1;
}
n_temp_dec=X2dec(temp, 2)*u;
u=1;
	
while(dane1>>godz>>temp){
	if(temp[0] == '-'){
		temp[0]='0';
		u = -1;
	}
		temp_dec=X2dec(temp, 2)*u;
		u= 1;
		if(temp_dec < n_temp_dec){
			n_temp_dec = temp_dec;
		}
	}
	
	if(n_temp_dec <0){
		cout<<"-"<<dec2bin(n_temp_dec*-1)<<endl;
	}
	else{
		cout<<dec2bin(n_temp_dec)<<endl;
	}
	dane1.close();


/////////////////CZÊŒÆ DRUGA///////////////////

ifstream dane2("dane_systemy2.txt");
dane2>>godz;
dane2>>temp;
if(temp[0]= '-'){
	temp[0]='0';
	u= -1;
}
n_temp_dec=X2dec(temp, 4)*u;
u=1;
	
while(dane2>>godz>>temp){
	if(temp[0] == '-'){
		temp[0]='0';
		u = -1;
	}
		temp_dec=X2dec(temp, 4)*u;
		u= 1;
		if(temp_dec < n_temp_dec){
			n_temp_dec = temp_dec;
		}
	}
	
	if(n_temp_dec <0){
		cout<<"-"<<dec2bin(n_temp_dec*-1)<<endl;
	}
	else{
		cout<<dec2bin(n_temp_dec)<<endl;
	}
	dane2.close();

/////////////////CZÊŒÆ TRZECIA///////////////////

ifstream dane3("dane_systemy3.txt");
dane3>>godz;
dane3>>temp;
if(temp[0]= '-'){
	temp[0]='0';
	u= -1;
}
n_temp_dec=X2dec(temp, 8)*u;
u=1;
	
while(dane3>>godz>>temp){
	if(temp[0] == '-'){
		temp[0]='0';
		u = -1;
	}
		temp_dec=X2dec(temp, 8)*u;
		u= 1;
		if(temp_dec < n_temp_dec){
			n_temp_dec = temp_dec;
		}
	}
	
	if(n_temp_dec <0){
		cout<<"-"<<dec2bin(n_temp_dec*-1)<<endl;
	}
	else{
		cout<<dec2bin(n_temp_dec)<<endl;
	}
	dane3.close();

return 0;
}

