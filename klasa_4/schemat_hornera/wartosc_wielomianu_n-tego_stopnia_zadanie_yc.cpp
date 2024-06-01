#include <bits/stdc++.h>
//Micha³ Kossakowski 4E
using namespace std;
double a[100005];
int main(){
int n;
double x,W=0;
cin>>x;
cin>>n;
for(int i=0; i<=n; i++){
	cin>>a[i];
}

for(int i=0; i<=n; i++){
	W=W*x+a[i];
}
cout.precision(2);
cout<<fixed<<W;




return 0;
}


