#include <iostream>
#include <cmath>
#include <algorithm>
//Micha³ Kossakowski 3E
using namespace std;
int nominaly[9]={500, 200, 100, 50, 20, 10, 5, 2, 1};
int main(){
 int kwota,ile=0;
 cin>>kwota;
 for(int i=0;kwota>0;i++){
 	ile=ile+kwota/nominaly[i];
 	if(kwota/nominaly[i]>0){
 		cout<<nominaly[i]<<" "<<kwota/nominaly[i]<<endl;
	 }
 	kwota=kwota%nominaly[i];
 }
cout<<"lacznie nominalow "<<ile;

return 0;
}


