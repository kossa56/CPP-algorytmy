#include <iostream>
#include <cmath>
#include <algorithm>
//Micha³ Kossakowski 2E
using namespace std;
long long dziwne_dodawanie(long long a){
    if(a<3){

        return 1;
}
else{

    return dziwne_dodawanie(a-2)+dziwne_dodawanie(a-1);
}
}

int main(){
ios_base::sync_with_stdio(0);
long long a;
cin>>a;
if(a==0){
	cout<<"0"<<endl;
	return 0;
}
cout<<dziwne_dodawanie(a)<<endl;



    return 0;
}
