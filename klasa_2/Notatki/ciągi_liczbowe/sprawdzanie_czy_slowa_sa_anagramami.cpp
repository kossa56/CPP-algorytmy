#include <iostream>
#include <cmath>
#include <algorithm>
//Micha³ Kossakowski 2E
using namespace std;
bool anagram(string s1, string s2, string s3, string s4, string s5){
	sort(s1.begin(), s1.end());
	sort(s2.begin(), s2.end());
	sort(s3.begin(), s3.end());
	sort(s4.begin(), s4.end());
	sort(s5.begin(), s5.end());
	if(s1==s2 && s2==s3 && s3==s5 && s3==s4){
		return true;
	}
	else{
		return false;
	}
}
int main(){
string s1,s2,s3,s4,s5;
while(cin>>s1>>s2>>s3>>s4>>s5){
	if(anagram(s1,s2,s3,s4,s5)==true){
		cout<<s1<<" "<<s2<<" "<<s3<<" "<<s4<<" "<<s5<<endl;
	}
}




return 0;
}

