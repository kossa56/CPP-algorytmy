#include <iostream>
#include <cmath>
#include <algorithm>
//Micha³ Kossakowski 3E
using namespace std;
int tab[4]={10,6,5,1};
int main(){
int kwota,licznik=0;
cin>>kwota;
for(int i=0;kwota>0;i++){
	licznik=licznik+kwota/tab[i];
	kwota=kwota%tab[i];
}
cout<<licznik;

return 0;
}


