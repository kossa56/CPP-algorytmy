#include <bits/stdc++.h>
//Micha³ Kossakowski 4E
using namespace std;
// y = 2 x - 1
double f(double x)
{
    return 2*x-1;
}
int main(){
 double eps = 0.01, s, a, b;
    cin>>a>>b;

    while(abs(b - a)> eps){
        s = (a +b)/2;
        if(f(s) == 0){
            cout<<s;
            return 0;
        }
        if(f(a)*f(s) < 0){
        	b = s;
		} 
        else{
        	a =s;
		} 
    }
    //cout.precision(2);
    cout<<fixed<<s;




return 0;
}

