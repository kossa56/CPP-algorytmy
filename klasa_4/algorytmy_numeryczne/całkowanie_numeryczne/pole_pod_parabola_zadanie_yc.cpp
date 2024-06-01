#include <bits/stdc++.h>
//Micha³ Kossakowski 4E
using namespace std;
double f(double x)
{
    return x*x;
}
int main(){

double a,b,P=0,x,h;
cin>>a>>b;
int n=  1000* (b-a);
h=(b-a)/n;
x=a+h/2;
for(int i=0;  i<n;  i++){
	
	P=P+h*f(x);
	x=x+h;
	
}
cout.precision(2);
cout<<fixed<<P;





return 0;
}


