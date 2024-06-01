#include <iostream>
#include <cmath>
#include <algorithm>
//Micha³ Kossakowski 2E
using namespace std;
double PoleTrojkat(double a, double h){
	return a*h/2;
}
int main(){
double a,h;
for(int i=1;i<=5;i++){
	cin>>a>>h;
	
	cout<<PoleTrojkat(a,h)<<endl;
	
}






return 0;
}

