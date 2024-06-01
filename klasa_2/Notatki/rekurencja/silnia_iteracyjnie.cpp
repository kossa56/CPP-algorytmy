#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
long long silnia(int n){
	long long s=1;
	for(int i=1;i<=n;i++){
		s=s*i;
	}
	return s;
}
int main(){
int n;
cin>>n;
cout<<silnia(n);

return 0;
}

