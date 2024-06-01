#include <bits/stdc++.h>
//Micha³ Kossakowski 4E
using namespace std;
double f(double x){
	return (x-2)*(x-2);
}
int main(){
int n=100000;
double  b=2, h, x, P=0;
h=b/n;
x=h/2;
for(int i=0; i<n; i++){
	P=P+h*( (f(x)+ f(x+h) )/2 );
	x=x+h;
}
cout.precision(2);
cout<<fixed<<P;





return 0;
}


