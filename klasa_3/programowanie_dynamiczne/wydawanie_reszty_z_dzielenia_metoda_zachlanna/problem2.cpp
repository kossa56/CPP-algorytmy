#include <iostream>
#include <cmath>
#include <algorithm>
//Micha³ Kossakowski 3E
using namespace std;
int nominaly[13]={50000, 20000, 10000, 5000, 2000, 1000, 500, 200, 100, 50, 20, 10, 1};
int main(){
 float kwota;
 int ile=0;
 cin>>kwota;
 kwota=kwota*100;
 for(int i=0;kwota>0;i++){
 	ile=ile+int(kwota)/nominaly[i];
 	if(int(kwota)/nominaly[i]>0){
 		cout<<float(nominaly[i]/100.0)<<" "<<"x"<<" "<<int(kwota)/nominaly[i]<<endl;
	 }
 	kwota=int(kwota)%nominaly[i];
 }
cout<<"lacznie nominalow "<<ile;

return 0;
}


