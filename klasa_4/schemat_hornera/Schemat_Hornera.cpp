#include <bits/stdc++.h>
//Micha³ Kossakowski 4E
using namespace std;
double a[1005];
int main(){
int n;
double x,W=0;
cin>>n;
for(int i=0; i<=n; i++){
	cin>>a[i];
}
cin>>x;
for(int i=0; i<=n; i++){
	W=W*x+a[i];
}
cout<<W;




return 0;
}


