#include <iostream>
#include <cmath>
#include <algorithm>
//Micha³ Kossakowski 2E
using namespace std;
int bin2dec(string binarna){
	int liczba=0;
	for(int i=0;i<binarna.size();i++){
	int cyfra =binarna[i]-'0';
	liczba=liczba*2+cyfra;
}
return liczba;
}

int main(){
string binarna;
cin>>binarna;
cout<<bin2dec(binarna)<<endl;






return 0;
}

