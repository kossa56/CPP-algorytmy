#include <bits/stdc++.h>
//Micha³ Kossakowski 3E
using namespace std;

int main(){
queue<int>kolejka;
char znak;
int  liczba;
while(cin>>znak){
 		cin>>liczba;
	if(znak=='t'){
		kolejka.push(liczba);
	}
	else if(znak=='w') {
		for(int i=0; i<liczba; i++){
		
			if(!kolejka.empty()){
			kolejka.pop();
			}
		}
	}
}

while(!kolejka.empty()){
	cout<<kolejka.front()<<" ";
	kolejka.pop();
}



return 0;
}

