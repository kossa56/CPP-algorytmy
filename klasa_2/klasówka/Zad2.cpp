#include <iostream>
#include <cmath>
#include <algorithm>
//Micha³ Kossakowski 2E
using namespace std;

int main(){
int const n=100;
int s;
int*tab=new int[n];
for(int i;i<n;i++){
    cin>>tab[i];
}
cin>>s;
for(int i=0; i<=s-2; i++){
    for(int j=0; j<=s-2; j++){
        if(tab[j]>tab[j+1]){
        swap(tab[j], tab[j+1]);
        }
    }
}
for(int i=0;i<n;i++)
{
    cout<<tab[i]<<" ";
}

return 0;
}

