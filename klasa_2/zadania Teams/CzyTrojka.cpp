#include <iostream>
#include <cmath>
#include <algorithm>
//Micha³ Kossakowski 2E
using namespace std;
double CzyTrojka(double a, double b, double c){
	if(a+b>c && a+c>b && b+c>a){
		return true;
	}
	else{
		return false;
	}
}
int main(){
double a,b,c;
cin>>a>>b>>c;
if(CzyTrojka(a,b,c)==true){
	cout<<"DA SIE ZBUDOWAC TROJKAT"<<endl;
} 
else{
cout<<"NIE DA SIE ZBUDOWAC TROJKATA"<<endl;
}






return 0;
}

