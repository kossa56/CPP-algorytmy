#include <bits/stdc++.h>
//Micha³ Kossakowski 4E
using namespace std;
double f(double x){
	return  x*x*x + 5*x*x -3*x - 15;
}
double a[15];
double b[15];
int main(){
a[0]=- 10;
a[1]= -3;
a[2] = 0;
///////////
b[0]= -4;
b[1]= 0;
b[2] = 3;
 double s,eps=0.001;
 for(int i=0; i<3; i++){
 	while(abs(b[i]-a[i])>eps){
 		s=(a[i]+b[i])/2;
 		if(s==0){
 			cout.precision(2);
 			cout<<fixed<<s<<endl;
 			break;
		 }
		 if( f(a[i])*f(s) < 0 ){
		 	b[i]=s;
		 }
		 else{
		 	a[i]=s;
		 }
	 }
	 cout.precision(2);
	 cout<<fixed<<s<<endl;
	 
	 
 }





return 0;
}


