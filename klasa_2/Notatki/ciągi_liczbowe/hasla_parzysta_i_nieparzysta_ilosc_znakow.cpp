#include <iostream>
#include <cmath>
#include <algorithm>
//Micha³ Kossakowski 2E
using namespace std;

int main(){
string s;
int l_p=0,l_np=0;
while(cin>>s){

	if(s.size()%2==0){
		l_p++;
	}
	else{
		l_np++;
	}
}
cout<<l_p<<" "<<l_np;





return 0;
}

