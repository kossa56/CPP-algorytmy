#include <iostream>
#include <cmath>
#include <algorithm>
//Micha³ Kossakowski 2E
using namespace std;
double  CzyTrojkatProstokatn(double a,double b, double c){
	if(a*a+b*b==c*c || a*a+c*c==b*b || c*c+b*b==a*a){
		return true;
	}
	else{
		return false;
	}
}
int main(){
double a,b,c;
int n;
cin>>n;
for(int i=1;i<=n;i++){
	cin>>a>>b>>c;
	if( CzyTrojkatProstokatn(a,b,c)==true){
		cout<<"JEST  TO  TROJKAT  PROSTOKATNY"<<endl;
	}
	else{
		cout<<"NIE  JEST  TO  TROJKAT PROSTOKATNY"<<endl;
	}
}






return 0;
}

