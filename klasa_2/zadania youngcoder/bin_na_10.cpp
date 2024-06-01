#include <iostream>
#include <cmath>
#include <algorithm>
//Micha³ Kossakowski 2E
using namespace std;

int main(){
string b;


while(cin>>b){


int liczba =0;
for(int i=0;i<b.size();i++){
	int cyfra =b[i]-'0';
	liczba=liczba*2+cyfra;
}
cout<<liczba<<endl;
}






return 0;
}

