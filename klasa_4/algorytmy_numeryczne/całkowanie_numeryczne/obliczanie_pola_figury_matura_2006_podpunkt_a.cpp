#include <bits/stdc++.h>
//Micha³ Kossakowski 4E
using namespace std;
double f(double x)
{
    return -1*0.02 * x*x;
}
double g(double x)
{
    return 1+0.01 * x*x - 1 * 0.005*x;
}

int main(){
double c;
cin>>c;
double P1=0,P2=0,x,h;
int n=100000*c;
h=c/n;
x=h/2; 
for(int i=0;  i<n;  i++){
	
	P1=P1+abs(h*(g(x)+g(x+h))/2);
	P2=P2+abs(h*(f(x)+f(x+h))/2);
	x=x+h;
	
}
cout.precision(2);
cout<<fixed<<double(P1+P2);







return 0;
}
