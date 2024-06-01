#include <bits/stdc++.h>
#include <queue>
//Micha³ Kossakowski 3E
using namespace std;

int main(){
queue<int> kolejka;
kolejka.push(3);
kolejka.push(1);
kolejka.push(5); // 3 1 5
 
cout<< kolejka.front() << endl; // 3

kolejka.pop();

int liczba;

for(int i=0;  i < 5; i++){
	cin>>liczba;
	kolejka.push(liczba);
}
// mam teraz 7 liczb
while(!kolejka.empty()){
	cout<<kolejka.front()<<endl;
	kolejka.pop();
}

return 0;
}

