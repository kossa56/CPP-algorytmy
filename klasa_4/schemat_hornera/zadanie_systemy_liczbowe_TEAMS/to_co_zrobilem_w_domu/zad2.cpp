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

int main(){
	
ifstream dane1("dane_systemy1.txt");
ifstream dane2("dane_systemy2.txt");
ifstream dane3("dane_systemy3.txt");
string l1, l2, l3, d;

long long godz = 12, t=0;

while(dane1>>l1>>d){
	dane2>>l2>>d;
	dane3>>l3>>d;
	if((X2dec(l1, 2) != godz) && (X2dec(l2, 4) != godz) && (X2dec(l3, 8) != godz)){
		t++;
		}  
	godz = godz + 24;
}

cout<<t;

dane1.close();
dane2.close();
dane3.close();






return 0;
}

