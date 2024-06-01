#include <bits/stdc++.h>
//Micha³ Kossakowski 4E
using namespace std;

string hex2bin(string hex){
	string bin="";
	for(int i=hex.size()-1; i>=0; i--){
		if(hex[i]=='1'){
			bin= "0001"+bin;
			continue;
		}
		if(hex[i]=='2'){
			bin= "0010" + bin;
			continue;
		}
		if(hex[i]=='3'){
			bin= "0011"+bin;
			continue;
		}
		if(hex[i]=='4'){
			bin= "0100"+bin;
			continue;
		}
			if(hex[i]=='5'){
			bin= "0101"+bin;
			continue;
		}
			if(hex[i]=='6'){
			bin= "0110"+bin;
			continue;
		}
			if(hex[i]=='7'){
			bin= "0111"+bin;
			continue;
		}
			if(hex[i]=='8'){
			bin= "1000"+bin;
			continue;
		}
			if(hex[i]=='9'){
			bin= "1001"+bin;
			continue;
		}
			if(hex[i]=='A'){
			bin= "1010"+bin;
			continue;
		}
			if(hex[i]=='B'){
			bin= "1011"+bin;
			continue;
		}
			if(hex[i]=='C'){
			bin= "1100"+bin;
			continue;
		}
			if(hex[i]=='D'){
			bin= "1101"+bin;
			continue;
		}
			if(hex[i]=='E'){
			bin= "1110"+bin;
			continue;
		}
			if(hex[i]=='F'){
			bin= "1111"+bin;
			continue;
		}
	}
	int i=0;
	while(i<bin.size()-1 && bin[i]=='0'){
	bin.erase(i,1);
	}

	
	return bin;
}

int main(){
	string hex;
	int n;
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>hex;
		cout<<hex2bin(hex)<<endl;
	}





return 0;
}

