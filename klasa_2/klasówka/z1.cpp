#include <iostream>
#include <cmath>
#include <algorithm>
//Micha³ Kossakowski 2E
using namespace std;

int main(){
int n,s,in=-1;
cin>>n;
int*tab=new int[n];
for(int i=0;i<n;i++){
    cin>>tab[i];
}
cin>>s;
for(int i=0;i<n;i++){
    if(tab[i]==s){
    in=i;
    cout<<in<<" ";
    }
}
if(in==-1){
    cout<<"NIE MA";
}


return 0;
}

