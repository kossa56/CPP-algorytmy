#include <iostream>
#include <cmath>
#include <algorithm>
//Micha³ Kossakowski 3E
using namespace std;

int main(){
int n;
cin>>n;
for(int i=0;i<n+2;i++){
	cout<<"#";
}
cout<<endl;
cout<<"#";
for(int i=0;i<n;i++){
	cout<<"@";
}
cout<<"#";
cout<<endl;
for(int i=0;i<n+2;i++){
	cout<<"#";
}
return 0;
}

