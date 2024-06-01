#include <iostream>
#include <cmath>
#include <algorithm>
//Micha³ Kossakowski 3E
using namespace std;

int main(){
int a,b,c;
cin>>a>>b>>c;
if(a+b>c && a+c>b && b+c>a){
	cout<<"TAK";
}
else{
	cout<<"NIE";
}




return 0;
}

